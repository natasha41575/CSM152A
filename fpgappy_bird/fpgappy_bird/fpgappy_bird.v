`timescale 1ns / 1ps

module top(
    input wire clk,             // board clock: 100 MHz on Arty/Basys3/Nexys
    input wire btnRst,         // reset button
	input wire btnFlap,
    output wire Hsync,       // horizontal sync output
    output wire Vsync,       // vertical sync output
    output wire [2:0] vgaRed,    // 4-bit VGA red output
    output wire [2:0] vgaGreen,    // 4-bit VGA green output
    output wire [1:0] vgaBlue,     // 4-bit VGA blue output
	output [3:0] an,	// Digit to light up
	output [7:0] seg	// Segments to light up
    );
	
	wire rst; 
	wire arst_i;
	reg [1:0] arst_ff;

	wire [17:0] clk_dv_inc;
	reg [16:0]  clk_dv;
	reg         clk_en;
	reg         clk_en_d;
	
	reg         flap;
	reg [2:0]   step_d_flap;

    // 25 MHz pixel strobe
    reg [15:0] pix_cnt;
    reg pix_stb;
	
	// 23.85hz physics clock
	reg [21:0] physics_cnt; 
	reg physics_stb;
	
	// 762hz seven seg display clk
	reg [16:0] sevenseg_cnt;
	reg seven_seg_stb;
	
	// Display coords
	wire [9:0] x;  // current pixel x position: 10-bit value: 0-1023
    wire [8:0] y;  // current pixel y position:  9-bit value: 0-511
	wire animate;  // high when we're ready to animate at end of drawing
	
	// Points
	wire [3:0] points_3;
	wire [3:0] points_2;
	wire [3:0] points_1;
	wire [3:0] points_0;
	wire point_add;
	
	// Game Logic
	wire bird_die;
	wire out_of_bounds;
	
	// Game hitboxes and bounds
	wire bird_bounds;
	wire [11:0] bird_x1, bird_x2, bird_y1, bird_y2;
	wire floor_bounds;
	wire [11:0] floor_x1, floor_x2, floor_y1, floor_y2;
	wire sky_bounds;
	wire pipe_bounds;
	wire [11:0] pipe_x1, pipe_x2, pipe_y1, pipe_y2;
	
	//==Clock Divider==//
    always @(posedge clk) 
		begin
        {pix_stb, pix_cnt} <= pix_cnt + 16'h4000;  // divide by 4: (2^16)/4 = 0x4000
		{physics_stb, physics_cnt} <= physics_cnt + 1;
		{seven_seg_stb, sevenseg_cnt} <= sevenseg_cnt + 1;
		end


	//==Asynchronous Reset==//
	assign arst_i = btnRst;
	assign rst = arst_ff[0];
   
	always @ (posedge clk or posedge arst_i)
		if (arst_i)
			arst_ff <= 2'b11;
		else
			arst_ff <= {1'b0, arst_ff[1]};
	
	//==timing signal for clock enable==//
	assign clk_dv_inc = clk_dv + 1;
   
	always @ (posedge clk)
		if (rst)
			begin
			clk_dv   <= 0;
			clk_en   <= 1'b0;
			clk_en_d <= 1'b0;
			end
		else
			begin
			clk_dv   <= clk_dv_inc[16:0];
			clk_en   <= clk_dv_inc[17];
			clk_en_d <= clk_en;
			end
	
	//==Instruction Stepping Control / Debouncing==//
	always @ (posedge clk)
		if (rst)
			begin
			step_d_flap[2:0]	<= 0;
			end
		else if (clk_en) // Down sampling
			begin
			step_d_flap[2:0]  	<= {btnFlap, step_d_flap[2:1]};
			end
	   
	//==Detecting posedge of btnS==//
	wire is_btnFlap_posedge;
	assign is_btnFlap_posedge = ~ step_d_flap[0] & step_d_flap[1];
	always @ (posedge clk)
		if (rst) 
			flap <= 1'b0;
		else if (clk_en_d) 
			flap <= is_btnFlap_posedge;
		else                                   
			flap <= 0;

    vga640x480 _display (
        .i_clk(clk),
        .i_pix_stb(pix_stb),
        .i_rst(rst),
        .o_hs(Hsync), 
        .o_vs(Vsync), 
        .o_x(x), 
        .o_y(y),
		.o_animate(animate)
    );
	
	scoreboard _scoreboard (
		.points_3(points_3),
		.points_2(points_2),
		.points_1(points_1),
		.points_0(points_0),
		.rst(rst),
		.clk(clk),
		.point_add(point_add),
		.bird_die(bird_die)
	);
	
	sevenseg _sevenseg (
		.an(an),
		.seg(seg),
		.points_3(points_3),
		.points_2(points_2),
		.points_1(points_1),
		.points_0(points_0),
		.sevenseg_clk(seven_seg_stb)
	);
	
	// Draw Floor
    rectangle #(.IX(320), .IY(465), .X_SIZE(320), .Y_SIZE(15)) _floor (
        .i_clk(clk), 
        .i_rst(rst),
        .o_x1(floor_x1),
        .o_x2(floor_x2),
        .o_y1(floor_y1),
        .o_y2(floor_y2)
    );
	
	// Player-controlled Bird
	bird #(.H_SIZE(20), .IX(160), .IY(120), .GRAV(1)) _bird (
        .i_clk(clk), 
        .i_ani_stb(pix_stb),
		.i_physics_stb(physics_stb),
        .i_rst(rst | bird_die),
        .i_animate(animate),
		.flap(flap),
        .o_x1(bird_x1),
        .o_x2(bird_x2),
        .o_y1(bird_y1),
        .o_y2(bird_y2),
		.out_of_bounds(out_of_bounds)
    );    
	
	// Infinitely generated pipes
	pipe #(.X_SIZE(40), .Y_HOLE(80), .IX(680), .IY(240)) _pipe (
		.i_clk(clk), 
        .i_ani_stb(pix_stb),
		.i_physics_stb(physics_stb),
        .i_rst(rst | bird_die),
        .p1_x1(pipe_x1),
        .p1_x2(pipe_x2),
        .p1_y1(pipe_y1),
        .p1_y2(pipe_y2),
		.point_add(point_add)
	);

	// Check what pixel color(s) should be drawn
	assign bird_bounds = ((x > bird_x1) & (y > bird_y1) &
			(x < bird_x2) & (y < bird_y2)) ? 1 : 0;
	assign floor_bounds = ((x > floor_x1) & (y > floor_y1) &
			(x < floor_x2) & (y < floor_y2)) ? 1 : 0;
	assign pipe_bounds = ((x > pipe_x1) & (x < pipe_x2) & 
						 ((y < pipe_y1) | (y > pipe_y2))) ? 1 : 0;
	assign sky_bounds = (~bird_bounds & ~floor_bounds) ? 1 : 0;
	
	assign vgaRed[0] = 0;
	assign vgaRed[1] = 0;
	assign vgaGreen[0] = 0;
	assign vgaGreen[1] = 0;
	assign vgaBlue[0] = 0;
    assign vgaRed[2] = bird_bounds; 
    assign vgaGreen[2] = pipe_bounds | floor_bounds;  
    assign vgaBlue[1] = sky_bounds; 
	
	// Bird dies if it collides with a pipe or goes out of bounds
	assign bird_die = (bird_bounds & pipe_bounds) | out_of_bounds;
       
endmodule


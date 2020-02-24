`timescale 1ns / 1ps

module top(
    input wire clk,             // board clock: 100 MHz on Arty/Basys3/Nexys
    input wire btnRst,         // reset button
    output wire Hsync,       // horizontal sync output
    output wire Vsync,       // vertical sync output
    output wire [2:0] vgaRed,    // 4-bit VGA red output
    output wire [2:0] vgaGreen,    // 4-bit VGA green output
    output wire [1:0] vgaBlue     // 4-bit VGA blue output
    );

    //wire rst = ~btnRst;    // reset is active low on Arty & Nexys Video
    wire rst = btnRst;  // reset is active high on Basys3 (BTNC)

    // generate a 25 MHz pixel strobe
    reg [15:0] cnt;
    reg pix_stb;
    always @(posedge clk)
        {pix_stb, cnt} <= cnt + 16'h4000;  // divide by 4: (2^16)/4 = 0x4000

    wire [9:0] x;  // current pixel x position: 10-bit value: 0-1023
    wire [8:0] y;  // current pixel y position:  9-bit value: 0-511
	wire animate;  // high when we're ready to animate at end of drawing

    vga640x480 display (
        .i_clk(clk),
        .i_pix_stb(pix_stb),
        .i_rst(rst),
        .o_hs(Hsync), 
        .o_vs(Vsync), 
        .o_x(x), 
        .o_y(y),
		.o_animate(animate)
    );
	
	wire sq_a, sq_b, sq_c;
    wire [11:0] sq_a_x1, sq_a_x2, sq_a_y1, sq_a_y2;  // 12-bit values: 0-4095 
    wire [11:0] sq_b_x1, sq_b_x2, sq_b_y1, sq_b_y2;
    wire [11:0] sq_c_x1, sq_c_x2, sq_c_y1, sq_c_y2;

    square #(.IX(160), .IY(120), .H_SIZE(60)) sq_a_anim (
        .i_clk(clk), 
        .i_ani_stb(pix_stb),
        .i_rst(rst),
        .i_animate(animate),
        .o_x1(sq_a_x1),
        .o_x2(sq_a_x2),
        .o_y1(sq_a_y1),
        .o_y2(sq_a_y2)
    );

    square #(.IX(320), .IY(240), .IY_DIR(0)) sq_b_anim (
        .i_clk(clk), 
        .i_ani_stb(pix_stb),
        .i_rst(rst),
        .i_animate(animate),
        .o_x1(sq_b_x1),
        .o_x2(sq_b_x2),
        .o_y1(sq_b_y1),
        .o_y2(sq_b_y2)
    );    

    square #(.IX(600), .IY(160), .H_SIZE(60)) sq_c_anim (
        .i_clk(clk), 
        .i_ani_stb(pix_stb),
        .i_rst(rst),
        .i_animate(animate),
        .o_x1(sq_c_x1),
        .o_x2(sq_c_x2),
        .o_y1(sq_c_y1),
        .o_y2(sq_c_y2)
    );

    assign sq_a = ((x > sq_a_x1) & (y > sq_a_y1) &
        (x < sq_a_x2) & (y < sq_a_y2)) ? 1 : 0;
    assign sq_b = ((x > sq_b_x1) & (y > sq_b_y1) &
        (x < sq_b_x2) & (y < sq_b_y2)) ? 1 : 0;
    assign sq_c = ((x > sq_c_x1) & (y > sq_c_y1) &
        (x < sq_c_x2) & (y < sq_c_y2)) ? 1 : 0;
		
	assign vgaRed[0] = 0;
	assign vgaRed[1] = 0;
	assign vgaGreen[0] = 0;
	assign vgaGreen[1] = 0;
	assign vgaBlue[0] = 0;
    assign vgaRed[2] = sq_b;         // square b is red
    assign vgaGreen[2] = sq_a;  // squares a and d are green
    assign vgaBlue[1] = sq_c;         // square c is blue
endmodule


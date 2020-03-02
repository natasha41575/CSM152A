`timescale 1ns / 1ps

module pipe #(
    X_SIZE=80,      // half square width (for ease of co-ordinate calculations)
	Y_HOLE=240,		// hole in the pipe
    IX=320,         // initial horizontal position of square centre
    IY=240,         // initial vertical position of square centre
    D_WIDTH=640,    // width of display
    D_HEIGHT=480,   // height of display
	GRAV=15			// how much gravity is there
    )
    (
    input wire i_clk,         // base clock
    input wire i_ani_stb,     // animation clock: pixel clock is 1 pix/frame
	input wire i_physics_stb, // physics clock
    input wire i_rst,         // reset: returns animation to starting position
    input wire i_animate,     // animate when input is high
    output wire [11:0] o_x1,  // square left edge: 12-bit value: 0-4095
    output wire [11:0] o_x2,  // square right edge
    output wire [11:0] o_y1,  // square top edge
    output wire [11:0] o_y2   // square bottom edge
    );

    reg [11:0] x = IX;   // horizontal position of square centre
    reg [11:0] y = IY;   // vertical position of square centre

	reg [11:0] y_vel = 0;

    assign o_x1 = x - H_SIZE;  // left: centre minus half horizontal size
    assign o_x2 = x + H_SIZE;  // right
    assign o_y1 = y - H_SIZE;  // top
    assign o_y2 = y + H_SIZE;  // bottom

    always @ (posedge i_clk)
    begin
        if (i_rst)  // on reset return to starting position
        begin
            x <= IX;
            y <= IY;
			y_vel <= 0;
        end
		if (flap) // if we pressed the flappy button
		begin
			y_vel <= -10;
		end
		if (i_physics_stb)
		begin
			if (y + y_vel < H_SIZE)
				y <= H_SIZE;
			else if (y + y_vel > D_HEIGHT - H_SIZE - 30)
				y <= D_HEIGHT - H_SIZE - 30;
			else
				y <= y + y_vel;  // move down if positive y_dir
			y_vel <= y_vel + GRAV; // this is gravity
		end
        //if (i_animate && i_ani_stb)
        //begin 
        //end
    end
endmodule

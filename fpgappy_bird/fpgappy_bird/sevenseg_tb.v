`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:22:53 03/09/2020
// Design Name:   sevenseg
// Module Name:   C:/Users/152/Desktop/CSM152A/fpgappy_bird/fpgappy_bird/sevenseg_tb.v
// Project Name:  fpgappy_bird
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sevenseg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sevenseg_tb;

	// Inputs
	reg [3:0] points_3;
	reg [3:0] points_2;
	reg [3:0] points_1;
	reg [3:0] points_0;
	reg sevenseg_clk;

	// Outputs
	wire [3:0] an;
	wire [7:0] seg;

	// Instantiate the Unit Under Test (UUT)
	sevenseg uut (
		.an(an), 
		.seg(seg), 
		.points_3(points_3), 
		.points_2(points_2), 
		.points_1(points_1), 
		.points_0(points_0), 
		.sevenseg_clk(sevenseg_clk)
	);

	initial begin
		// Initialize Inputs
		points_3 = 0;
		points_2 = 1;
		points_1 = 2;
		points_0 = 3;
		sevenseg_clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		while(1)
			#5 sevenseg_clk = ~sevenseg_clk;
	end
      
endmodule


`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:12:34 03/09/2020
// Design Name:   scoreboard
// Module Name:   C:/Users/152/Desktop/CSM152A/fpgappy_bird/fpgappy_bird/scoreboard_tb.v
// Project Name:  fpgappy_bird
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: scoreboard
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module scoreboard_tb;

	// Inputs
	reg rst;
	reg clk;
	reg point_add;
	reg bird_die;

	// Outputs
	wire [3:0] points_3;
	wire [3:0] points_2;
	wire [3:0] points_1;
	wire [3:0] points_0;

	// Instantiate the Unit Under Test (UUT)
	scoreboard uut (
		.points_3(points_3), 
		.points_2(points_2), 
		.points_1(points_1), 
		.points_0(points_0), 
		.rst(rst), 
		.clk(clk), 
		.point_add(point_add), 
		.bird_die(bird_die)
	);

	initial begin
		// Initialize Inputs
		rst = 0;
		clk = 0;
		point_add = 0;
		bird_die = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		while(1)
			#5 clk = ~clk;

	end
	
	always @(posedge clk)
		begin
		point_add = ~point_add;
		end
      
endmodule


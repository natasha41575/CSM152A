`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:33:11 02/05/2020
// Design Name:   counter
// Module Name:   C:/Users/152/Desktop/CSM152A/lab3/lab3/counter_tb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module counter_tb;

	// Inputs
	reg rst;
	reg clk;

	// Outputs
	wire [3:0] minutes_0;
	wire [3:0] minutes_1;
	wire [3:0] seconds_0;
	wire [3:0] seconds_1;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.minutes_0(minutes_0), 
		.minutes_1(minutes_1), 
		.seconds_0(seconds_0), 
		.seconds_1(seconds_1), 
		.rst(rst), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		rst = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		seconds_0 = 0;
		seconds_1 = 0;
		minutes_0 = 0;
		minutes_1 = 0;

		// Add stimulus here
		while(1)
			#5 clk = ~clk;
	end
      
endmodule


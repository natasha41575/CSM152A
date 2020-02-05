`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:12:56 02/05/2020
// Design Name:   clock
// Module Name:   C:/Users/152/Desktop/CSM152A/lab3/lab3/clock_tb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clock
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clock_tb;

	// Inputs
	reg base_clk;

	// Outputs
	wire _2hz;
	wire _1hz;
	wire _666hz;
	wire _4hz;

	// Instantiate the Unit Under Test (UUT)
	clock uut (
		._2hz(_2hz), 
		._1hz(_1hz), 
		._666hz(_666hz), 
		._4hz(_4hz), 
		.base_clk(base_clk)
	);

	initial begin
		// Initialize Inputs
		base_clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		while(1) 
			#5 base_clk = ~base_clk;
	end
      
endmodule


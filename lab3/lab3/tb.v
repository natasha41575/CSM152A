`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:56:06 02/05/2020
// Design Name:   nexys3
// Module Name:   C:/Users/152/Desktop/CSM152A/lab3/lab3/tb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: nexys3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg sel;
	reg adj;
	reg btnR;
	reg btnC;
	reg clk;

	// Instantiate the Unit Under Test (UUT)
	nexys3 uut (
		.sel(sel), 
		.adj(adj), 
		.btnR(btnR), 
		.btnC(btnC), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		sel = 0;
		adj = 0;
		btnR = 0;
		btnC = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always #5 clk = ~clk;
      
endmodule


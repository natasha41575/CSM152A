`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:04:43 02/12/2020
// Design Name:   nexys3
// Module Name:   C:/Users/152/Desktop/CSM152A/lab3/lab3/stopwatch_tb.v
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

module stopwatch_tb;

	// Inputs
	reg swSel;
	reg swAdj;
	reg btnRst;
	reg btnPause;
	reg clk;

	// Outputs
	wire [3:0] an;
	wire [7:0] seg;

	// Instantiate the Unit Under Test (UUT)
	nexys3 uut (
		.an(an), 
		.seg(seg), 
		.swSel(swSel), 
		.swAdj(swAdj), 
		.btnRst(btnRst), 
		.btnPause(btnPause), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		swSel = 0;
		swAdj = 0;
		btnRst = 0;
		btnPause = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		while(1)
			#5 clk = ~clk;
	end
      
endmodule


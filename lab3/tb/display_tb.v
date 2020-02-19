`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:00:05 02/12/2020
// Design Name:   display
// Module Name:   C:/Users/152/Desktop/CSM152A/lab3/lab3/display_tb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: display
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module display_tb;

	// Inputs
	reg [3:0] minutes_0;
	reg [3:0] minutes_1;
	reg [3:0] seconds_0;
	reg [3:0] seconds_1;
	reg adj;
	reg sel;
	reg _666hz;
	reg _4hz;

	// Outputs
	wire [3:0] an;
	wire [7:0] seg;

	// Instantiate the Unit Under Test (UUT)
	display uut (
		.an(an), 
		.seg(seg), 
		.minutes_0(minutes_0), 
		.minutes_1(minutes_1), 
		.seconds_0(seconds_0), 
		.seconds_1(seconds_1), 
		.adj(adj), 
		.sel(sel), 
		._666hz(_666hz), 
		._4hz(_4hz)
	);

	initial begin
		// Initialize Inputs
		minutes_0 = 1;
		minutes_1 = 0;
		seconds_0 = 3;
		seconds_1 = 2;
		adj = 0;
		sel = 0;
		_666hz = 0;
		_4hz = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		while(1)
			#5 _666hz = ~_666hz;
			

	end
      
endmodule


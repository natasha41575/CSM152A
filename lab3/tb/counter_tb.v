`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:27:36 02/10/2020
// Design Name:   counter
// Module Name:   C:/Users/152/CSM152A/lab3/lab3/counter_tb.v
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
	reg pause;
	reg clk;
	reg _1hz;
	reg _2hz;
	reg sel;
	reg adj;

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
		.pause(pause), 
		.clk(clk), 
		._1hz(_1hz), 
		._2hz(_2hz), 
		.sel(sel), 
		.adj(adj)
	);
	
	reg [9:0] counter;

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		pause = 0;
		_1hz = 0;
		_2hz = 0;
		sel = 0;
		adj = 0;

		counter = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		while(1)
			begin
			#5
			clk = ~clk;
			end
	end
	
	always @ (posedge clk)
		begin
		counter = counter + 1;
		if((counter % 500) == 0)
			_2hz = ~_2hz;
		if(counter == 1000)
			begin
			_1hz = ~_1hz;
			counter = 0;
			end
		end
	
      
endmodule


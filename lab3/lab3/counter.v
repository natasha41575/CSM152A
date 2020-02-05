`timescale 1ns / 1ps
/*
 *
 *	Counter Module
 *	--------------------
 *	Counts time in a XX:XX Format
 *
 */
module counter( // Outputs
				minutes_0, minutes_1, seconds_0, seconds_1,
				// Inputs
				rst, clk );
	
	input rst;
	input clk;
	
	output reg [3:0] minutes_0;
	output reg [3:0] minutes_1;
	output reg [3:0] seconds_0;
	output reg [3:0] seconds_1;
	
	always @ (posedge clk)
		begin
			if(rst)
				begin
					seconds_0 = 0;
					seconds_1 = 0;
					minutes_0 = 0;
					minutes_1 = 0;
				end
			seconds_0 = seconds_0 + 1;
			if(seconds_0 == 10)
				begin
					seconds_1 = seconds_1 + 1;
					seconds_0 = 0;
				end
			if(seconds_1 == 10)
				begin
					minutes_0 = minutes_0 + 1;
					seconds_1 = 0;
				end
			if(minutes_0 == 10)
				begin
					minutes_1 = minutes_1 + 1;
					minutes_0 = 0;
				end
		end
	
endmodule

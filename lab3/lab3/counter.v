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
				rst, pause, clk, _1hz, _2hz, sel, adj );
	
	input rst;
	input pause;
	input clk;
	input _1hz;
	input _2hz;
	input sel;
	input adj;
	
	output reg [3:0] minutes_0;
	output reg [3:0] minutes_1;
	output reg [3:0] seconds_0;
	output reg [3:0] seconds_1;
	
	reg [1:0] _1hz_buffer; 
	reg [1:0] _2hz_buffer;
	reg _1hz_valid;
	reg _2hz_valid;
	reg pauseStatus;
	
	always @ (posedge clk)
		begin
		if(pause)
			pauseStatus = ~pauseStatus;
		if(rst)
			begin
			seconds_0 = 0;
			seconds_1 = 0;
			minutes_0 = 0;
			minutes_1 = 0;
			_1hz_buffer = 0;
			_2hz_buffer = 0;
			pauseStatus = 0;
			end
		_1hz_buffer = {_1hz_buffer[0], _1hz};
		_2hz_buffer = {_2hz_buffer[0], _2hz};
		assign _1hz_valid = (!_1hz_buffer[1] && _1hz_buffer[0]);
		assign _2hz_valid = (!_2hz_buffer[1] && _2hz_buffer[0]);
		if(_1hz_valid && !adj)
			begin
			if(minutes_1 == 5 && minutes_0 == 9 && seconds_1 == 5 && seconds_0 == 9)
				pauseStatus = 1;
			if(pauseStatus == 0)
				seconds_0 = seconds_0 + 1;
			if(seconds_0 == 10)
				begin
				seconds_1 = seconds_1 + 1;
				seconds_0 = 0;
				end
			if(seconds_1 == 6)
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
		if(_2hz_valid && adj)
			begin
			if(sel == 0)
				begin
				minutes_0 = minutes_0 + 2;
				if(minutes_0 >= 10)
					begin
					minutes_1 = minutes_1 + 1;
					minutes_0 = minutes_0 % 10;
					end
				if(minutes_1 == 6)
					minutes_1 = 0;
				end
			else
				begin
				seconds_0 = seconds_0 + 2;
				if(seconds_0 >= 10)
					begin
					seconds_1 = seconds_1 + 1;
					seconds_0 = seconds_0 % 10;
					end
				if(seconds_1 == 6)
					seconds_1 = 0;
				end
			end
		end
	
endmodule

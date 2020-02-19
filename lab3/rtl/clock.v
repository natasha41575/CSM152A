`timescale 1ns / 1ps
/*
 *
 *	Clock Divider Module
 *	--------------------
 *	Splits 100MHz clock into
 *	2Hz, 1Hz, 700Hz, and 4Hz
 *
 */
 
module clock(
	//Outputs
	_2hz, _1hz, _666hz, _4hz,
	//Inputs
	base_clk
    );

	input base_clk;
	output reg _2hz;
	output reg _1hz;
	output reg _666hz;	// actually 666.66
	output reg _4hz;
	
	reg [25:0] _1hz_counter;
	reg [25:0] _2hz_counter;
	reg [17:0] _666hz_counter;
	reg [23:0] _4hz_counter;
	
	initial
		begin
			_1hz_counter <= 0;
			_2hz_counter <= 0;
			_666hz_counter <= 0;
			_4hz_counter <= 0;
			_1hz <= 0;
			_2hz <= 0;
			_666hz <= 0;
			_4hz <= 0;
		end
	
	always @ (posedge base_clk)
		begin
			_1hz_counter <= _1hz_counter + 1;
			_2hz_counter <= _2hz_counter + 1;
			_666hz_counter <= _666hz_counter + 1;
			_4hz_counter <= _4hz_counter + 1;
			
			if(_1hz_counter == 50000000)
				begin
					_1hz <= ~_1hz;
					_1hz_counter <= 0;
				end
			if(_2hz_counter == 25000000)
				begin
					_2hz <= ~_2hz;
					_2hz_counter <= 0;
				end
			if(_666hz_counter == 150000)
				begin
					_666hz <= ~_666hz;
					_666hz_counter <= 0;
				end
			if(_4hz_counter == 12500000)
				begin
					_4hz <= ~_4hz;
					_4hz_counter <= 0;
				end
		end

endmodule

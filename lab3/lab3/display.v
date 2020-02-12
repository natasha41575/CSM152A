`timescale 1ns / 1ps

module display(
	//Outputs
	an, seg,
	//Inputs
	minutes_0, minutes_1, seconds_0, seconds_1, adj, sel, _666hz, _4hz);

	input [3:0] minutes_0;
	input [3:0] minutes_1;
	input [3:0] seconds_0;
	input [3:0] seconds_1;
	
	input adj;
	input sel;
	
	input _666hz;
	input _4hz;
	
	output reg [3:0] an;
	output reg [7:0] seg;

	reg [1:0] digit_counter;
	
	// Converts digit to corresponding 7-seg display inputs
	function [7:0] set_display_segs;
		input [3:0] digit;
		case(digit)
			4'd0: set_display_segs = 8'b11000000;
			4'd1: set_display_segs = 8'b11111001;
			4'd2: set_display_segs = 8'b10100100;
			4'd3: set_display_segs = 8'b10110000;
			4'd4: set_display_segs = 8'b10011001;
			4'd5: set_display_segs = 8'b10010010;
			4'd6: set_display_segs = 8'b10000010;
			4'd7: set_display_segs = 8'b11111000;
			4'd8: set_display_segs = 8'b10000000;
			4'd9: set_display_segs = 8'b10010000;
		endcase
	endfunction
	
	initial
		digit_counter = 0;
		
	always @ (posedge _666hz)
		begin
		case(digit_counter)
			0: 
				begin
				if(sel == 0 && adj == 1 && _4hz)
					an <= 4'b1111;
				else 
					an <= 4'b0111;
				seg <= set_display_segs(minutes_1);
				end
			1: 	
				begin
				if(sel == 0 && adj == 1 && _4hz)
					an <= 4'b1111;
				else 
					an <= 4'b1011;;
				seg <= set_display_segs(minutes_0);
				end
			2: 
				begin
				if(sel == 1 && adj == 1 && _4hz)
					an <= 4'b1111;
				else 
					an <= 4'b1101;
				seg <= set_display_segs(seconds_1);
				end
			3: 	
				begin
				if(sel == 1 && adj == 1 && _4hz)
					an <= 4'b1111;
				else 
					an <= 4'b1110;
				seg <= set_display_segs(seconds_0);
				end
		endcase
		digit_counter <= (digit_counter + 1)%4;
		end
		
endmodule

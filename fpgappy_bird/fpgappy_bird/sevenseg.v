`timescale 1ns / 1ps

module sevenseg(
	//Outputs
	an, seg,
	//Inputs
	points_3, points_2, points_1, points_0, sevenseg_clk);

	input [3:0] points_3;
	input [3:0] points_2;
	input [3:0] points_1;
	input [3:0] points_0;
	
	input sevenseg_clk;
	
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
		
	always @ (posedge sevenseg_clk)
		begin
		case(digit_counter)
			0: 
				begin
				an <= 4'b0111;
				seg <= set_display_segs(points_3);
				end
			1: 	
				begin
				an <= 4'b1011;;
				seg <= set_display_segs(points_2);
				end
			2: 
				begin
				an <= 4'b1101;
				seg <= set_display_segs(points_1);
				end
			3: 	
				begin
				an <= 4'b1110;
				seg <= set_display_segs(points_0);
				end
		endcase
		digit_counter <= digit_counter + 1;
		end
		
endmodule

`timescale 1ns / 1ps
/*
 *
 *	Scoreboard Module
 *	--------------------
 *	Counts points up to 4 digits
 *
 */
module scoreboard( // Outputs
				points_3, points_2, points_1, points_0,
				// Inputs
				rst, clk, point_add, bird_die);
	
	input rst;
	input clk;
	input point_add;
	input bird_die;
	reg [1:0] point_add_reg;
	
	output reg [3:0] points_3;
	output reg [3:0] points_2;
	output reg [3:0] points_1;
	output reg [3:0] points_0;
	
	initial
		begin
		points_3 = 0;
		points_2 = 0;
		points_1 = 0;
		points_0 = 0;
		end
	
	always @ (posedge clk)
		begin
		if(rst | bird_die)
			begin
			points_3 = 0;
			points_2 = 0;
			points_1 = 0;
			points_0 = 0;
			end
		point_add_reg = {point_add_reg[0], point_add};
		if(point_add_reg[1] == 0 && point_add_reg[0] == 1)
			begin
			if(points_3 != 9 || points_2 != 9 || points_1 != 9 || points_0 != 9)
				begin
				points_0 = points_0 + 1;	
				if(points_0 == 10)
					begin
					points_1 = points_1 + 1;
					points_0 = 0;
					end
				if(points_1 == 10)
					begin
					points_2 = points_2 + 1;
					points_1 = 0;
					end
				if(points_2 == 10)
					begin
					points_3 = points_3 + 1;
					points_2 = 0;
					end
				end
			end
		end
	
endmodule

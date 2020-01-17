`timescale 1ns / 1ps

module fpcvt_tb;

// Inputs
reg [11:0] d;

// Outputs
wire s;
wire [2:0] e;
wire [3:0] f;

// Instantiation of the design module to be verified by the testbench
// Use named portmapping to map inputs to regsiter variables and outputs to
// wires
fpcvt UUT 	(.d(d), .s(s), .e(e), .f(f));

// IMPORTANT: Initialize all inputs. Otherwise the default value of register
// will be don't care (x).
initial
	begin
		d = 12'b0000_0100_0011;		// 67 ->  8'b0011_1000
		#100;
		d = 12'b0111_0100_0000;		// 1856 ->  8'b0111_1111
		#100;
		d = 12'b0111_1111_1111;		// 2047 ->  8'b0111_1111 
		#100;
		d = 12'b1000_0000_0010;		// -2046 ->  8'b1111_1111 
		#100;
		d = 12'b1001_1100_1111;		// -1585 ->  8'b1111_1100
		#100;
		d = 12'b1111_1010_0101;		// -91 ->	8'b1011_1011
		#100;
		d = -2048;					// Tmin -> 8'b1111_1111
		#100;
		d =  2047;					// Tmax -> 8'b0111_1111
		#100;
	end

endmodule

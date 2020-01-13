`timescale 1ns / 1ps

module fpcvt_tb;

// Inputs
reg [11:0] d;
wire s;
wire [2:0] e;
wire [3:0] f;

// Instantiation of the design module to be verified by the testbench
// Use named portmapping to map inputs to regsiter variables and outputs to
// wires
fpcvt UUT 	(.d(d), .s(s), .e(e), .f(f));

initial
begin
        $dumpfile("fpcvt.vcd");
        $dumpvars(2, fpcvt_tb.UUT);
end

// IMPORTANT: Initialize all inputs. Otherwise the default value of register
// will be don't care (x).
initial
begin
	d = 0;
end

// Use an always block to generate all the test cases
always
	#1 d = d + 1;

// Code to terminate simulation after all the test cases have been covered.
initial
	#4096 $finish; // After 160 timeunits, terminate simulation.

endmodule
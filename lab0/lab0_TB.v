/*
 * Module: Testbench for multiplexed combinational gates
 * 
 * Filename: combinational_gates_muxed_TB.v
 * Version: 1.0
 *
 * Author: Cejo Konuparamban Lonappan
 *
 * Description: The testbench code for verifying the multiplexed outputs of
 * eight comnibational gates. 
 */

`timescale 1ns / 1ps

module counter_tb; // No inputs for a testbench!

// Inputs in the module to be tested
reg btn_T;
reg clk;
wire a0;
wire a1;
wire a2;
wire a3;
wire [3:0] a;

// Instantiation of the design module to be verified by the testbench
// Use named portmapping to map inputs to regsiter variables and outputs to
// wires
counter UUT 	(.rst(btn_T), .clk(clk), .a0(a0), .a1(a1), .a2(a2), .a3(a3), .a(a));

// Used for saving Value Change Dump (.vcd) file that records the waveforms of
// the simulation. Not needed while using Xilinx ISIM simulator.
initial
begin
        $dumpfile("bit_counter.vcd");
        $dumpvars(2, counter_tb.UUT);
end

// IMPORTANT: Initialize all inputs. Otherwise the default value of register
// will be don't care (x).
initial
begin
	clk = 5'h0;
	btn_T = 5'h1;
	#10 btn_T = 5'h0;
end

// Use an always block to generate all the test cases
always
	#5 clk = ~clk;

// Code to terminate simulation after all the test cases have been covered.
initial
	#160 $finish; // After 160 timeunits, terminate simulation.

endmodule

`timescale 1ns / 1ps
/*
 *
 * CSM152A Lab 3
 * Members: Austin Zhang 	604 736 503
 *			Bryan Wong		805 111 517
 *			Natasha Sarkar	904 743 795
 *
 */
module nexys3( 
	// Outputs
	
	// Inputs
	sel, adj, btnR, btnC, clk
    );
	
	
	input sel;	// 0 - minutes, 1 - seconds
	input adj;	// 0 - normal, 1 - stop and increment
	input btnR;
	input btnC;
	
	input clk;	// 100 MHz
	
	wire rst;
	wire pause;
	
	wire _1hz;
	wire _2hz;
	wire _666hz;
	wire _4hz;
	
	clock clock_(// Outputs
	             ._1hz(_1hz),
				 ._2hz(_2hz),
				 ._666hz(_666hz),
				 ._4hz(_4hz),
				 // Inputs
				 .base_clk(clk) );
endmodule

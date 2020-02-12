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
	an, seg,
	// Inputs
	swSel, swAdj, btnRst, btnPause, clk
    );
	
	input swSel;	// 0 - minutes, 1 - seconds
	input swAdj;	// 0 - normal, 1 - stop and increment
	input btnRst;	// Reset
	input btnPause; // Pause
	
	input clk;	// 100 MHz
	
	output [3:0] an;	// Digit to light up
	output [7:0] seg;	// Segments to light up
	
	wire rst;
	wire        arst_i;
	reg [1:0]   arst_ff;
	
	reg sel;
	reg adj;
	
	wire _1hz;
	wire _2hz;
	wire _666hz;
	wire _4hz;
	
	wire [17:0] clk_dv_inc;
	reg [16:0]  clk_dv;
	reg         clk_en;
	reg         clk_en_d;
	
	reg         pause;
	reg [2:0]   step_d_pause;
	
	wire [3:0] minutes_0;
	wire [3:0] minutes_1;
	wire [3:0] seconds_0;
	wire [3:0] seconds_1;

	// ===========================================================================
	// Asynchronous Reset
	// ===========================================================================

	assign arst_i = btnRst;
	assign rst = arst_ff[0];
   
	always @ (posedge clk or posedge arst_i)
		if (arst_i)
			arst_ff <= 2'b11;
		else
			arst_ff <= {1'b0, arst_ff[1]};

	// ===========================================================================
	// timing signal for clock enable
	// ===========================================================================

	assign clk_dv_inc = clk_dv + 1;
   
	always @ (posedge clk)
		if (rst)
			begin
			clk_dv   <= 0;
			clk_en   <= 1'b0;
			clk_en_d <= 1'b0;
			end
		else
			begin
			clk_dv   <= clk_dv_inc[16:0];
			clk_en   <= clk_dv_inc[17];
			clk_en_d <= clk_en;
			end
	
	// ===========================================================================
	// Instruction Stepping Control / Debouncing
	// ===========================================================================

	always @ (posedge clk)
		if (rst)
			begin
			step_d_pause[2:0]	<= 0;
			sel = 0;
			adj = 0;
			end
		else if (clk_en) // Down sampling
			begin
			step_d_pause[2:0]  	<= {btnPause, step_d_pause[2:1]};
			sel = swSel;
			adj = swAdj;
			end
	   
	// Detecting posedge of btnS
	wire is_btnPause_posedge;
	assign is_btnPause_posedge = ~ step_d_pause[0] & step_d_pause[1];
	always @ (posedge clk)
		if (rst) 
			pause <= 1'b0;
		else if (clk_en_d) 
			pause <= is_btnPause_posedge;
		else 
			pause <= 0;
	
	clock clock_(// Outputs
	             ._1hz(_1hz),
				 ._2hz(_2hz),
				 ._666hz(_666hz),
				 ._4hz(_4hz),
				 // Inputs
				 .base_clk(clk) );
				 
	counter counter_(// Outputs
					 .minutes_0(minutes_0), 
					 .minutes_1(minutes_1), 
					 .seconds_0(seconds_0), 
					 .seconds_1(seconds_1),
					 // Inputs
					 .rst(rst), 
					 .pause(pause), 
					 .clk(clk), 
					 ._1hz(_1hz), 
					 ._2hz(_2hz), 
					 .sel(sel), 
					 .adj(adj));
					 
	display display_(//Outputs
				     .an(an), 
					 .seg(seg),
					 //Inputs
					 .minutes_0(minutes_0), 
					 .minutes_1(minutes_1), 
					 .seconds_0(seconds_0), 
					 .seconds_1(seconds_1), 
					 .adj(adj), 
					 .sel(sel), 
					 ._666hz(_666hz),
					 ._4hz(_4hz) );
					 
	
			
endmodule

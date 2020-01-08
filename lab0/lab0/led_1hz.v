`timescale 1ns / 1ps

module led_1hz(clk, led, rst);

input clk;
input rst;
output reg led;
output reg [25:0] b;

always @ (posedge clk)

	if(rst)
		begin
			b <= 26'b0;
			led <= 1'b0;
		end
		
	else
		begin
			b <= b + 1'b1;
			if(b == 5000000)
				begin
					led <= ~led;
					b <= 26'b0;
				end
		end

endmodule

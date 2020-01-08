/*
module counter (rst, clk, a0, a1, a2, a3, a, led);

input rst;
input clk;

// Declaring registers for 4 D Flip-Flops
output reg a0;
output reg a1;
output reg a2;
output reg a3;
output reg [3:0] a;

always @ (posedge clk)

	if(rst)
		begin
			a0 <= 1'b0;
			a1 <= 1'b0;
			a2 <= 1'b0;
			a3 <= 1'b0;
			a <= 4'b0000;
		end
		
	else
		begin
			a0 <= ~a0;
			a1 <= a0 ^ a1;
			a2 <= (a0 & a1) ^ a2;
			a3 <= ((a0 & a1) & a2) ^ a3;
			a <= a + 1'b1;
		end
		
endmodule
*/

module led_1hz(clk, led, rst);

input clk;
input rst;
output reg led;
reg [25:0] b;

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

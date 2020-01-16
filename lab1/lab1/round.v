`timescale 1ns / 1ps
module round(e_input, f_input, fifth_bit, e_output, f_output);

input [2:0] e_input;
input [3:0] f_input;
input wire fifth_bit;
output reg [2:0] e_output;
output reg [3:0] f_output;

always @ (*)
	begin
		// No rounding required
		if(fifth_bit == 0)
			begin
				e_output = e_input;
				f_output = f_input;
			end
		// Rounding Required
		else 
			begin
				// If Significand Doesn't Overflow
				if(f_input != 4'b1111)
					begin
						f_output = f_input + 1;
						e_output = e_input;
					end
				// If Significand Overflows
				else
					begin
						// If Exponent Doesn't Overflow
						if(e_input != 3'b111)
							begin
								e_output = e_input + 1;
								f_output = (4'b1111 >> 1) + 1;
							end
						// If Exponent Overflows
						else
							begin
								e_output = 3'b111;
								f_output = 4'b1111;
							end

					end
			end
	end

endmodule

`timescale 1ns / 1ps

/***
 	11-bit Two's Complement to 8-bit Floating Point Converter
	Team Members:	Bryan Wong			805111517
					Austin Zhang		604736503
					Natasha Sarkar		904743795 				
***/

module fpcvt(d, s, e, f);

input wire[11:0] d;
output wire s;
output wire [2:0] e;
output wire [3:0] f;

wire [11:0] sign_mag_output;
wire [2:0] priority_encoder_e_output;
wire [3:0] priority_encoder_f_output;
wire priority_encoder_fifth_bit_output;

sign_magnitude a(.m_input(d), .m_output(sign_mag_output), .s(s));
priority_encoder b(.m_input(sign_mag_output), .e(priority_encoder_e_output), .f(priority_encoder_f_output),
				 .fifth_bit(priority_encoder_fifth_bit_output));
round c(.e_input(priority_encoder_e_output), .f_input(priority_encoder_f_output), .fifth_bit(priority_encoder_fifth_bit_output),
	  .e_output(e), .f_output(f));

endmodule

/* Modules */

/* a - 2's complement to Sign-Magnitude form */
module sign_magnitude(m_input, m_output, s);

input [11:0] m_input;
output [11:0] m_output;
output s;

// Sign bit is equal to the MSB
assign s = m_input[11];

// If the input is negative, invert and add 1
assign m_output = m_input[11] ? ~m_input + 1'b1: m_input;

endmodule


/* b - Find fifth-bit and calculate exponent and mantissa */
module priority_encoder(m_input, e, f, fifth_bit);

input [11:0] m_input;
output [2:0] e;
output [3:0] f;
output fifth_bit;

assign e = (m_input[11] || m_input[10])? 3'b111:
						   (m_input[9])? 3'b110:
						   (m_input[8])? 3'b101:
						   (m_input[7])? 3'b100:
						   (m_input[6])? 3'b011:
						   (m_input[5])? 3'b010:
						   (m_input[4])? 3'b001:
										 3'b000;
		
assign f = (m_input[11])? 4'b1111: 
     (m_input[10])? m_input[10:7]:
	   (m_input[9])? m_input[9:6]:
	   (m_input[8])? m_input[8:5]:
	   (m_input[7])? m_input[7:4]:
	   (m_input[6])? m_input[6:3]:
	   (m_input[5])? m_input[5:2]:
	   (m_input[4])? m_input[4:1]:
		     		 m_input[3:0];
					 
assign fifth_bit = (m_input[11])? 1:
		  (m_input[10])? m_input[6]:
		  (m_input[9])? m_input[5]:
		  (m_input[8])? m_input[4]:
		  (m_input[7])? m_input[3]:
		  (m_input[6])? m_input[2]:
		  (m_input[5])? m_input[1]:
		  (m_input[4])? m_input[0]:
								 0;
								 
endmodule

/* c - Use fifth bit to round up/down */
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

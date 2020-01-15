`timescale 1ns / 1ps

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
`timescale 1ns / 1ps

module sign_magnitude(m_input, m_output, s);

input [11:0] m_input;
output [11:0] m_output;
output s;

// Sign bit is equal to the MSB
assign s = m_input[11];

// If the input is negative, invert and add 1
assign m_output = m_input[11] ? ~m_input + 1'b1: m_input;

endmodule

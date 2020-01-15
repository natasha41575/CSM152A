`timescale 1ns / 1ps

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

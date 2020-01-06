module 4_bit_counter (rst);

input rst;

// Declaring registers for 4 D Flip-Flops
reg a0;
reg a1;
reg a2;
reg a3;

always @ (posedge clk)
    if(rst)
        a0 <= 1'b0;
        a1 <= 1'b0;
        a2 <= 1'b0;
        a3 <= 1'b0;
    else
        a0 <= ~a0;
        a1 <= a0 ^ a1;
        a2 <= (a0 & a1) ^ a2;
        a3 <= ((a0 & a1) & a2) ^ a3;
    

endmodule
`timescale 1ns / 1ps

module fpcvt(d, s, e, f);

input wire[11:0] d;
output wire s;
output wire [2:0] e;
output wire [3:0] f;



always @ (*)

    begin
        // Sign
        assign s = d[11];
        
        // Find Sign-Magnitude Expression
        if(d == 12'b100000000000)  // T_Min
            begin
                e <= 3'b111;
                f <= 4'b1111;
            end
          
        if(d[11] == 1)  // Input is negative
            begin
                d <= ~d + 1'b1;
        
        
        // Find Exponent and Significand
        /* Check for leading zero bit and assign next 4 bits to significand
           If the fifth bit after the leading zero is 1, increment the significand
           If the significand were the overflow as a result, increment the exponent
           If the exponent were to overflow set exponent and significand to max */
        if(d[10] == 1)
            begin
                e <= 3'b111;
                f <= d[10:7];
                if(d[6] == 1)
                    begin
                        if(e == 3'b111)
                            begin
                               e = 3'b111;
                               f = 4'b1111;
                            end
                        if(d == 4'b1111)
                            begin
                                e = e + 1'b1;
                                f = 4'b1000;
                            end
                    end 
            end
        else if(d[9] == 1)
            begin
                e = 3'b110;
                f = d[9:6];
                if(d[5] == 1)
                    begin
                        if(e == 3'b111)
                            begin
                               e = 3'b111;
                               f = 4'b1111;
                            end
                        if(d == 4'b1111)
                            begin
                                e = e + 1'b1;
                                f = 4'b1000;
                            end
                    end
            end
        else if(d[8] == 1)
            begin
                e = 3'b101;
                f = d[8:5];
                if(d[4] == 1)
                    begin
                        if(e == 3'b111)
                            begin
                               e = 3'b111;
                               f = 4'b1111;
                            end
                        if(d == 4'b1111)
                            begin
                                e = e + 1'b1;
                                f = 4'b1000;
                            end
                    end
            end
        else if(d[7] == 1)
            begin
                e = 3'b100;
                f = d[7:4];
                if(d[3] == 1)
                    begin
                        if(e == 3'b111)
                            begin
                               e = 3'b111;
                               f = 4'b1111;
                            end
                        if(d == 4'b1111)
                            begin
                                e = e + 1'b1;
                                f = 4'b1000;
                            end
                    end
            end
        else if(d[6] == 1)
            begin
                e = 3'b011;
                f = d[6:3];
                if(d[2] == 1)
                    begin
                        if(e == 3'b111)
                            begin
                               e = 3'b111;
                               f = 4'b1111;
                            end
                        if(d == 4'b1111)
                            begin
                                e = e + 1'b1;
                                f = 4'b1000;
                            end
                    end
            end
        else if(d[5] == 1)
            begin
                e = 3'b010;
                f = d[5:2];
                if(d[1] == 1)
                    begin
                        if(e == 3'b111)
                            begin
                               e = 3'b111;
                               f = 4'b1111;
                            end
                        if(d == 4'b1111)
                            begin
                                e = e + 1'b1;
                                f = 4'b1000;
                            end
                    end
            end
        else if(d[4] == 1)
            begin
                e = 3'b001;
                f = d[4:1];
                if(d[0] == 1)
                    begin
                        if(e == 3'b111)
                            begin
                               e = 3'b111;
                               f = 4'b1111;
                            end
                        if(d == 4'b1111)
                            begin
                                e = e + 1'b1;
                                f = 4'b1000;
                            end
                    end
            end
        else 
            begin
                e = 3'b000;
                f = d[3:0];
            end
        
    end
end
endmodule
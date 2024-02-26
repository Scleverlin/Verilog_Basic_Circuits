`include "complex_fma.sv"

module FMA_Row_tb;

logic [11:0] one;
logic [11:0] minus_one;
logic [12:0] two;
logic [12:0] minus_two;
logic [13:0] three;
logic [13:0] minus_three;
logic [13:0] four;
logic [13:0] minus_four;
logic [10:0] RowB_mantissa [15:0];
logic [95:0] Row_A_mul [15:0];

multiplexer_for_row  mul (one,two,three,four,minus_one,minus_two,minus_three,minus_four,RowB_mantissa,Row_A_mul);

initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,mul);
        #10 one=1;
            two=2;
            three=3;
            four=4;
            minus_one=-1;
            minus_two=-2;
            minus_three=-3;
            minus_four=-4;
            RowB_mantissa[0]=11'b10000001000;
            RowB_mantissa[1]=11'b10000001000;
            RowB_mantissa[2]=11'b10000001000;
            RowB_mantissa[3]=11'b10000001000;
            RowB_mantissa[4]=11'b10000001000;
            RowB_mantissa[5]=11'b10000001000;
            RowB_mantissa[6]=11'b10000001000;
            RowB_mantissa[7]=11'b10000001000;
            RowB_mantissa[8]=11'b10000001000;
            RowB_mantissa[9]=11'b10000001000;
            RowB_mantissa[10]=11'b10000001000;
            RowB_mantissa[11]=11'b10000001000;
            RowB_mantissa[12]=11'b10000001000;
            RowB_mantissa[13]=11'b10000001000;
            RowB_mantissa[14]=11'b10000001000;
            RowB_mantissa[15]=11'b10000001000;
        #100 $finish;
    end

endmodule

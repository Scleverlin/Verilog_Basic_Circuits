// each 16 FMAs use one booth encoder

module partialproductgenerator (mantissa_a,zero,one,two,three,four,minus_one,minus_two,minus_three,minus_four);
input logic [10:0]mantissa_a;

// a的11位浮点数需要加一个符号位，不然全是负数,所以总共是12位；

output logic zero; // 0 不需要考虑位数， 只用1位来省导线
output logic [11:0] one;
output logic [11:0] minus_one;
output logic [12:0] two;
output logic [12:0] minus_two;
output logic [13:0] three;
output logic [13:0] minus_three;
output logic [13:0] four;
output logic [13:0] minus_four;
// output logic sign_a;
// output logic exp_a;

// These parts should be done in the extractor.

// assign sign_a=a[15];
// assign exp_a=a[14:10];
 
logic [11:0] mantissa_a_with_sign;

// assign mantissa_a[10]=(exp_a==0)?0:1;
// assign mantissa_a[9:0]=a[9:0];
assign mantissa_a_with_sign[11]=1'b0;

assign zero=1'b0;
assign one=mantissa_a_with_sign
assign minus_one=~mantissa_a_with_sign
assign two={mantissa_a_with_sign,1'b0};
assign minus_two=~{mantissa_a_with_sign,1'b0};
assign three={2'b0,one}+{1'b0,two};
assign minus_three=~three;
assign four={mantissa_a_with_sign,2'b0};
assign minus_four=~four;

// for two, three, four, needneed consider the total amount of bits  
endmodule


// module booth_radix_8_lookup_table(mantissa_b);
// // typedef logic [15:0] Row [15:0];
// input logic [10:0] mantissa_b;
// output logic [11:0] booth_encoded_b;

// logic [3:0]lookup_table [15:0];



// endmodule



module multiplexer_for_row (zero,one,two,three,four,minus_one,minus_two,minus_three,minus_four,RowB_mantissa,mode);

typedef logic [10:0] Row [15:0];
// typedef logic [10:0] Row_with_sign [15:0];

input logic Row RowB_mantissa;
input logic mode; // BF16 OR FP16.. INT8 should be same processed as FP16




logic [3:0]lookup_table [15:0];
assign lookup_table[0]=4'b0000;
assign lookup_table[1]=4'b0001;
assign lookup_table[2]=4'b0010;
assign lookup_table[3]=4'b0011;
assign lookup_table[4]=4'b0100;
assign lookup_table[5]=4'b0101;
assign lookup_table[6]=4'b0110;
assign lookup_table[7]=4'b0111;
assign lookup_table[8]=4'b1000;
assign lookup_table[9]=4'b1001;
assign lookup_table[10]=4'b1010;
assign lookup_table[11]=4'b1011;
assign lookup_table[12]=4'b1100;
assign lookup_table[13]=4'b1101;
assign lookup_table[14]=4'b1110;
assign lookup_table[15]=4'b1111;


endmodule


// module boothencoder_radix_8 (RowB,mul_RowA,Exp_A,mode);
// typedef logic [15:0] Row [15:0];

// input Row  RowB;
// // input  [15:0] a;

// endmodule


module simple_FMA();

endmodule
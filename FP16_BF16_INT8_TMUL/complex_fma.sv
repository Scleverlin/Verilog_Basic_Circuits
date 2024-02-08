// each 16 FMAs use one booth encoder

module partialproductgenerator (a,zero,one,two,three,four,minus_one,minus_two,minus_three,minus_four);
input [15:0]a;

// a的11位浮点数需要加一个符号位，不然全是负数

output zero; // 0 不需要考虑位数， 只用1位来省导线

// for two, three, four, need consider the total amount of bits  

endmodule

module booth_radix_8_lookup_table(RowB);
typedef logic [15:0] Row [15:0];
input Row RowB;
// lookup table should be shared using for whole row of B.


always_comb // lookup table

endmodule



module multiplexer (zero,one,two,three,four,minus_one,minus_two,minus_three,minus_four,RowA,RowB,Exp_A,mode);

endmodule


// module boothencoder_radix_8 (RowB,mul_RowA,Exp_A,mode);
// typedef logic [15:0] Row [15:0];

// input Row  RowB;
// // input  [15:0] a;

// endmodule


module simple_FMA();

endmodule
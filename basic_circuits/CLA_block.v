module CLA_4_bit_block(a,b,cin,sum,cout);
input [3:0] a,b;
input cin;
output [3:0] sum;
output cout;
wire [3:0] p,g,c;
pg_gen_4 u0 (a,b,p,g);
assign c[0]=cin;
assign c[1]= g[0]|(p[0]&cin);
assign c[2]= g[1]|(p[1]& g[0]|(p[0]&cin));
assign c[3]= g[2]|(p[2]& (g[1]|(p[1]& g[0]|(p[0]&cin))));
assign cout= g[3]|(p[3]& (g[2]|(p[2]& (g[1]|(p[1]& g[0]|(p[0]&cin))))));
assign sum = p^c;
endmodule

module pg_gen_4 (
    a,b,p,g    
);
input [3:0]a,b;
output [3:0]p,g;

assign p=a^b;
assign g=a&b;

endmodule 

module CLA_8_bit_block(a,b,cin,sum,cout);
input [7:0] a,b;
input cin;
output [7:0] sum;
output cout;
wire [7:0] p,g,c;
pg_gen_8 u0 (a,b,p,g);
assign c[0]=cin;
assign c[1]= g[0]|(p[0]&cin);
assign c[2]= g[1]|(p[1]& g[0]|(p[0]&cin));
assign c[3]= g[2]|(p[2]& g[1]|(p[1]& g[0]|(p[0]&cin)));
assign c[4]= g[3]|(p[3]&g[2]|(p[2]& g[1]|(p[1]& g[0]|(p[0]&cin))));
assign c[5]= g[4]|(p[4]&g[3]|(p[3]&g[2]|(p[2]& g[1]|(p[1]& g[0]|(p[0]&cin)))));
assign c[6]= g[5]|(p[5]&g[4]|(p[4]&g[3]|(p[3]&g[2]|(p[2]& g[1]|(p[1]& g[0]|(p[0]&cin))))));
assign c[7]= g[6]|(p[6]&g[5]|(p[5]&g[4]|(p[4]&g[3]|(p[3]&g[2]|(p[2]& g[1]|(p[1]& g[0]|(p[0]&cin)))))));
assign cout= g[7]|(p[7]&g[6]|(p[6]&g[5]|(p[5]&g[4]|(p[4]&g[3]|(p[3]&g[2]|(p[2]& g[1]|(p[1]& g[0]|(p[0]&cin))))))));
assign sum=p^c;
endmodule

module pg_gen_8 (
    a,b,p,g    
);
input [7:0]a,b;
output [7:0]p,g;
assign p=a^b;
assign g=a&b;
endmodule 

module CLA_16_bit_block(a,b,cin,sum,cout);
input [15:0] a,b;
input cin;
output [15:0] sum;
output cout;
wire [15:0] p,g,c;
pg_gen_16 u0 (a,b,p,g);
assign c[0]=cin;
assign c[1]= g[0]|(p[0]&cin);
assign c[2]= g[1]|(p[1]& (g[0]|(p[0]&cin)));
assign c[3]= g[2]|(p[2]& (g[1]|(p[1]& (g[0]|(p[0]&cin)))));
assign c[4]= g[3]|(p[3]& (g[2]|(p[2]& (g[1]|(p[1]& (g[0]|(p[0]&cin)))))) );
assign c[5]= g[4]|(p[4]& (g[3]|(p[3]& (g[2]|(p[2]& (g[1]|(p[1]& (g[0]|(p[0]&cin)))))) )));
assign c[6]= g[5]|(p[5]& (g[4]|(p[4]& (g[3]|(p[3]& (g[2]|(p[2]& (g[1]|(p[1]& (g[0]|(p[0]&cin)))))) )))));
assign c[7]= g[6]|(p[6]& (g[5]|(p[5]& (g[4]|(p[4]& (g[3]|(p[3]& (g[2]|(p[2]& (g[1]|(p[1]& (g[0]|(p[0]&cin)))))) )))))));
assign c[8]= g[7]|(p[7]& (g[6]|(p[6]& (g[5]|(p[5]& (g[4]|(p[4]& (g[3]|(p[3]& (g[2]|(p[2]& (g[1]|(p[1]& (g[0]|(p[0]&cin)))))) )))))))));
assign c[9]= g[8]|(p[8]& (g[7]|(p[7]& (g[6]|(p[6]& (g[5]|(p[5]& (g[4]|(p[4]& (g[3]|(p[3]& (g[2]|(p[2]& (g[1]|(p[1]& (g[0]|(p[0]&cin)))))) )))))))))));
assign c[10]= g[9]|(p[9]& (g[8]|(p[8]& (g[7]|(p[7]& (g[6]|(p[6]& (g[5]|(p[5]& (g[4]|(p[4]& (g[3]|(p[3]& (g[2]|(p[2]& (g[1]|(p[1]& (g[0]|(p[0]&cin)))))) )))))))))))));
assign c[11]= g[10]|(p[10]& (g[9]|(p[9]& (g[8]|(p[8]& (g[7]|(p[7]& (g[6]|(p[6]& (g[5]|(p[5]& (g[4]|(p[4]& (g[3]|(p[3]& (g[2]|(p[2]& (g[1]|(p[1]& (g[0]|(p[0]&cin)))))) )))))))))))))));
assign c[12]= g[11]|(p[11]& ( g[10]|(p[10]& (g[9]|(p[9]& (g[8]|(p[8]& (g[7]|(p[7]& (g[6]|(p[6]& (g[5]|(p[5]& (g[4]|(p[4]& (g[3]|(p[3]& (g[2]|(p[2]& (g[1]|(p[1]& (g[0]|(p[0]&cin)))))) )))))))))))))))));
assign c[13]= g[12]|(p[12]& ( g[11]|(p[11]& ( g[10]|(p[10]& (g[9]|(p[9]& (g[8]|(p[8]& (g[7]|(p[7]& (g[6]|(p[6]& (g[5]|(p[5]& (g[4]|(p[4]& (g[3]|(p[3]& (g[2]|(p[2]& (g[1]|(p[1]& (g[0]|(p[0]&cin)))))) )))))))))))))))))));
assign c[14]= g[13]|(p[13]& (g[12]|(p[12]& ( g[11]|(p[11]& ( g[10]|(p[10]& (g[9]|(p[9]& (g[8]|(p[8]& (g[7]|(p[7]& (g[6]|(p[6]& (g[5]|(p[5]& (g[4]|(p[4]& (g[3]|(p[3]& (g[2]|(p[2]& (g[1]|(p[1]& (g[0]|(p[0]&cin)))))) )))))))))))))))))))));
assign c[15]= g[14]|(p[14]& (g[13]|(p[13]& (g[12]|(p[12]& ( g[11]|(p[11]& ( g[10]|(p[10]& (g[9]|(p[9]& (g[8]|(p[8]& (g[7]|(p[7]& (g[6]|(p[6]& (g[5]|(p[5]& (g[4]|(p[4]& (g[3]|(p[3]& (g[2]|(p[2]& (g[1]|(p[1]& (g[0]|(p[0]&cin)))))) )))))))))))))))))))))));
assign cout= g[15]|(p[15]& (g[14]|(p[14]& (g[13]|(p[13]& (g[12]|(p[12]& ( g[11]|(p[11]& ( g[10]|(p[10]& (g[9]|(p[9]& (g[8]|(p[8]& (g[7]|(p[7]& (g[6]|(p[6]& (g[5]|(p[5]& (g[4]|(p[4]& (g[3]|(p[3]& (g[2]|(p[2]& (g[1]|(p[1]& (g[0]|(p[0]&cin)))))) )))))))))))))))))))))))));

// assign c[0]=cin;
// assign c[15:1]=g[14:0]|(p[14:0]&c[14:0]); // 62 bits
// assign cout = g[15]|(p[15]&c[15]); //cin 63th bit

assign sum=p^c;
endmodule

module pg_gen_16 (
    a,b,p,g    
);
input [15:0]a,b;
output [15:0]p,g;
assign p=a^b;
assign g=a&b;
endmodule 

module CLA_32_bit_block(a,b,cin,sum,cout);
input [31:0] a,b;
input cin;
output [31:0] sum;
output cout;
wire [31:0] p,g,c;
pg_gen_32 u0 (a,b,p,g);
assign c[0]=cin;
assign c[31:1]=g[30:0]|(p[30:0]&c[30:0]); // 62 bits
assign cout = g[31]|(p[31]&c[31]); //cin 63th bit
assign sum[0]=p[0]^c[0];
assign sum[31:1]=p[31:1]^c[31:1];
endmodule

module pg_gen_32 (
    a,b,p,g    
);
input [31:0]a,b;
output [31:0]p,g;
assign p=a^b;
assign g=a&b;
endmodule 
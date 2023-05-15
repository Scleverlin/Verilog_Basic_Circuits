module top_4_64 (
    a,b,cin,sum,cout
);

input [63:0]a,b;
input cin;
output [63:0]sum;
output cout;


wire [14:0] bit_carry;

CLA_4_bit_block_v3 CLA1 (a[3:0],b[3:0],cin,sum[3:0],bit_carry[0]);
CLA_4_bit_block_v3 CLA2 (a[7:4],b[7:4],bit_carry[0],sum[7:4],bit_carry[1]);
CLA_4_bit_block_v3 CLA3 (a[11:8],b[11:8],bit_carry[1],sum[11:8],bit_carry[2]);
CLA_4_bit_block_v3 CLA4 (a[15:12],b[15:12],bit_carry[2],sum[15:12],bit_carry[3]);
CLA_4_bit_block_v3 CLA5 (a[19:16],b[19:16],bit_carry[3],sum[19:16],bit_carry[4]);
CLA_4_bit_block_v3 CLA6 (a[23:20],b[23:20],bit_carry[4],sum[23:20],bit_carry[5]);
CLA_4_bit_block_v3 CLA7 (a[27:24],b[27:24],bit_carry[5],sum[27:24],bit_carry[6]);
CLA_4_bit_block_v3 CLA8 (a[31:28],b[31:28],bit_carry[6],sum[31:28],bit_carry[7]);
CLA_4_bit_block_v3 CLA9 (a[35:32],b[35:32],bit_carry[7],sum[35:32],bit_carry[8]);
CLA_4_bit_block_v3 CLA10 (a[39:36],b[39:36],bit_carry[8],sum[39:36],bit_carry[9]);
CLA_4_bit_block_v3 CLA11 (a[43:40],b[43:40],bit_carry[9],sum[43:40],bit_carry[10]);
CLA_4_bit_block_v3 CLA12 (a[47:44],b[47:44],bit_carry[10],sum[47:44],bit_carry[11]);
CLA_4_bit_block_v3 CLA13 (a[51:48],b[51:48],bit_carry[11],sum[51:48],bit_carry[12]);
CLA_4_bit_block_v3 CLA14 (a[55:52],b[55:52],bit_carry[12],sum[55:52],bit_carry[13]);
CLA_4_bit_block_v3 CLA15 (a[59:56],b[59:56],bit_carry[13],sum[59:56],bit_carry[14]);
CLA_4_bit_block_v3 CLA16 (a[63:60],b[63:60],bit_carry[14],sum[63:60],cout);

endmodule //CLA_mul_block_64

module top_8_64 (
 a,b,cin,sum,cout
);

input [63:0]a,b;
input cin;
output [63:0]sum;
output cout;

wire cout;
wire [6:0] bit_carry;

CLA_8_bit_block_v2 CLA1 (a[7:0],b[7:0],cin,sum[7:0],bit_carry[0]);
CLA_8_bit_block_v2 CLA2 (a[15:8],b[15:8],bit_carry[0],sum[15:8],bit_carry[1]);
CLA_8_bit_block_v2 CLA3 (a[23:16],b[23:16],bit_carry[1],sum[23:16],bit_carry[2]);
CLA_8_bit_block_v2 CLA4 (a[31:24],b[31:24],bit_carry[2],sum[31:24],bit_carry[3]);
CLA_8_bit_block_v2 CLA5 (a[39:32],b[39:32],bit_carry[3],sum[39:32],bit_carry[4]);
CLA_8_bit_block_v2 CLA6 (a[47:40],b[47:40],bit_carry[4],sum[47:40],bit_carry[5]);
CLA_8_bit_block_v2 CLA7 (a[55:48],b[55:48],bit_carry[5],sum[55:48],bit_carry[6]);
CLA_8_bit_block_v2 CLA8 (a[63:56],b[63:56],bit_carry[6],sum[63:56],cout);



endmodule //CLA_mul_block_64

module top_16_64 (
    a,b,cin,sum,cout
);
input [63:0]a,b;
input cin;
output [63:0]sum;
output  cout;

wire [2:0] bit_carry;


CLA_16_bit_block_v3 CLA1 (a[15:0],b[15:0],cin,sum[15:0],bit_carry[0]);
CLA_16_bit_block_v3  CLA2 (a[31:16],b[31:16],bit_carry[0],sum[31:16],bit_carry[1]);
CLA_16_bit_block_v3 CLA3 (a[47:32],b[47:32],bit_carry[1],sum[47:32],bit_carry[2]);
CLA_16_bit_block_v3 CLA4 (a[63:48],b[63:48],bit_carry[2],sum[63:48],cout);


endmodule //CLA_mul_block_64

module top_32_64 (
    a,b,cin,sum,cout
);
input [63:0]a,b;
input cin;
output [63:0]sum;
output  cout;

wire bit_carry;

CLA_32_bit_block cla1 (a[31:0],b[31:0],cin,sum[31:0],bit_carry);
CLA_32_bit_block cla2 (a[63:32],b[63:32],bit_carry,sum[63:32],cout);


endmodule //CLA_mul_block_64

module CLA_4_bit_block_v2(a,b,cin,sum,cout);
input [3:0] a,b;
input cin;
output [3:0] sum;
output cout;
wire [3:0] p,g;
wire [2:0]c;
// assign p=a^b;
// assign g=a&b;
pg_gen_4 u0 (a,b,p,g);
assign c[0]= g[0]|(p[0]&cin);
assign c[1]= g[1]|p[1]&g[0]|p[1]&p[0]&cin;
assign c[2]= g[2]|p[2]&g[1]|p[2]&p[1]&g[0]|p[2]&p[1]&p[0]&cin;
assign cout= g[3]|p[3]&g[2]|p[3]&p[2]&g[1]|p[3]&p[2]&p[1]&g[0]|p[3]&p[2]&p[1]&p[0]&cin;
assign sum[0]=p[0]^cin;
assign sum[3:1]=p[3:1]^c[2:0];
endmodule


module CLA_4_bit_block_v3 (a,b,cin,sum,cout);
input [3:0] a,b;
input cin;
output [3:0] sum;
output cout;
wire [3:0] p,g;
wire [2:0]c;
wire tmp1,tmp2,tmp3,pptmp1,pptmp2,pptmp3;
pg_gen_4_v2 u0 (a,b,p,g,tmp1,tmp2,tmp3,pptmp1,pptmp2,pptmp3 );
assign c[0]= g[0]|(p[0]&cin);
assign c[1]= tmp1|pptmp1&cin;
assign c[2]= tmp2|pptmp2&cin;
assign cout= tmp3|pptmp3&cin;
assign sum[0]=p[0]^cin;
assign sum[3:1]=p[3:1]^c[2:0];
endmodule
module pg_gen_4_v2 (
    a,b,p,g,tmp1,tmp2,tmp3,pptmp1,pptmp2,pptmp3    
);
input [3:0]a,b;
output [3:0]p,g;
output tmp1,tmp2,tmp3,pptmp1,pptmp2,pptmp3;
assign p=a^b;
assign g=a&b;
assign pptmp1=p[1]&p[0];
assign tmp1=g[1]|p[1]&g[0];
assign tmp2=g[2]|p[2]&g[1]|p[2]&p[1]&g[0];
assign pptmp2=p[2]&p[1]&p[0];
assign tmp3=g[3]|p[3]&g[2]|p[3]&p[2]&g[1]|p[3]&p[2]&p[1]&g[0];
assign pptmp3=p[3]&p[2]&p[1]&p[0];
endmodule 

module CLA_4_bit_block(a,b,cin,sum,cout);
input [3:0] a,b;
input cin;
output [3:0] sum;
output cout;
wire [3:0] p,g,c;
// assign p=a^b;
// assign g=a&b;
pg_gen_4 u0 (a,b,p,g);
assign c[0]=cin;
assign c[1]= g[0]|(p[0]&c[0]);
assign c[2]= g[1]|(p[1]&c[1]);
assign c[3]= g[2]|(p[2]&c[2]);
assign cout= g[3]|(p[3]&c[3]);
assign sum[0]=p[0]^c[0];
assign sum[3:1]=p[3:1]^c[3:1];
endmodule

module pg_gen_4 (
    a,b,p,g    
);
input [3:0]a,b;
output [3:0]p,g;

assign p=a^b;
assign g=a&b;

endmodule 

module CLA_8_bit_block_v2 (a,b,cin,sum,cout);
input [7:0] a,b;
input cin;
output [7:0] sum;
output cout;
wire [7:0] p,g;
wire [6:0]c;
wire [6:0]tmp,pp;
// assign p=a^b;
// assign g=a&b;
pg_gen_8_v2 u0 (a,b,p,g,tmp,pp);
assign c[0] = g[0] | (p[0] & cin);
assign c[1] = tmp[0] | pp[0]  & cin;
assign c[2] = tmp[1] | pp[1] & cin;
assign c[3] = tmp[2]| pp[2] & cin;
assign c[4] = tmp[3]| pp[3] & cin;
assign c[5] = tmp[4]| pp[4] & cin;
assign c[6] = tmp[5]| pp[5] & cin;
assign cout = tmp[6]| pp[6] & cin;

assign sum[0]=p[0]^cin;
assign sum[7:1]=p[7:1]^c[6:0];
endmodule

module pg_gen_8_v2 (
    a,b,p,g,tmp,pp    
);
input [7:0]a,b;
output [7:0]p,g;
output [6:0]tmp,pp;
assign p=a^b;
assign g=a&b;
assign tmp[0] = g[1] | p[1] & g[0] ;
assign pp[0]  = p[1] & p[0];
assign tmp[1] = g[2] | p[2] & g[1] | p[2] & p[1] & g[0] ;
assign pp[1]=  p[2] & p[1] & p[0] ;
assign tmp[2] = g[3] | p[3] & g[2] | p[3] & p[2] & g[1] | p[3] & p[2] & p[1] & g[0];
assign pp[2] =  p[3] & p[2] & p[1] & p[0] ;
assign tmp[3]= g[4] | p[4] & g[3] | p[4] & p[3] & g[2] | p[4] & p[3] & p[2] & g[1] | p[4] & p[3] & p[2] & p[1] & g[0] ;
assign pp[3] =p[4] & p[3] & p[2] & p[1] & p[0] ;
assign tmp[4] = g[5] | p[5] & g[4] | p[5] & p[4] & g[3] | p[5] & p[4] & p[3] & g[2] | p[5] & p[4] & p[3] & p[2] & g[1] | p[5] & p[4] & p[3] & p[2] & p[1] & g[0];
assign pp[4] = p[5] & p[4] & p[3] & p[2] & p[1] & p[0] ;
assign tmp[5] = g[6] | p[6] & g[5] | p[6] & p[5] & g[4] | p[6] & p[5] & p[4] & g[3] | p[6] & p[5] & p[4] & p[3] & g[2] | p[6] & p[5] & p[4] & p[3] & p[2] & g[1] | p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & g[0] ;
assign pp[5]  =p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & p[0] ;
assign tmp[6] = g[7] | p[7] & g[6] | p[7] & p[6] & g[5] | p[7] & p[6] & p[5] & g[4] | p[7] & p[6] & p[5] & p[4] & g[3] | p[7] & p[6] & p[5] & p[4] & p[3] & g[2] | p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & g[1] | p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & g[0] ;
assign pp[6]= p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & p[0] ;
endmodule 


module CLA_16_bit_block_v3 (a,b,cin,sum,cout);
input [15:0] a,b;
input cin;
output [15:0] sum;
output cout;
wire [15:0] p,g;
wire [14:0] c;
wire [14:0] tmp,pp;

pg_gen_16_v2 u0 (a,b,p,g,tmp,pp);

assign c[0] = g[0] | (p[0] & cin);
assign c[1] = tmp[0] | pp[0]  & cin;
assign c[2] = tmp[1] | pp[1] & cin;
assign c[3] = tmp[2]| pp[2] & cin;
assign c[4] = tmp[3]| pp[3] & cin;
assign c[5] = tmp[4]| pp[4] & cin;
assign c[6] = tmp[5]| pp[5] & cin;
assign c[7] = tmp[6]| pp[6] & cin;
assign c[8] = tmp[7]| pp[7] & cin;
assign c[9] = tmp[8]| pp[8] & cin;
assign c[10] = tmp[9]| pp[9] & cin;
assign c[11] = tmp[10]| pp[10] & cin;
assign c[12] = tmp[11]| pp[11] & cin;
assign c[13] = tmp[12]| pp[12] & cin;
assign c[14] = tmp[13]| pp[13] & cin;
assign cout = tmp[14]| pp[14] & cin;

assign sum[0]=p[0]^cin;
assign sum[15:1]=p[15:1]^c[14:0];
endmodule

module pg_gen_16_v2 (
    a,b,p,g,tmp,pp    
);
input [15:0]a,b;
output [15:0]p,g;
output [14:0]tmp,pp;
assign p=a^b;
assign g=a&b;
assign tmp[0] = g[1] | p[1] & g[0] ;
assign pp[0]  = p[1] & p[0];
assign tmp[1] = g[2] | p[2] & g[1] | p[2] & p[1] & g[0] ;
assign pp[1]=  p[2] & p[1] & p[0] ;
assign tmp[2] = g[3] | p[3] & g[2] | p[3] & p[2] & g[1] | p[3] & p[2] & p[1] & g[0];
assign pp[2] =  p[3] & p[2] & p[1] & p[0] ;
assign tmp[3]= g[4] | p[4] & g[3] | p[4] & p[3] & g[2] | p[4] & p[3] & p[2] & g[1] | p[4] & p[3] & p[2] & p[1] & g[0] ;
assign pp[3] =p[4] & p[3] & p[2] & p[1] & p[0] ;
assign tmp[4] = g[5] | p[5] & g[4] | p[5] & p[4] & g[3] | p[5] & p[4] & p[3] & g[2] | p[5] & p[4] & p[3] & p[2] & g[1] | p[5] & p[4] & p[3] & p[2] & p[1] & g[0];
assign pp[4] = p[5] & p[4] & p[3] & p[2] & p[1] & p[0] ;
assign tmp[5] = g[6] | p[6] & g[5] | p[6] & p[5] & g[4] | p[6] & p[5] & p[4] & g[3] | p[6] & p[5] & p[4] & p[3] & g[2] | p[6] & p[5] & p[4] & p[3] & p[2] & g[1] | p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & g[0] ;
assign pp[5]  =p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & p[0] ;
assign tmp[6] = g[7] | p[7] & g[6] | p[7] & p[6] & g[5] | p[7] & p[6] & p[5] & g[4] | p[7] & p[6] & p[5] & p[4] & g[3] | p[7] & p[6] & p[5] & p[4] & p[3] & g[2] | p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & g[1] | p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & g[0] ;
assign pp[6]= p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & p[0] ;
assign tmp[7]=  g[8] | p[8] & g[7] | p[8] & p[7] & g[6] | p[8] & p[7] & p[6] & g[5] | p[8] & p[7] & p[6] & p[5] & g[4] | p[8] & p[7] & p[6] & p[5] & p[4] & g[3] | p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & g[2] | p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & g[1] | p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & g[0] ;
assign pp[7] = p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & p[0] ;
assign tmp[8]= g[9] | p[9] & g[8] | p[9] & p[8] & g[7] | p[9] & p[8] & p[7] & g[6] | p[9] & p[8] & p[7] & p[6] & g[5] | p[9] & p[8] & p[7] & p[6] & p[5] & g[4] | p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & g[3] | p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & g[2] | p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & g[1] | p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & g[0] ;
assign pp[8] = p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & p[0] ;
assign tmp[9]= g[10] | p[10] & g[9] | p[10] & p[9] & g[8] | p[10] & p[9] & p[8] & g[7] | p[10] & p[9] & p[8] & p[7] & g[6] | p[10] & p[9] & p[8] & p[7] & p[6] & g[5] | p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & g[4] | p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & g[3] | p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & g[2] | p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & g[1] | p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & g[0] ;
assign pp[9] = p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & p[0] ;
assign tmp[10]= g[11] | p[11] & g[10] | p[11] & p[10] & g[9] | p[11] & p[10] & p[9] & g[8] | p[11] & p[10] & p[9] & p[8] & g[7] | p[11] & p[10] & p[9] & p[8] & p[7] & g[6] | p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & g[5] | p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & g[4] | p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & g[3] | p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & g[2] | p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & g[1] | p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & g[0] ;
assign pp[10] = p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & p[0] ;
assign tmp[11]= g[12] | p[12] & g[11] | p[12] & p[11] & g[10] | p[12] & p[11] & p[10] & g[9] | p[12] & p[11] & p[10] & p[9] & g[8] | p[12] & p[11] & p[10] & p[9] & p[8] & g[7] | p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & g[6] | p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & g[5] | p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & g[4] | p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & g[3] | p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & g[2] | p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & g[1] | p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & g[0] ;
assign pp[11] = p[12] &  p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & p[0] ;
assign tmp[12]= g[13] | p[13] & g[12] | p[13] & p[12] & g[11] | p[13] & p[12] & p[11] & g[10] | p[13] & p[12] & p[11] & p[10] & g[9] | p[13] & p[12] & p[11] & p[10] & p[9] & g[8] | p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & g[7] | p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & g[6] | p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & g[5] | p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & g[4] | p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & g[3] | p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & g[2] | p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & g[1] | p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & g[0];
assign pp [12]= p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & p[0];
assign tmp[13] = g[14] | p[14] & g[13] | p[14] & p[13] & g[12] | p[14] & p[13] & p[12] & g[11] | p[14] & p[13] & p[12] & p[11] & g[10] | p[14] & p[13] & p[12] & p[11] & p[10] & g[9] | p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & g[8] | p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & g[7] | p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & g[6] | p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & g[5] | p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & g[4] | p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & g[3] | p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & g[2] | p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & g[1] | p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & g[0];
assign pp[13] = p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & p[0];
assign tmp[14] = g[15] | p[15] & g[14] | p[15] & p[14] & g[13] | p[15] & p[14] & p[13] & g[12] | p[15] & p[14] & p[13] & p[12] & g[11] | p[15] & p[14] & p[13] & p[12] & p[11] & g[10] | p[15] & p[14] & p[13] & p[12] & p[11] & p[10] & g[9] | p[15] & p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & g[8] | p[15] & p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & g[7] | p[15] & p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & g[6] | p[15] & p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & g[5] | p[15] & p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & g[4] | p[15] & p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & g[3] | p[15] & p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & g[2] | p[15] & p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & g[1] | p[15] & p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & g[0];
assign pp[14] = p[15] & p[14] & p[13] & p[12] & p[11] & p[10] & p[9] & p[8] & p[7] & p[6] & p[5] & p[4] & p[3] & p[2] & p[1] & p[0];
endmodule 



module CLA_8_bit_block(a,b,cin,sum,cout);
input [7:0] a,b;
input cin;
output [7:0] sum;
output cout;
wire [7:0] p,g,c;
// assign p=a^b;
// assign g=a&b;
pg_gen_8 u0 (a,b,p,g);
assign c[0]=cin;
assign c[1]= g[0]|(p[0]&c[0]);
assign c[2]= g[1]|(p[1]&c[1]);
assign c[3]= g[2]|(p[2]&c[2]);
assign c[4]= g[3]|(p[3]&c[3]);
assign c[5]= g[4]|(p[4]&c[4]);
assign c[6]= g[5]|(p[5]&c[5]);
assign c[7]= g[6]|(p[6]&c[6]);
assign cout= g[7]|(p[7]&c[7]);
assign sum[0]=p[0]^c[0];
assign sum[7:1]=p[7:1]^c[7:1];

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
// assign p=a^b;
// assign g=a&b;
assign c[0]=cin;
assign c[15:1]=g[14:0]|(p[14:0]&c[14:0]); 
assign cout = g[15]|(p[15]&c[15]); 
assign sum[0]=p[0]^c[0];
assign sum[15:1]=p[15:1]^c[15:1];
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
// assign p=a^b;
// assign g=a&b;
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


module CLA_16_bit_block_v2 (a,b,cin,sum,cout);
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

module top_64_64(a,b,cin,sum,cout);
input [63:0] a,b;
input cin;
output [63:0] sum;
output cout;
wire [63:0] p,g,c;
pg_gen_64 u0 (a,b,p,g);
// assign p=a^b;
// assign g=a&b;
assign c[0]=cin;
assign c[63:1]=g[62:0]|(p[62:0]&c[62:0]); // 62 bits
assign cout = g[63]|(p[63]&c[63]); //cin 63th bit
assign sum[0]=p[0]^c[0];
assign sum[63:1]=p[63:1]^c[63:1];
endmodule

module pg_gen_64 (
    a,b,p,g    
);
input [63:0]a,b;
output [63:0]p,g;
assign p=a^b;
assign g=a&b;
endmodule 

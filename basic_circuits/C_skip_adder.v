module CSKA_64_bit (a,b,cin,sum_r,cout_r,clk,rst);

input [63:0] a,b;
input cin;
output reg [63:0] sum_r;
output reg cout_r;
input clk,rst;
wire [63:0]sum;
wire cout;
reg cin_r;
wire [2:0]bit_carry;

CSKA_16bit u0 (a[15:0],b[15:0],cin_r,sum[15:0],bit_carry[0]);
CSKA_16bit u1 (a[31:16],b[31:16],bit_carry[0],sum[31:16],bit_carry[1]);
CSKA_16bit u2 (a[47:32],b[47:32],bit_carry[1],sum[47:32],bit_carry[2]);
CSKA_16bit u3 (a[63:48],b[63:48],bit_carry[2],sum[63:48],cout);

always @(posedge clk) begin
    if(rst) begin
       sum_r<=0;
       cout_r<=0;
       cin_r<=0;
   end
    else begin
      sum_r<=sum;
      cin_r<=cin;
      cout_r<=cout;
end
end

endmodule


module CSKA_16bit (a,b,cin,sum,cout);
input [15:0] a,b;
input cin;
output [15:0] sum;
output cout;
wire [2:0]bit_carry;
Carry_skip_adder u0 (a[3:0],b[3:0],cin,sum[3:0],bit_carry[0]);
Carry_skip_adder u1 (a[7:4],b[7:4],bit_carry[0],sum[7:4],bit_carry[1]);
Carry_skip_adder u2 (a[11:8],b[11:8],bit_carry[1],sum[11:8],bit_carry[2]);
Carry_skip_adder u3 (a[15:12],b[15:12],bit_carry[2],sum[15:12],cout);
endmodule
module Carry_skip_adder (a,b,cin,sum,cout);
input [3:0] a,b;
input cin;
output [3:0] sum;
output cout;
wire c3;
wire bp;
RCA_4_BIT u0 (a,b,cin,sum,c3);
pg_gen_4_bit u1 (a,b,bp);
mux u2 (cin,c3,bp,cout);
endmodule

module RCA_4_BIT (a,b,cin,sum,cout);
input [3:0] a,b;
input cin;
output [3:0] sum;
output cout;
wire [2:0] bit_carry;
FA u0 (a[0],b[0],cin,sum[0],bit_carry[0]);
FA u1 (a[1],b[1],bit_carry[0],sum[1],bit_carry[1]);
FA u2 (a[2],b[2],bit_carry[1],sum[2],bit_carry[2]);
FA u3 (a[3],b[3],bit_carry[2],sum[3],cout);
endmodule

module FA (a,b,cin,sum,cout);
input a,b,cin;
output sum,cout;
wire p,g;
pg_gen_bit u0 (a,b,p,g);
assign sum=p^cin;
assign cout=g|(p&cin);
endmodule

module pg_gen_bit (a,b,p,g);
input a,b;
output p,g ;
assign p=a^b ;
assign g=a&b;
endmodule

module pg_gen_4_bit (a,b,bp);
input [3:0] a,b;
output bp;
wire [3:0]p;
assign p=a^b;
assign bp=p[0]&p[1]&p[2]&p[3];
endmodule

module mux (a,b,sel,out);
input a,b,sel;
output out;
assign out=sel?a:b;
endmodule
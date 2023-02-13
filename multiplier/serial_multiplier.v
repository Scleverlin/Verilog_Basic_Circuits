module serial_multiplier (
    a,b,out
);
input [7:0] a,b;
output  [15:0] out;
// input clk , rst;


wire [15:0] bit_0_mux ;
wire [15:0] bit_1_mux ;
wire [15:0] bit_2_mux ;
wire [15:0] bit_3_mux ;
wire [15:0] bit_4_mux ;
wire [15:0] bit_5_mux ;
wire [15:0] bit_6_mux ;
wire [15:0] bit_7_mux ;

wire [15:0] bit_0_1_sum;
wire [15:0] bit_1_2_sum;
wire [15:0] bit_2_3_sum;
wire [15:0] bit_3_4_sum;
wire [15:0] bit_4_5_sum;
wire [15:0] bit_5_6_sum;
wire [15:0] bit_6_7_sum;

wire cin,cout;
assign cin=0;


assign bit_0_mux=(a[0])?b:0;
assign bit_1_mux=(a[1])?{b,1'b0}:0;
assign bit_2_mux=(a[2])?{b,2'b0}:0;
assign bit_3_mux=(a[3])?{b,3'b0}:0;
assign bit_4_mux=(a[4])?{b,4'b0}:0;
assign bit_5_mux=(a[5])?{b,5'b0}:0;
assign bit_6_mux=(a[6])?{b,6'b0}:0;
assign bit_7_mux=(a[7])?{b,7'b0}:0;

adder_16_bit_comb u0(bit_0_mux,bit_1_mux,cin,cout,bit_0_1_sum);
adder_16_bit_comb u1(bit_0_1_sum,bit_2_mux,cin,cout,bit_1_2_sum);
adder_16_bit_comb u2(bit_1_2_sum,bit_3_mux,cin,cout,bit_2_3_sum);
adder_16_bit_comb u3(bit_2_3_sum,bit_4_mux,cin,cout,bit_3_4_sum);
adder_16_bit_comb u4(bit_3_4_sum,bit_5_mux,cin,cout,bit_4_5_sum);
adder_16_bit_comb u5(bit_4_5_sum,bit_6_mux,cin,cout,bit_6_7_sum);
adder_16_bit_comb u6(bit_6_7_sum,bit_7_mux,cin,cout,out);



// assign bit_0_1_sum=bit_0_mux+bit_1_mux;
// assign bit_1_2_sum=bit_0_1_sum+bit_2_mux;
// assign bit_2_3_sum=bit_1_2_sum+bit_3_mux;
// assign bit_3_4_sum=bit_2_3_sum+bit_4_mux;
// assign bit_4_5_sum=bit_3_4_sum+bit_5_mux;
// assign bit_6_7_sum=bit_4_5_sum+bit_6_mux;

// assign out= bit_6_7_sum+bit_7_mux;


endmodule //serial_multiplier

module adder_16_bit_comb(
a,b,cin,cout,sum
);

input [15:0] a,b;
input cin;
output  cout;
output [15:0] sum;

assign {cout,sum}=a+b+cin;


endmodule
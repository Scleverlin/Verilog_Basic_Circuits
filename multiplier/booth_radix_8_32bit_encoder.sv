module booth4_radix_8_32bit_encoder (data,b,pp0,pp1,pp2,pp3,pp4,pp5,pp6,pp7,pp8,pp9,pp10);
input [31:0] data;

output [63:0] pp0,pp1,pp2,pp3,pp4,pp5,pp6,pp7,pp8,pp9,pp10;
input [31:0] b; 
wire cout;
wire [63:0] partial_product_1;
assign partial_product_1 = data[31] ? {32'hFFFFFFFF, data} : {32'h00000000, data};

wire [63:0] partial_product_2;
assign partial_product_2 = data[31] ? {28'hFFFFFFF,3'b111 ,data, 1'b0} : {31'h00000000, data, 1'b0};

wire [63:0] partial_product_3;
adder_64bit u1 (partial_product_1,partial_product_2,1'b0,partial_product_3,cout);

wire [63:0] partial_product_4;
assign partial_product_4 = data[31] ? {28'hFFFFFFF,2'b11, data, 2'b0} : {30'h00000000, data, 2'b0};

wire [63:0] partial_product_minus4;
assign partial_product_minus4 = ~partial_product_4+1'b1;

wire [63:0] partial_product_minus3;
assign partial_product_minus3 = ~partial_product_3+ 1'b1;


wire [63:0]partial_product_minus2;
assign partial_product_minus2 = ~partial_product_2+ 1'b1;

wire [63:0] partial_product_minus1;
assign partial_product_minus1 = ~partial_product_1 + 1'b1;

assign pp0 = 
    ({b[2:0],1'b0} == 4'b0000) ? {64'b0} : 
    ({b[2:0],1'b0} == 4'b0001) ?  partial_product_1 :
    ({b[2:0],1'b0} == 4'b0010) ?  partial_product_1 :
    ({b[2:0],1'b0} == 4'b0011) ? partial_product_2 :
    ({b[2:0],1'b0} == 4'b0100) ? partial_product_2 :
    ({b[2:0],1'b0} == 4'b0101) ? partial_product_3 :
    ({b[2:0],1'b0} == 4'b0110) ? partial_product_3 :
    ({b[2:0],1'b0} == 4'b0111) ? partial_product_4 :
    ({b[2:0],1'b0} == 4'b1000) ? partial_product_minus4 :
    ({b[2:0],1'b0} == 4'b1001) ? partial_product_minus3 :
    ({b[2:0],1'b0} == 4'b1010) ? partial_product_minus2 :
    ({b[2:0],1'b0} == 4'b1011) ? partial_product_minus2 :
    ({b[2:0],1'b0} == 4'b1100) ? partial_product_minus2 :
    ({b[2:0],1'b0} == 4'b1101) ? partial_product_minus1 :
    ({b[2:0],1'b0} == 4'b1110) ? partial_product_minus1 :
    {64'b0};  // This corresponds to the default case

assign pp1 = 
    (b[5:2] == 4'b0000) ? {64'b0} : 
    (b[5:2] == 4'b0001) ?  partial_product_1 :
    (b[5:2] == 4'b0010) ?  partial_product_1 :
    (b[5:2] == 4'b0011) ? partial_product_2 :
    (b[5:2] == 4'b0100) ? partial_product_2 :
    (b[5:2] == 4'b0101) ? partial_product_3 :
    (b[5:2] == 4'b0110) ? partial_product_3 :
    (b[5:2] == 4'b0111) ? partial_product_4 :
    (b[5:2] == 4'b1000) ? partial_product_minus4 :
    (b[5:2] == 4'b1001) ? partial_product_minus3 :
    (b[5:2]== 4'b1010) ? partial_product_minus2 :
    (b[5:2] == 4'b1011) ? partial_product_minus2 :
    (b[5:2] == 4'b1100) ? partial_product_minus2 :
    (b[5:2]== 4'b1101) ? partial_product_minus1 :
    (b[5:2] == 4'b1110) ? partial_product_minus1 :
    {64'b0};  // This corresponds to the default case
assign pp2= 
    (b[8:5] == 4'b0000) ? {64'b0} : 
    (b[8:5] == 4'b0001) ?  partial_product_1 :
    (b[8:5] == 4'b0010) ?  partial_product_1 :
    (b[8:5] == 4'b0011) ? partial_product_2 :
    (b[8:5] == 4'b0100) ? partial_product_2 :
    (b[8:5] == 4'b0101) ? partial_product_3 :
    (b[8:5] == 4'b0110) ? partial_product_3 :
    (b[8:5] == 4'b0111) ? partial_product_4 :
    (b[8:5] == 4'b1000) ? partial_product_minus4 :
    (b[8:5] == 4'b1001) ? partial_product_minus3 :
    (b[8:5]== 4'b1010) ? partial_product_minus2 :
    (b[8:5] == 4'b1011) ? partial_product_minus2 :
    (b[8:5] == 4'b1100) ? partial_product_minus2 :
    (b[8:5]== 4'b1101) ? partial_product_minus1 :
    (b[8:5] == 4'b1110) ? partial_product_minus1 :
    {64'b0};  // This corresponds to the default case
assign pp3 = 
    (b[11:8] == 4'b0000) ? {64'b0} : 
    (b[11:8] == 4'b0001) ?  partial_product_1 :
    (b[11:8] == 4'b0010) ?  partial_product_1 :
    (b[11:8] == 4'b0011) ? partial_product_2 :
    (b[11:8] == 4'b0100) ? partial_product_2 :
    (b[11:8] == 4'b0101) ? partial_product_3 :
    (b[11:8] == 4'b0110) ? partial_product_3 :
    (b[11:8] == 4'b0111) ? partial_product_4 :
    (b[11:8] == 4'b1000) ? partial_product_minus4 :
    (b[11:8] == 4'b1001) ? partial_product_minus3 :
    (b[11:8]== 4'b1010) ? partial_product_minus2 :
    (b[11:8] == 4'b1011) ? partial_product_minus2 :
    (b[11:8] == 4'b1100) ? partial_product_minus2 :
    (b[11:8]== 4'b1101) ? partial_product_minus1 :
    (b[11:8] == 4'b1110) ? partial_product_minus1 :
    {64'b0};  // This corresponds to the default case
assign pp4 = 
    (b[14:11] == 4'b0000) ? {64'b0} : 
    (b[14:11] == 4'b0001) ?  partial_product_1 :
    (b[14:11] == 4'b0010) ?  partial_product_1 :
    (b[14:11] == 4'b0011) ? partial_product_2 :
    (b[14:11] == 4'b0100) ? partial_product_2 :
    (b[14:11] == 4'b0101) ? partial_product_3 :
    (b[14:11] == 4'b0110) ? partial_product_3 :
    (b[14:11] == 4'b0111) ? partial_product_4 :
    (b[14:11] == 4'b1000) ? partial_product_minus4 :
    (b[14:11] == 4'b1001) ? partial_product_minus3 :
    (b[14:11]== 4'b1010) ? partial_product_minus2 :
    (b[14:11] == 4'b1011) ? partial_product_minus2 :
    (b[14:11] == 4'b1100) ? partial_product_minus2 :
    (b[14:11]== 4'b1101) ? partial_product_minus1 :
    (b[14:11] == 4'b1110) ? partial_product_minus1 :
    {64'b0};  // This corresponds to the default case
assign pp5 = 
    (b[17:14] == 4'b0000) ? {64'b0} : 
    (b[17:14] == 4'b0001) ?  partial_product_1 :
    (b[17:14] == 4'b0010) ?  partial_product_1 :
    (b[17:14] == 4'b0011) ? partial_product_2 :
    (b[17:14] == 4'b0100) ? partial_product_2 :
    (b[17:14] == 4'b0101) ? partial_product_3 :
    (b[17:14] == 4'b0110) ? partial_product_3 :
    (b[17:14] == 4'b0111) ? partial_product_4 :
    (b[17:14] == 4'b1000) ? partial_product_minus4 :
    (b[17:14] == 4'b1001) ? partial_product_minus3 :
    (b[17:14]== 4'b1010) ? partial_product_minus2 :
    (b[17:14] == 4'b1011) ? partial_product_minus2 :
    (b[17:14] == 4'b1100) ? partial_product_minus2 :
    (b[17:14]== 4'b1101) ? partial_product_minus1 :
    (b[17:14] == 4'b1110) ? partial_product_minus1 :
    {64'b0};  // This corresponds to the default case
assign pp6 = 
    (b[20:17] == 4'b0000) ? {64'b0} : 
    (b[20:17] == 4'b0001) ?  partial_product_1 :
    (b[20:17] == 4'b0010) ?  partial_product_1 :
    (b[20:17] == 4'b0011) ? partial_product_2 :
    (b[20:17] == 4'b0100) ? partial_product_2 :
    (b[20:17] == 4'b0101) ? partial_product_3 :
    (b[20:17] == 4'b0110) ? partial_product_3 :
    (b[20:17] == 4'b0111) ? partial_product_4 :
    (b[20:17] == 4'b1000) ? partial_product_minus4 :
    (b[20:17] == 4'b1001) ? partial_product_minus3 :
    (b[20:17]== 4'b1010) ? partial_product_minus2 :
    (b[20:17] == 4'b1011) ? partial_product_minus2 :
    (b[20:17] == 4'b1100) ? partial_product_minus2 :
    (b[20:17]== 4'b1101) ? partial_product_minus1 :
    (b[20:17] == 4'b1110) ? partial_product_minus1 :
    {64'b0};  // This corresponds to the default case
assign pp7 = 
    (b[23:20]== 4'b0000) ? {64'b0} : 
    (b[23:20]== 4'b0001) ?  partial_product_1 :
    (b[23:20]== 4'b0010) ?  partial_product_1 :
    (b[23:20]== 4'b0011) ? partial_product_2 :
    (b[23:20]== 4'b0100) ? partial_product_2 :
    (b[23:20]== 4'b0101) ? partial_product_3 :
    (b[23:20]== 4'b0110) ? partial_product_3 :
    (b[23:20]== 4'b0111) ? partial_product_4 :
    (b[23:20]== 4'b1000) ? partial_product_minus4 :
    (b[23:20]== 4'b1001) ? partial_product_minus3 :
    (b[23:20]== 4'b1010) ? partial_product_minus2 :
    (b[23:20]== 4'b1011) ? partial_product_minus2 :
    (b[23:20]== 4'b1100) ? partial_product_minus2 :
    (b[23:20]== 4'b1101) ? partial_product_minus1 :
    (b[23:20]== 4'b1110) ? partial_product_minus1 :
    {64'b0};  // This corresponds to the default case
assign pp8 = 
    (b[26:23]== 4'b0000) ? {64'b0} : 
    (b[26:23]== 4'b0001) ?  partial_product_1 :
    (b[26:23]== 4'b0010) ?  partial_product_1 :
    (b[26:23]== 4'b0011) ? partial_product_2 :
    (b[26:23]== 4'b0100) ? partial_product_2 :
    (b[26:23]== 4'b0101) ? partial_product_3 :
    (b[26:23]== 4'b0110) ? partial_product_3 :
    (b[26:23]== 4'b0111) ? partial_product_4 :
    (b[26:23]== 4'b1000) ? partial_product_minus4 :
    (b[26:23]== 4'b1001) ? partial_product_minus3 :
    (b[26:23]== 4'b1010) ? partial_product_minus2 :
    (b[26:23]== 4'b1011) ? partial_product_minus2 :
    (b[26:23]== 4'b1100) ? partial_product_minus2 :
    (b[26:23]== 4'b1101) ? partial_product_minus1 :
    (b[26:23]== 4'b1110) ? partial_product_minus1 :
    {64'b0};  // This corresponds to the default case
assign pp9 = 
    (b[29:26]== 4'b0000) ? {64'b0} : 
    (b[29:26]== 4'b0001) ?  partial_product_1 :
    (b[29:26]== 4'b0010) ?  partial_product_1 :
    (b[29:26]== 4'b0011) ? partial_product_2 :
    (b[29:26]== 4'b0100) ? partial_product_2 :
    (b[29:26]== 4'b0101) ? partial_product_3 :
    (b[29:26]== 4'b0110) ? partial_product_3 :
    (b[29:26]== 4'b0111) ? partial_product_4 :
    (b[29:26]== 4'b1000) ? partial_product_minus4 :
    (b[29:26]== 4'b1001) ? partial_product_minus3 :
    (b[29:26]== 4'b1010) ? partial_product_minus2 :
    (b[29:26]== 4'b1011) ? partial_product_minus2 :
    (b[29:26]== 4'b1100) ? partial_product_minus2 :
    (b[29:26]== 4'b1101) ? partial_product_minus1 :
    (b[29:26]== 4'b1110) ? partial_product_minus1 :
    {64'b0};  // This corresponds to the default case
assign pp10 = 
    ({1'b0,b[31:29]}== 4'b0000) ? {64'b0} : 
    ({1'b0,b[31:29]}== 4'b0001) ?  partial_product_1 :
    ({1'b0,b[31:29]}== 4'b0010) ?  partial_product_1 :
    ({1'b0,b[31:29]}== 4'b0011) ? partial_product_2 :
    ({1'b0,b[31:29]}== 4'b0100) ? partial_product_2 :
    ({1'b0,b[31:29]}== 4'b0101) ? partial_product_3 :
    ({1'b0,b[31:29]}== 4'b0110) ? partial_product_3 :
    ({1'b0,b[31:29]}== 4'b0111) ? partial_product_4 :
    ({1'b0,b[31:29]}== 4'b1000) ? partial_product_minus4 :
    ({1'b0,b[31:29]}== 4'b1001) ? partial_product_minus3 :
    ({1'b0,b[31:29]}== 4'b1010) ? partial_product_minus2 :
    ({1'b0,b[31:29]}== 4'b1011) ? partial_product_minus2 :
    ({1'b0,b[31:29]}== 4'b1100) ? partial_product_minus2 :
    ({1'b0,b[31:29]}== 4'b1101) ? partial_product_minus1 :
    ({1'b0,b[31:29]}== 4'b1110) ? partial_product_minus1 :
    {64'b0};  // This corresponds to the default case
endmodule
module adder_64bit (a,b,cin,sum,cout);
input [63:0] a,b;
input cin;
output [63:0] sum;
output cout;

assign {cout,sum} = a + b + cin;

endmodule
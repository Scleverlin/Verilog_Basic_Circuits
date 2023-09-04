module booth4_radix_8_32bit_encoder (data,segment,partial_product);
input [31:0] data;

output [63:0] partial_product;
input [3:0] segment; 
wire cout1;
wire [63:0] tmp_1001;
wire [63:0] tmp_1002;
wire [63:0] partial_product_101;
adder_64bit u0 ({32'b0,data},{31'b0,data,1'b0},1'b0,partial_product_101,cout1);
wire [63:0] partial_product_110;
adder_64bit u1 ({32'b0,data},{31'b0,data,1'b0},1'b0,partial_product_110,cout1);
wire [63:0] partial_product_1000;
// adder_64bit u2 (~{30'b0,data,2'b0},64'b0,1'b1,partial_product_1000,cout1);
assign partial_product_1000 = ~{30'b0,data,2'b0}+1'b1;

assign tmp_1001 = ~{30'b0,data,2'b0};// reverse
wire [63:0] partial_product_1001;
adder_64bit u3 (tmp_1001,{32'b0,data},1'b1,partial_product_1001,cout1); // reverse +1=-4 ,-4+1=-3

assign tmp_1002 = ~{30'b0,data,2'b0};// reverse
wire [63:0] partial_product_1002;
adder_64bit u4 (tmp_1002,{32'b0,data},1'b1,partial_product_1002,cout1); // reverse +1=-4 ,-4+1=-3

wire [63:0]partial_product_1011;
// adder_64bit u5 (~{31'b0,data,1'b0},64'b0,1'b1,partial_product_1011,cout1); 
assign partial_product_1011 = ~{31'b0,data,1'b0}+1'b1;

wire [63:0]partial_product_1100;
// adder_64bit u6 (~{31'b0,data,1'b0},64'b0,1'b1,partial_product_1100,cout1); 
assign partial_product_1100 = ~{31'b0,data,1'b0}+1'b1;

wire [63:0]partial_product_1101;
// adder_64bit u7 (~{32'b0,data},64'b0,1'b1,partial_product_1101,cout1); 
assign partial_product_1101 = ~{32'b0,data}+1'b1;

wire [63:0] partial_product_1110;
// adder_64bit u8 (~{32'b0,data},64'b0,1'b1,partial_product_1110,cout1); 
assign partial_product_1110 = ~{32'b0,data}+1'b1;

assign partial_product = 
    (segment == 4'b0000) ? {64'b0} : 
    (segment == 4'b0001) ? {32'b0, data} :
    (segment == 4'b0010) ? {32'b0, data} :
    (segment == 4'b0011) ? {31'b0, data, 1'b0} :
    (segment == 4'b0100) ? {31'b0, data, 1'b0} :
    (segment == 4'b0101) ? partial_product_101 :
    (segment == 4'b0110) ? partial_product_110 :
    (segment == 4'b0111) ? {30'b0, data, 2'b0} :
    (segment == 4'b1000) ? partial_product_1000 :
    (segment == 4'b1001) ? partial_product_1001 :
    (segment == 4'b1010) ? partial_product_1002 :
    (segment == 4'b1011) ? partial_product_1011 :
    (segment == 4'b1100) ? partial_product_1100 :
    (segment == 4'b1101) ? partial_product_1101 :
    (segment == 4'b1110) ? partial_product_1110 :
    {64'b0};  // This corresponds to the default case
endmodule

module adder_64bit (a,b,cin,sum,cout);
input [63:0] a,b;
input cin;
output [63:0] sum;
output cout;

assign {cout,sum} = a + b + cin;

endmodule
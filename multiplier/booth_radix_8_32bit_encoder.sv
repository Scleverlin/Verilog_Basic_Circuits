module booth4_radix_8_32bit_encoder (data,segment,partial_product);
input [31:0] data;

output [63:0] partial_product;
input [3:0] segment; 
wire cout1;

wire [63:0] partial_product_1;
assign partial_product_1 = data[31] ? {32'hFFFFFFFF, data} : {32'h00000000, data};

wire [63:0] partial_product_2;
assign partial_product_2 = data[31] ? {28'hFFFFFFF,3'b111 ,data, 1'b0} : {31'h00000000, data, 1'b0};

wire [63:0] partial_product_3;
adder_64bit u1 ( partial_product_1,partial_product_2,1'b0,partial_product_3,cout1);

wire [63:0] partial_product_4;
assign partial_product_4 = data[31] ? {28'hFFFFFFF,2'b11, data, 2'b0} : {30'h00000000, data, 2'b0};

wire [63:0] partial_product_minus4;
assign partial_product_minus4 = ~partial_product_4+1'b1;

wire [63:0] partial_product_minus3;
adder_64bit u2 (partial_product_minus4, partial_product_1,1'b0,partial_product_minus3,cout1); // reverse +1=-4 ,-4+1=-3


wire [63:0]partial_product_minus2;
assign partial_product_minus2 = ~partial_product_2+ 1'b1;

wire [63:0] partial_product_minus1;
assign partial_product_minus1 = ~partial_product_1 + 1'b1;

assign partial_product = 
    (segment == 4'b0000) ? {64'b0} : 
    (segment == 4'b0001) ?  partial_product_1 :
    (segment == 4'b0010) ?  partial_product_1 :
    (segment == 4'b0011) ? partial_product_2 :
    (segment == 4'b0100) ? partial_product_2 :
    (segment == 4'b0101) ? partial_product_3 :
    (segment == 4'b0110) ? partial_product_3 :
    (segment == 4'b0111) ? partial_product_4 :
    (segment == 4'b1000) ? partial_product_minus4 :
    (segment == 4'b1001) ? partial_product_minus3 :
    (segment == 4'b1010) ? partial_product_minus2 :
    (segment == 4'b1011) ? partial_product_minus2 :
    (segment == 4'b1100) ? partial_product_minus2 :
    (segment == 4'b1101) ? partial_product_minus1 :
    (segment == 4'b1110) ? partial_product_minus1 :
    {64'b0};  // This corresponds to the default case
endmodule

module adder_64bit (a,b,cin,sum,cout);
input [63:0] a,b;
input cin;
output [63:0] sum;
output cout;

assign {cout,sum} = a + b + cin;

endmodule
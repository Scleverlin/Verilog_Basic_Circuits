`include "__wallace_tree_multiplier.sv"
`include "Hybrid_64_BK2_KL4_Fanout2.v"
module FMA_32_64 (a,b,c,out,clk,rst);
input [31:0] a,b;
input [63:0] c;
output reg [63:0] out;
reg [63:0]c_reg;
input clk,rst;
wire [63:0] tmp1,tmp2,tmp;
wallace_tree_32x32   w_tree(a, b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);

wire cout;
// wire [63:0] out_w;
reg [63:0] tmp_reg;
Hybrid_64_BK2_KL4_Fanout2 hca1 (tmp1,tmp2,1'b0,tmp,cout);
Hybrid_64_BK2_KL4_Fanout2 hca2 (tmp_reg[63:0],c_reg,1'b0,out,cout);

always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    tmp_reg <= 0;
   //  out <=0;
    c_reg <= 0;
 end
 else begin
    tmp_reg <= tmp;
   //  out <= out_w;
     c_reg <= c;
 end
 end
endmodule

module FMA_32_128 (a,b,c,out,clk,rst);
input [31:0] a,b;
input [63:0] c;
output reg [63:0] out;
reg [63:0]c_reg;
input clk,rst;
wire [63:0] tmp1,tmp2,tmp;
wallace_tree_32x32   w_tree(a, b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);
wire [127:0]tmp_wire;
wire cout;
// wire [63:0] out_w;
reg [127:0]tmp_reg;
Hybrid_64_BK2_KL4_Fanout2 hca1 (tmp1,tmp2,1'b0,tmp,cout);
Hybrid_64_BK2_KL4_Fanout2 hca2 (tmp_reg[63:0],c_reg,1'b0,out,cout);

always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    tmp_reg <= 0;
    c_reg <= 0;
 end
 else begin
   tmp_reg <= {tmp, tmp_reg[127:64]};
   c_reg <= c;
 end
 end

endmodule

module FMA_32_192 (a,b,c,out,clk,rst);
input [31:0] a,b;
input [63:0] c;
output reg [63:0] out;
reg [63:0]c_reg;
input clk,rst;
wire [63:0] tmp1,tmp2,tmp;
wallace_tree_32x32   w_tree(a, b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);

wire cout;
// wire [63:0] out_w;
reg [191:0] tmp_reg;
Hybrid_64_BK2_KL4_Fanout2 hca1 (tmp1,tmp2,1'b0,tmp,cout);
Hybrid_64_BK2_KL4_Fanout2 hca2 (tmp_reg[63:0],c_reg,1'b0,out,cout);

always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    tmp_reg <= 0;
   //  out <=0;
    c_reg <= 0;
 end
 else begin
   //  tmp_reg[191:128] <= tmp;
   //  out <= out_w;
   //  tmp_reg <= tmp_reg >> 64;
   tmp_reg <= {tmp, tmp_reg[191:64]};
   c_reg <= c;
 end
 end
endmodule

module FMA_32_256 (a,b,c,out,clk,rst);
input [31:0] a,b;
input [63:0] c;
output reg [63:0] out;
reg [63:0]c_reg;
input clk,rst;
wire [63:0] tmp1,tmp2,tmp;
wallace_tree_32x32   w_tree(a, b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);
wire cout;
// wire [63:0] out_w;
reg [255:0] tmp_reg;
Hybrid_64_BK2_KL4_Fanout2 hca1 (tmp1,tmp2,1'b0,tmp,cout);
Hybrid_64_BK2_KL4_Fanout2 hca2 (tmp_reg[63:0],c_reg,1'b0,out,cout);


always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    tmp_reg <= 0;
   //  out <=0;
    c_reg <= 0;
 end
 else begin
   tmp_reg <= {tmp, tmp_reg[255:64]};
    c_reg <= c;
 end
 end
endmodule

module FMA_32_320 (a,b,c,out,clk,rst);
input [31:0] a,b;
input [63:0] c;
output reg [63:0] out;
reg [63:0]c_reg;
input clk,rst;
wire [63:0] tmp1,tmp2,tmp;
wallace_tree_32x32   w_tree(a, b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);

wire cout;
// wire [63:0] out_w;
reg [319:0] tmp_reg;
Hybrid_64_BK2_KL4_Fanout2 hca1 (tmp1,tmp2,1'b0,tmp,cout);
Hybrid_64_BK2_KL4_Fanout2 hca2 (tmp_reg[63:0],c_reg,1'b0,out,cout);

always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    tmp_reg <= 0;
   //  out <=0;
    c_reg <= 0;
 end
 else begin
   tmp_reg <= {tmp, tmp_reg[319:64]};
   c_reg <= c;
 end
 end

endmodule

module FMA_32_384 (a,b,c,out,clk,rst);
input [31:0] a,b;
input [63:0] c;
output reg [63:0] out;
reg [63:0]c_reg;
input clk,rst;
wire [63:0] tmp1,tmp2,tmp;
wallace_tree_32x32   w_tree(a, b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);
wire cout;
// wire [63:0] out_w;
reg [383:0] tmp_reg;
Hybrid_64_BK2_KL4_Fanout2 hca1 (tmp1,tmp2,1'b0,tmp,cout);
Hybrid_64_BK2_KL4_Fanout2 hca2 (tmp_reg[63:0],c_reg,1'b0,out,cout);
always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    tmp_reg <= 0;
   //  out <=0;
    c_reg <= 0;
 end
 else begin

   tmp_reg <= {tmp, tmp_reg[383:64]};
   c_reg <= c;
 end
 end

endmodule

module FMA_32_448 (a,b,c,out,clk,rst);
input [31:0] a,b;
input [63:0] c;
output reg [63:0] out;
reg [63:0]c_reg;
input clk,rst;
wire [63:0] tmp1,tmp2,tmp;
wallace_tree_32x32   w_tree(a, b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);

wire cout;
// wire [63:0] out_w;
reg [447:0] tmp_reg;
Hybrid_64_BK2_KL4_Fanout2 hca1 (tmp1,tmp2,1'b0,tmp,cout);
Hybrid_64_BK2_KL4_Fanout2 hca2 (tmp_reg[63:0],c_reg,1'b0,out,cout);

always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    tmp_reg <= 0;
   //  out <=0;
    c_reg <= 0;
 end
 else begin
   tmp_reg <= {tmp, tmp_reg[447:64]};
   c_reg <= c;
 end
 end

endmodule

module FMA_32_512 (a,b,c,out,clk,rst);
input [31:0] a,b;
input [63:0] c;
output reg [63:0] out;
reg [63:0]c_reg;
input clk,rst;
wire [63:0] tmp1,tmp2,tmp;
wallace_tree_32x32   w_tree(a, b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);

wire cout;
// wire [63:0] out_w;
reg [511:0] tmp_reg;
Hybrid_64_BK2_KL4_Fanout2 hca1 (tmp1,tmp2,1'b0,tmp,cout);
Hybrid_64_BK2_KL4_Fanout2 hca2 (tmp_reg[63:0],c_reg,1'b0,out,cout);
always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    tmp_reg <= 0;
   //  out <=0;
    c_reg <= 0;
 end
 else begin
    tmp_reg <= {tmp, tmp_reg[511:64]};
   c_reg <= c;
 end
 end

endmodule
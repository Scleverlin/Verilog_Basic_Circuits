`include "__wallace_tree_multiplier.sv"
`include "HC_64_BK0_KS6.v"
module FMA_32_64 (a,b,c,out,clk,rst);
input [31:0] a,b;
input [63:0] c;
output reg [63:0] out;
reg [63:0]c_reg;
input clk,rst;
wire [63:0] tmp1,tmp2,tmp;
reg [31:0] a_reg;
// reg [31:0] b_reg;
wallace_tree_32x32   w_tree(a_reg, b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);
wire cout;
// wire [63:0] out_w;
// reg [63:0] tmp_reg;
HC_64_BK0_KS6 hca1 (tmp1,tmp2,1'b0,tmp,cout);
HC_64_BK0_KS6 hca2 (tmp,c_reg,1'b0,out,cout);

always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    a_reg <= 0;
   //  out <=0;
   // b_reg<=0;
    c_reg <= 0;
 end
 else begin
    a_reg <= a;
   //  out <= out_w;
   //  b_reg<=b;
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
reg [63:0] a_reg;
reg [31:0] b_reg;
wallace_tree_32x32   w_tree(a_reg[31:0], b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);
wire cout;
// wire [63:0] out_w;
// reg [127:0]tmp_reg;
HC_64_BK0_KS6 hca1 (tmp1,tmp2,1'b0,tmp,cout);
HC_64_BK0_KS6 hca2 (tmp,c_reg,1'b0,out,cout);

always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    a_reg <= 0;
    c_reg <= 0;
 end
 else begin
   a_reg<= {a, a_reg[63:32]};
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
reg [95:0]a_reg ;
wallace_tree_32x32   w_tree(a_reg[31:0], b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);

wire cout;
// wire [63:0] out_w;

// reg [191:0] tmp_reg;
HC_64_BK0_KS6 hca1 (tmp1,tmp2,1'b0,tmp,cout);
HC_64_BK0_KS6 hca2 (tmp,c_reg,1'b0,out,cout);

always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    a_reg <= 0;
   //  out <=0;
    c_reg <= 0;
 end
 else begin
   //  tmp_reg[191:128] <= tmp;
   //  out <= out_w;
   //  tmp_reg <= tmp_reg >> 64;
   a_reg <= {a, a_reg[95:32]};
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
reg [127:0] a_reg ;
wallace_tree_32x32   w_tree(a_reg[31:0], b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);
wire cout;
// wire [63:0] out_w;
HC_64_BK0_KS6 hca1 (tmp1,tmp2,1'b0,tmp,cout);
HC_64_BK0_KS6 hca2 (tmp,c_reg,1'b0,out,cout);


always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    a_reg <= 0;
   //  out <=0;
    c_reg <= 0;
 end
 else begin
   a_reg <= {a, a_reg[127:32]};
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
reg [159:0]a_reg; 
wallace_tree_32x32   w_tree(a_reg[31:0], b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);

wire cout;
// wire [63:0] out_w;
HC_64_BK0_KS6 hca1 (tmp1,tmp2,1'b0,tmp,cout);
HC_64_BK0_KS6 hca2 (tmp,c_reg,1'b0,out,cout);

always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    a_reg <= 0;
   //  out <=0;
    c_reg <= 0;
 end
 else begin
   a_reg <= {a, a_reg[159:32]};
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
reg [191:0]a_reg; 
wallace_tree_32x32   w_tree(a_reg[31:0], b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);
wire cout;
// wire [63:0] out_w;
HC_64_BK0_KS6 hca1 (tmp1,tmp2,1'b0,tmp,cout);
HC_64_BK0_KS6 hca2 (tmp,c_reg,1'b0,out,cout);
always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    a_reg <= 0;
   //  out <=0;
    c_reg <= 0;
 end
 else begin

   a_reg <= {a, a_reg[191:32]};
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
reg [223:0]a_reg; 
wallace_tree_32x32   w_tree(a_reg[31:0], b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);

wire cout;
// wire [63:0] out_w;
HC_64_BK0_KS6 hca1 (tmp1,tmp2,1'b0,tmp,cout);
HC_64_BK0_KS6 hca2 (tmp,c_reg,1'b0,out,cout);

always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    a_reg <= 0;
   //  out <=0;
    c_reg <= 0;
 end
 else begin
   a_reg <= {a, a_reg[223:32]};
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
reg [255:0]a_reg; 
wallace_tree_32x32   w_tree(a_reg[31:0], b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);

wire cout;
// wire [63:0] out_w;
reg [511:0] tmp_reg;
HC_64_BK0_KS6 hca1 (tmp1,tmp2,1'b0,tmp,cout);
HC_64_BK0_KS6 hca2 (tmp,c_reg,1'b0,out,cout);
always @(posedge clk or negedge rst)
 begin
 if(~rst)begin
    a_reg <= 0;
   //  out <=0;
    c_reg <= 0;
 end
 else begin
    a_reg <= {a, a_reg[255:32]};
   c_reg <= c;
 end
 end

endmodule
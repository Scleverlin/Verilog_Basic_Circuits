
/* verilator lint_off UNUSEDSIGNAL */
module HC_32_BK0_KS5_top (a,b,cin,sum,cout,clk,rst);
input [31:0]a;
input [31:0]b;
input cin;
output reg [31:0]sum;
output reg cout;
input clk;
input rst;
wire [31:0] sum_w;
wire cout_w;
reg cin_r;
HC_32_BK0_KS5 u0 (a,b,cin_r,sum_w,cout_w);
always @(posedge clk ) begin
    if (rst) begin
        sum<=0;
        cout<=0;
    end
    else begin
        sum<=sum_w;
        cout<=cout_w; 
        cin_r <= cin;
    end
end
endmodule 

module P_G_gen_hc_32 (a,b,cin,p,g);
input [31:0]a;
input [31:0]b;
input cin;
output [32:0]p;
output [32:0]g;
assign g[0]=cin;
assign p[0]=0;
assign p[32:1]=a^b;
assign g[32:1]=a&b;
endmodule

module HC_32_BK0_KS5 (a,b,cin,sum,cout);

input [32:1]a;
input [32:1]b;
input cin;
output [32:1]sum;
output cout;
wire [32:0]p;
wire [32:0]g;
P_G_gen_hc_32 pg_gen_hc (a,b,cin,p,g);
genvar i;

wire [31:0] gnpg_level1;
wire [31:0] pp_level1;
assign gnpg_level1[0]=g[0];
assign pp_level1[0]=p[0];
        generate
            for (i = 1;i<32 ;i=i+1 ) begin
             assign gnpg_level1[i]=g[i]|p[i]&g[i-1];  
             assign pp_level1[i]=p[i]&p[i-1];            
            end
        endgenerate
wire [31:0] gnpg_level2;
wire [31:0] pp_level2;
       generate
         for (i = 2;i<32 ;i=i+1 ) begin
           assign gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[i-2];  
           assign pp_level2[i]=pp_level1[i]&pp_level1[i-2];            
         end
       endgenerate
       generate 
         for (i=0;i<2;i=i+1) begin
            assign gnpg_level2[i]=gnpg_level1[i];
            assign pp_level2[i]=pp_level1[i];
         end
       endgenerate  
         
wire [31:0] gnpg_level3;
wire [31:0] pp_level3;
       generate
         for (i = 4;i<32 ;i=i+1 ) begin
           assign gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[i-4];  
           assign pp_level3[i]=pp_level2[i]&pp_level2[i-4];            
         end
       endgenerate
       generate 
         for (i=0;i<4;i=i+1) begin
            assign gnpg_level3[i]=gnpg_level2[i];
            assign pp_level3[i]=pp_level2[i];
         end
       endgenerate  
         
wire [31:0] gnpg_level4;
wire [31:0] pp_level4;
       generate
         for (i = 8;i<32 ;i=i+1 ) begin
           assign gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[i-8];  
           assign pp_level4[i]=pp_level3[i]&pp_level3[i-8];            
         end
       endgenerate
       generate 
         for (i=0;i<8;i=i+1) begin
            assign gnpg_level4[i]=gnpg_level3[i];
            assign pp_level4[i]=pp_level3[i];
         end
       endgenerate  
         
wire [31:0] gnpg_level5;
wire [31:0] pp_level5;
       generate
         for (i = 16;i<32 ;i=i+1 ) begin
           assign gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[i-16];  
           assign pp_level5[i]=pp_level4[i]&pp_level4[i-16];            
         end
       endgenerate
       generate 
         for (i=0;i<16;i=i+1) begin
            assign gnpg_level5[i]=gnpg_level4[i];
            assign pp_level5[i]=pp_level4[i];
         end
       endgenerate  
         
assign cout= g[32]|p[32]&gnpg_level5[31];
generate
   for (i = 1;i<33 ;i=i+1 ) begin
        assign  sum[i]= p[i]^gnpg_level5[i-1];    
   end
endgenerate
 // ks adder, no post process
endmodule


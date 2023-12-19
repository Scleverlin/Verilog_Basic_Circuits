
/* verilator lint_off UNUSEDSIGNAL */
module HC_4_BK0_KS2_top (a,b,cin,sum,cout,clk,rst);
input [3:0]a;
input [3:0]b;
input cin;
output reg [3:0]sum;
output reg cout;
input clk;
input rst;
wire [3:0] sum_w;
wire cout_w;
reg cin_r;
HC_4_BK0_KS2 u0 (a,b,cin_r,sum_w,cout_w);
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

module P_G_gen_hc_4 (a,b,cin,p,g);
input [3:0]a;
input [3:0]b;
input cin;
output [4:0]p;
output [4:0]g;
assign g[0]=cin;
assign p[0]=0;
assign p[4:1]=a^b;
assign g[4:1]=a&b;
endmodule

module HC_4_BK0_KS2 (a,b,cin,sum,cout);

input [4:1]a;
input [4:1]b;
input cin;
output [4:1]sum;
output cout;
wire [4:0]p;
wire [4:0]g;
P_G_gen_hc_4 pg_gen_hc (a,b,cin,p,g);
genvar i;

wire [3:0] gnpg_level1;
wire [3:0] pp_level1;
assign gnpg_level1[0]=g[0];
assign pp_level1[0]=p[0];
        generate
            for (i = 1;i<4 ;i=i+1 ) begin
             assign gnpg_level1[i]=g[i]|p[i]&g[i-1];  
             assign pp_level1[i]=p[i]&p[i-1];            
            end
        endgenerate
wire [3:0] gnpg_level2;
wire [3:0] pp_level2;
       generate
         for (i = 2;i<4 ;i=i+1 ) begin
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
         
assign cout= g[4]|p[4]&gnpg_level2[3];
generate
   for (i = 1;i<5 ;i=i+1 ) begin
        assign  sum[i]= p[i]^gnpg_level2[i-1];    
   end
endgenerate
 // ks adder, no post process
endmodule



/* verilator lint_off UNUSEDSIGNAL
module Hybrid_64_BK0_KL6_Fanout4_top (a,b,cin,sum,cout,clk,rst);
input [63:0]a;
input [63:0]b;
input cin;
output reg [63:0]sum;
output reg cout;
input clk;
input rst;
wire [63:0] sum_w;
wire cout_w;
reg cin_r;
Hybrid_64_BK0_KL6_Fanout4 u0 (a,b,cin_r,sum_w,cout_w);
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
endmodule */

module pg_gen_bk_kl_64 (a,b,cin,p,g);
input [63:0]a;
input [63:0]b;
input cin;
output [64:0]p;
output [64:0]g;
assign g[0]=cin;
assign p[0]=0;
assign p[64:1]=a^b;
assign g[64:1]=a&b;
endmodule

module Hybrid_64_BK0_KL6_Fanout4 (a,b,cin,sum,cout);

input [64:1]a;
input [64:1]b;
input cin;
output [64:1]sum;
output cout;
wire [64:0]p;
wire [64:0]g;
pg_gen_bk_kl_64 pg_gen_bkkl (a,b,cin,p,g);
genvar i;

 wire [63:0] gnpg_level1;
 wire [63:0] pp_level1;  
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock10
            //   assign  gnpg_level1[0+i]=g[0+i]|p[0+i]&g[i+0-1]; 
            AO21 a1 (p[0+i],g[i+0-1],g[0+i],gnpg_level1[0+i]);
            //   assign  pp_level1[0+i]=p[0+i]&p[i+0-1];
            AND2_X1 and1 (p[0+i],p[i+0-1],pp_level1[0+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock14
            //   assign  gnpg_level1[4+i]=g[4+i]|p[4+i]&g[i+4-1]; 
            AO21 a1 (p[4+i],g[i+4-1],g[4+i],gnpg_level1[4+i]);
            //   assign  pp_level1[4+i]=p[4+i]&p[i+4-1];
            AND2_X1 and1 (p[4+i],p[i+4-1],pp_level1[4+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock18
            //   assign  gnpg_level1[8+i]=g[8+i]|p[8+i]&g[i+8-1]; 
            AO21 a1 (p[8+i],g[i+8-1],g[8+i],gnpg_level1[8+i]);
            //   assign  pp_level1[8+i]=p[8+i]&p[i+8-1];
            AND2_X1 and1 (p[8+i],p[i+8-1],pp_level1[8+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock112
            //   assign  gnpg_level1[12+i]=g[12+i]|p[12+i]&g[i+12-1]; 
            AO21 a1 (p[12+i],g[i+12-1],g[12+i],gnpg_level1[12+i]);
            //   assign  pp_level1[12+i]=p[12+i]&p[i+12-1];
            AND2_X1 and1 (p[12+i],p[i+12-1],pp_level1[12+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock116
            //   assign  gnpg_level1[16+i]=g[16+i]|p[16+i]&g[i+16-1]; 
            AO21 a1 (p[16+i],g[i+16-1],g[16+i],gnpg_level1[16+i]);
            //   assign  pp_level1[16+i]=p[16+i]&p[i+16-1];
            AND2_X1 and1 (p[16+i],p[i+16-1],pp_level1[16+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock120
            //   assign  gnpg_level1[20+i]=g[20+i]|p[20+i]&g[i+20-1]; 
            AO21 a1 (p[20+i],g[i+20-1],g[20+i],gnpg_level1[20+i]);
            //   assign  pp_level1[20+i]=p[20+i]&p[i+20-1];
            AND2_X1 and1 (p[20+i],p[i+20-1],pp_level1[20+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock124
            //   assign  gnpg_level1[24+i]=g[24+i]|p[24+i]&g[i+24-1]; 
            AO21 a1 (p[24+i],g[i+24-1],g[24+i],gnpg_level1[24+i]);
            //   assign  pp_level1[24+i]=p[24+i]&p[i+24-1];
            AND2_X1 and1 (p[24+i],p[i+24-1],pp_level1[24+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock128
            //   assign  gnpg_level1[28+i]=g[28+i]|p[28+i]&g[i+28-1]; 
            AO21 a1 (p[28+i],g[i+28-1],g[28+i],gnpg_level1[28+i]);
            //   assign  pp_level1[28+i]=p[28+i]&p[i+28-1];
            AND2_X1 and1 (p[28+i],p[i+28-1],pp_level1[28+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock132
            //   assign  gnpg_level1[32+i]=g[32+i]|p[32+i]&g[i+32-1]; 
            AO21 a1 (p[32+i],g[i+32-1],g[32+i],gnpg_level1[32+i]);
            //   assign  pp_level1[32+i]=p[32+i]&p[i+32-1];
            AND2_X1 and1 (p[32+i],p[i+32-1],pp_level1[32+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock136
            //   assign  gnpg_level1[36+i]=g[36+i]|p[36+i]&g[i+36-1]; 
            AO21 a1 (p[36+i],g[i+36-1],g[36+i],gnpg_level1[36+i]);
            //   assign  pp_level1[36+i]=p[36+i]&p[i+36-1];
            AND2_X1 and1 (p[36+i],p[i+36-1],pp_level1[36+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock140
            //   assign  gnpg_level1[40+i]=g[40+i]|p[40+i]&g[i+40-1]; 
            AO21 a1 (p[40+i],g[i+40-1],g[40+i],gnpg_level1[40+i]);
            //   assign  pp_level1[40+i]=p[40+i]&p[i+40-1];
            AND2_X1 and1 (p[40+i],p[i+40-1],pp_level1[40+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock144
            //   assign  gnpg_level1[44+i]=g[44+i]|p[44+i]&g[i+44-1]; 
            AO21 a1 (p[44+i],g[i+44-1],g[44+i],gnpg_level1[44+i]);
            //   assign  pp_level1[44+i]=p[44+i]&p[i+44-1];
            AND2_X1 and1 (p[44+i],p[i+44-1],pp_level1[44+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock148
            //   assign  gnpg_level1[48+i]=g[48+i]|p[48+i]&g[i+48-1]; 
            AO21 a1 (p[48+i],g[i+48-1],g[48+i],gnpg_level1[48+i]);
            //   assign  pp_level1[48+i]=p[48+i]&p[i+48-1];
            AND2_X1 and1 (p[48+i],p[i+48-1],pp_level1[48+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock152
            //   assign  gnpg_level1[52+i]=g[52+i]|p[52+i]&g[i+52-1]; 
            AO21 a1 (p[52+i],g[i+52-1],g[52+i],gnpg_level1[52+i]);
            //   assign  pp_level1[52+i]=p[52+i]&p[i+52-1];
            AND2_X1 and1 (p[52+i],p[i+52-1],pp_level1[52+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock156
            //   assign  gnpg_level1[56+i]=g[56+i]|p[56+i]&g[i+56-1]; 
            AO21 a1 (p[56+i],g[i+56-1],g[56+i],gnpg_level1[56+i]);
            //   assign  pp_level1[56+i]=p[56+i]&p[i+56-1];
            AND2_X1 and1 (p[56+i],p[i+56-1],pp_level1[56+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<4 ;i=i+1 ) begin:genblock160
            //   assign  gnpg_level1[60+i]=g[60+i]|p[60+i]&g[i+60-1]; 
            AO21 a1 (p[60+i],g[i+60-1],g[60+i],gnpg_level1[60+i]);
            //   assign  pp_level1[60+i]=p[60+i]&p[i+60-1];
            AND2_X1 and1 (p[60+i],p[i+60-1],pp_level1[60+i]);
            end
           endgenerate

          
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[0+i]=g[0+i]; 
              assign  pp_level1[0+i]=p[0+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[4+i]=g[4+i]; 
              assign  pp_level1[4+i]=p[4+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[8+i]=g[8+i]; 
              assign  pp_level1[8+i]=p[8+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[12+i]=g[12+i]; 
              assign  pp_level1[12+i]=p[12+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[16+i]=g[16+i]; 
              assign  pp_level1[16+i]=p[16+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[20+i]=g[20+i]; 
              assign  pp_level1[20+i]=p[20+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[24+i]=g[24+i]; 
              assign  pp_level1[24+i]=p[24+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[28+i]=g[28+i]; 
              assign  pp_level1[28+i]=p[28+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[32+i]=g[32+i]; 
              assign  pp_level1[32+i]=p[32+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[36+i]=g[36+i]; 
              assign  pp_level1[36+i]=p[36+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[40+i]=g[40+i]; 
              assign  pp_level1[40+i]=p[40+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[44+i]=g[44+i]; 
              assign  pp_level1[44+i]=p[44+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[48+i]=g[48+i]; 
              assign  pp_level1[48+i]=p[48+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[52+i]=g[52+i]; 
              assign  pp_level1[52+i]=p[52+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[56+i]=g[56+i]; 
              assign  pp_level1[56+i]=p[56+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[60+i]=g[60+i]; 
              assign  pp_level1[60+i]=p[60+i];
            end 
            endgenerate
 wire [63:0] gnpg_level2;
 wire [63:0] pp_level2;  
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block20
   //         assign  gnpg_level2[0+i]=gnpg_level1[0+i]|pp_level1[0+i]&gnpg_level1[i+0-2]; 
            AO21 a2 (pp_level1[0+i],gnpg_level1[i+0-2],gnpg_level1[0+i],gnpg_level2[0+i]);
            //  assign  pp_level2[0+i]=pp_level1[0+i]&pp_level1[i+0-2];
            AND2_X1 and2 (pp_level1[0+i],pp_level1[i+0-2],pp_level2[0+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block24
   //         assign  gnpg_level2[4+i]=gnpg_level1[4+i]|pp_level1[4+i]&gnpg_level1[i+4-2]; 
            AO21 a2 (pp_level1[4+i],gnpg_level1[i+4-2],gnpg_level1[4+i],gnpg_level2[4+i]);
            //  assign  pp_level2[4+i]=pp_level1[4+i]&pp_level1[i+4-2];
            AND2_X1 and2 (pp_level1[4+i],pp_level1[i+4-2],pp_level2[4+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block28
   //         assign  gnpg_level2[8+i]=gnpg_level1[8+i]|pp_level1[8+i]&gnpg_level1[i+8-2]; 
            AO21 a2 (pp_level1[8+i],gnpg_level1[i+8-2],gnpg_level1[8+i],gnpg_level2[8+i]);
            //  assign  pp_level2[8+i]=pp_level1[8+i]&pp_level1[i+8-2];
            AND2_X1 and2 (pp_level1[8+i],pp_level1[i+8-2],pp_level2[8+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block212
   //         assign  gnpg_level2[12+i]=gnpg_level1[12+i]|pp_level1[12+i]&gnpg_level1[i+12-2]; 
            AO21 a2 (pp_level1[12+i],gnpg_level1[i+12-2],gnpg_level1[12+i],gnpg_level2[12+i]);
            //  assign  pp_level2[12+i]=pp_level1[12+i]&pp_level1[i+12-2];
            AND2_X1 and2 (pp_level1[12+i],pp_level1[i+12-2],pp_level2[12+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block216
   //         assign  gnpg_level2[16+i]=gnpg_level1[16+i]|pp_level1[16+i]&gnpg_level1[i+16-2]; 
            AO21 a2 (pp_level1[16+i],gnpg_level1[i+16-2],gnpg_level1[16+i],gnpg_level2[16+i]);
            //  assign  pp_level2[16+i]=pp_level1[16+i]&pp_level1[i+16-2];
            AND2_X1 and2 (pp_level1[16+i],pp_level1[i+16-2],pp_level2[16+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block220
   //         assign  gnpg_level2[20+i]=gnpg_level1[20+i]|pp_level1[20+i]&gnpg_level1[i+20-2]; 
            AO21 a2 (pp_level1[20+i],gnpg_level1[i+20-2],gnpg_level1[20+i],gnpg_level2[20+i]);
            //  assign  pp_level2[20+i]=pp_level1[20+i]&pp_level1[i+20-2];
            AND2_X1 and2 (pp_level1[20+i],pp_level1[i+20-2],pp_level2[20+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block224
   //         assign  gnpg_level2[24+i]=gnpg_level1[24+i]|pp_level1[24+i]&gnpg_level1[i+24-2]; 
            AO21 a2 (pp_level1[24+i],gnpg_level1[i+24-2],gnpg_level1[24+i],gnpg_level2[24+i]);
            //  assign  pp_level2[24+i]=pp_level1[24+i]&pp_level1[i+24-2];
            AND2_X1 and2 (pp_level1[24+i],pp_level1[i+24-2],pp_level2[24+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block228
   //         assign  gnpg_level2[28+i]=gnpg_level1[28+i]|pp_level1[28+i]&gnpg_level1[i+28-2]; 
            AO21 a2 (pp_level1[28+i],gnpg_level1[i+28-2],gnpg_level1[28+i],gnpg_level2[28+i]);
            //  assign  pp_level2[28+i]=pp_level1[28+i]&pp_level1[i+28-2];
            AND2_X1 and2 (pp_level1[28+i],pp_level1[i+28-2],pp_level2[28+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block232
   //         assign  gnpg_level2[32+i]=gnpg_level1[32+i]|pp_level1[32+i]&gnpg_level1[i+32-2]; 
            AO21 a2 (pp_level1[32+i],gnpg_level1[i+32-2],gnpg_level1[32+i],gnpg_level2[32+i]);
            //  assign  pp_level2[32+i]=pp_level1[32+i]&pp_level1[i+32-2];
            AND2_X1 and2 (pp_level1[32+i],pp_level1[i+32-2],pp_level2[32+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block236
   //         assign  gnpg_level2[36+i]=gnpg_level1[36+i]|pp_level1[36+i]&gnpg_level1[i+36-2]; 
            AO21 a2 (pp_level1[36+i],gnpg_level1[i+36-2],gnpg_level1[36+i],gnpg_level2[36+i]);
            //  assign  pp_level2[36+i]=pp_level1[36+i]&pp_level1[i+36-2];
            AND2_X1 and2 (pp_level1[36+i],pp_level1[i+36-2],pp_level2[36+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block240
   //         assign  gnpg_level2[40+i]=gnpg_level1[40+i]|pp_level1[40+i]&gnpg_level1[i+40-2]; 
            AO21 a2 (pp_level1[40+i],gnpg_level1[i+40-2],gnpg_level1[40+i],gnpg_level2[40+i]);
            //  assign  pp_level2[40+i]=pp_level1[40+i]&pp_level1[i+40-2];
            AND2_X1 and2 (pp_level1[40+i],pp_level1[i+40-2],pp_level2[40+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block244
   //         assign  gnpg_level2[44+i]=gnpg_level1[44+i]|pp_level1[44+i]&gnpg_level1[i+44-2]; 
            AO21 a2 (pp_level1[44+i],gnpg_level1[i+44-2],gnpg_level1[44+i],gnpg_level2[44+i]);
            //  assign  pp_level2[44+i]=pp_level1[44+i]&pp_level1[i+44-2];
            AND2_X1 and2 (pp_level1[44+i],pp_level1[i+44-2],pp_level2[44+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block248
   //         assign  gnpg_level2[48+i]=gnpg_level1[48+i]|pp_level1[48+i]&gnpg_level1[i+48-2]; 
            AO21 a2 (pp_level1[48+i],gnpg_level1[i+48-2],gnpg_level1[48+i],gnpg_level2[48+i]);
            //  assign  pp_level2[48+i]=pp_level1[48+i]&pp_level1[i+48-2];
            AND2_X1 and2 (pp_level1[48+i],pp_level1[i+48-2],pp_level2[48+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block252
   //         assign  gnpg_level2[52+i]=gnpg_level1[52+i]|pp_level1[52+i]&gnpg_level1[i+52-2]; 
            AO21 a2 (pp_level1[52+i],gnpg_level1[i+52-2],gnpg_level1[52+i],gnpg_level2[52+i]);
            //  assign  pp_level2[52+i]=pp_level1[52+i]&pp_level1[i+52-2];
            AND2_X1 and2 (pp_level1[52+i],pp_level1[i+52-2],pp_level2[52+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block256
   //         assign  gnpg_level2[56+i]=gnpg_level1[56+i]|pp_level1[56+i]&gnpg_level1[i+56-2]; 
            AO21 a2 (pp_level1[56+i],gnpg_level1[i+56-2],gnpg_level1[56+i],gnpg_level2[56+i]);
            //  assign  pp_level2[56+i]=pp_level1[56+i]&pp_level1[i+56-2];
            AND2_X1 and2 (pp_level1[56+i],pp_level1[i+56-2],pp_level2[56+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 2;i<4 ;i=i+1 ) begin:gen_kl_block260
   //         assign  gnpg_level2[60+i]=gnpg_level1[60+i]|pp_level1[60+i]&gnpg_level1[i+60-2]; 
            AO21 a2 (pp_level1[60+i],gnpg_level1[i+60-2],gnpg_level1[60+i],gnpg_level2[60+i]);
            //  assign  pp_level2[60+i]=pp_level1[60+i]&pp_level1[i+60-2];
            AND2_X1 and2 (pp_level1[60+i],pp_level1[i+60-2],pp_level2[60+i]);
            end
           endgenerate
          
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[0+i]=gnpg_level1[0+i]; 
              assign  pp_level2[0+i]=pp_level1[0+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[4+i]=gnpg_level1[4+i]; 
              assign  pp_level2[4+i]=pp_level1[4+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[8+i]=gnpg_level1[8+i]; 
              assign  pp_level2[8+i]=pp_level1[8+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[12+i]=gnpg_level1[12+i]; 
              assign  pp_level2[12+i]=pp_level1[12+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[16+i]=gnpg_level1[16+i]; 
              assign  pp_level2[16+i]=pp_level1[16+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[20+i]=gnpg_level1[20+i]; 
              assign  pp_level2[20+i]=pp_level1[20+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[24+i]=gnpg_level1[24+i]; 
              assign  pp_level2[24+i]=pp_level1[24+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[28+i]=gnpg_level1[28+i]; 
              assign  pp_level2[28+i]=pp_level1[28+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[32+i]=gnpg_level1[32+i]; 
              assign  pp_level2[32+i]=pp_level1[32+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[36+i]=gnpg_level1[36+i]; 
              assign  pp_level2[36+i]=pp_level1[36+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[40+i]=gnpg_level1[40+i]; 
              assign  pp_level2[40+i]=pp_level1[40+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[44+i]=gnpg_level1[44+i]; 
              assign  pp_level2[44+i]=pp_level1[44+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[48+i]=gnpg_level1[48+i]; 
              assign  pp_level2[48+i]=pp_level1[48+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[52+i]=gnpg_level1[52+i]; 
              assign  pp_level2[52+i]=pp_level1[52+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[56+i]=gnpg_level1[56+i]; 
              assign  pp_level2[56+i]=pp_level1[56+i];
            end 
            endgenerate
            generate
            for (i = 0;i<2 ;i=i+1 ) begin
              assign  gnpg_level2[60+i]=gnpg_level1[60+i]; 
              assign  pp_level2[60+i]=pp_level1[60+i];
            end 
            endgenerate
 wire [63:0] gnpg_level3;
 wire [63:0] pp_level3;  
          // old pass
         generate
          for (i = 0;i<4 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
          end 
         endgenerate
         // Multiple fanout stage
         generate
           for (i = 4;i<4+4 ;i=i+1) begin:gen_mul_kl_block34
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[4+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[4+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[4+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[4+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 8;i<4+8 ;i=i+1) begin:gen_mul_kl_block38
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[8+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[8+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[8+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[8+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 12;i<4+12 ;i=i+1) begin:gen_mul_kl_block312
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[12+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[12+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[12+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[12+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 16;i<4+16 ;i=i+1) begin:gen_mul_kl_block316
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[16+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[16+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[16+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[16+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 20;i<4+20 ;i=i+1) begin:gen_mul_kl_block320
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[20+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[20+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[20+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[20+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 24;i<4+24 ;i=i+1) begin:gen_mul_kl_block324
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[24+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[24+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[24+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[24+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 28;i<4+28 ;i=i+1) begin:gen_mul_kl_block328
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[28+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[28+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[28+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[28+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 32;i<4+32 ;i=i+1) begin:gen_mul_kl_block332
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[32+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[32+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[32+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[32+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 36;i<4+36 ;i=i+1) begin:gen_mul_kl_block336
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[36+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[36+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[36+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[36+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 40;i<4+40 ;i=i+1) begin:gen_mul_kl_block340
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[40+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[40+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[40+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[40+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 44;i<4+44 ;i=i+1) begin:gen_mul_kl_block344
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[44+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[44+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[44+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[44+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 48;i<4+48 ;i=i+1) begin:gen_mul_kl_block348
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[48+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[48+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[48+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[48+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 52;i<4+52 ;i=i+1) begin:gen_mul_kl_block352
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[52+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[52+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[52+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[52+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 56;i<4+56 ;i=i+1) begin:gen_mul_kl_block356
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[56+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[56+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[56+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[56+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 60;i<4+60 ;i=i+1) begin:gen_mul_kl_block360
             // assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[60+4-1-4];
              AO21 a3 (pp_level2[i],gnpg_level2[60+4-1-4],gnpg_level2[i],gnpg_level3[i]);
            //   assign  pp_level3[i]=pp_level2[i]&pp_level2[60+4-1-4];
            AND2_X1 and3 (pp_level2[i],pp_level2[60+4-1-4],pp_level3[i]);
           end 
         endgenerate
         
 wire [63:0] gnpg_level4;
 wire [63:0] pp_level4;  
          // old pass
         generate
          for (i = 0;i<8 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
          end 
         endgenerate
         // Multiple fanout stage
         generate
           for (i = 8;i<4+8 ;i=i+1) begin:gen_mul_kl_block48
             // assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[8+4-1-8];
              AO21 a3 (pp_level3[i],gnpg_level3[8+4-1-8],gnpg_level3[i],gnpg_level4[i]);
            //   assign  pp_level4[i]=pp_level3[i]&pp_level3[8+4-1-8];
            AND2_X1 and3 (pp_level3[i],pp_level3[8+4-1-8],pp_level4[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 12;i<4+12 ;i=i+1) begin:gen_mul_kl_block412
             // assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[12+4-1-8];
              AO21 a3 (pp_level3[i],gnpg_level3[12+4-1-8],gnpg_level3[i],gnpg_level4[i]);
            //   assign  pp_level4[i]=pp_level3[i]&pp_level3[12+4-1-8];
            AND2_X1 and3 (pp_level3[i],pp_level3[12+4-1-8],pp_level4[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 16;i<4+16 ;i=i+1) begin:gen_mul_kl_block416
             // assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[16+4-1-8];
              AO21 a3 (pp_level3[i],gnpg_level3[16+4-1-8],gnpg_level3[i],gnpg_level4[i]);
            //   assign  pp_level4[i]=pp_level3[i]&pp_level3[16+4-1-8];
            AND2_X1 and3 (pp_level3[i],pp_level3[16+4-1-8],pp_level4[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 20;i<4+20 ;i=i+1) begin:gen_mul_kl_block420
             // assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[20+4-1-8];
              AO21 a3 (pp_level3[i],gnpg_level3[20+4-1-8],gnpg_level3[i],gnpg_level4[i]);
            //   assign  pp_level4[i]=pp_level3[i]&pp_level3[20+4-1-8];
            AND2_X1 and3 (pp_level3[i],pp_level3[20+4-1-8],pp_level4[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 24;i<4+24 ;i=i+1) begin:gen_mul_kl_block424
             // assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[24+4-1-8];
              AO21 a3 (pp_level3[i],gnpg_level3[24+4-1-8],gnpg_level3[i],gnpg_level4[i]);
            //   assign  pp_level4[i]=pp_level3[i]&pp_level3[24+4-1-8];
            AND2_X1 and3 (pp_level3[i],pp_level3[24+4-1-8],pp_level4[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 28;i<4+28 ;i=i+1) begin:gen_mul_kl_block428
             // assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[28+4-1-8];
              AO21 a3 (pp_level3[i],gnpg_level3[28+4-1-8],gnpg_level3[i],gnpg_level4[i]);
            //   assign  pp_level4[i]=pp_level3[i]&pp_level3[28+4-1-8];
            AND2_X1 and3 (pp_level3[i],pp_level3[28+4-1-8],pp_level4[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 32;i<4+32 ;i=i+1) begin:gen_mul_kl_block432
             // assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[32+4-1-8];
              AO21 a3 (pp_level3[i],gnpg_level3[32+4-1-8],gnpg_level3[i],gnpg_level4[i]);
            //   assign  pp_level4[i]=pp_level3[i]&pp_level3[32+4-1-8];
            AND2_X1 and3 (pp_level3[i],pp_level3[32+4-1-8],pp_level4[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 36;i<4+36 ;i=i+1) begin:gen_mul_kl_block436
             // assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[36+4-1-8];
              AO21 a3 (pp_level3[i],gnpg_level3[36+4-1-8],gnpg_level3[i],gnpg_level4[i]);
            //   assign  pp_level4[i]=pp_level3[i]&pp_level3[36+4-1-8];
            AND2_X1 and3 (pp_level3[i],pp_level3[36+4-1-8],pp_level4[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 40;i<4+40 ;i=i+1) begin:gen_mul_kl_block440
             // assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[40+4-1-8];
              AO21 a3 (pp_level3[i],gnpg_level3[40+4-1-8],gnpg_level3[i],gnpg_level4[i]);
            //   assign  pp_level4[i]=pp_level3[i]&pp_level3[40+4-1-8];
            AND2_X1 and3 (pp_level3[i],pp_level3[40+4-1-8],pp_level4[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 44;i<4+44 ;i=i+1) begin:gen_mul_kl_block444
             // assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[44+4-1-8];
              AO21 a3 (pp_level3[i],gnpg_level3[44+4-1-8],gnpg_level3[i],gnpg_level4[i]);
            //   assign  pp_level4[i]=pp_level3[i]&pp_level3[44+4-1-8];
            AND2_X1 and3 (pp_level3[i],pp_level3[44+4-1-8],pp_level4[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 48;i<4+48 ;i=i+1) begin:gen_mul_kl_block448
             // assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[48+4-1-8];
              AO21 a3 (pp_level3[i],gnpg_level3[48+4-1-8],gnpg_level3[i],gnpg_level4[i]);
            //   assign  pp_level4[i]=pp_level3[i]&pp_level3[48+4-1-8];
            AND2_X1 and3 (pp_level3[i],pp_level3[48+4-1-8],pp_level4[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 52;i<4+52 ;i=i+1) begin:gen_mul_kl_block452
             // assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[52+4-1-8];
              AO21 a3 (pp_level3[i],gnpg_level3[52+4-1-8],gnpg_level3[i],gnpg_level4[i]);
            //   assign  pp_level4[i]=pp_level3[i]&pp_level3[52+4-1-8];
            AND2_X1 and3 (pp_level3[i],pp_level3[52+4-1-8],pp_level4[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 56;i<4+56 ;i=i+1) begin:gen_mul_kl_block456
             // assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[56+4-1-8];
              AO21 a3 (pp_level3[i],gnpg_level3[56+4-1-8],gnpg_level3[i],gnpg_level4[i]);
            //   assign  pp_level4[i]=pp_level3[i]&pp_level3[56+4-1-8];
            AND2_X1 and3 (pp_level3[i],pp_level3[56+4-1-8],pp_level4[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 60;i<4+60 ;i=i+1) begin:gen_mul_kl_block460
             // assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[60+4-1-8];
              AO21 a3 (pp_level3[i],gnpg_level3[60+4-1-8],gnpg_level3[i],gnpg_level4[i]);
            //   assign  pp_level4[i]=pp_level3[i]&pp_level3[60+4-1-8];
            AND2_X1 and3 (pp_level3[i],pp_level3[60+4-1-8],pp_level4[i]);
           end 
         endgenerate
         
 wire [63:0] gnpg_level5;
 wire [63:0] pp_level5;  
          // old pass
         generate
          for (i = 0;i<16 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]; 
              assign  pp_level5[i]=pp_level4[i];
          end 
         endgenerate
         // Multiple fanout stage
         generate
           for (i = 16;i<4+16 ;i=i+1) begin:gen_mul_kl_block516
             // assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[16+4-1-16];
              AO21 a3 (pp_level4[i],gnpg_level4[16+4-1-16],gnpg_level4[i],gnpg_level5[i]);
            //   assign  pp_level5[i]=pp_level4[i]&pp_level4[16+4-1-16];
            AND2_X1 and3 (pp_level4[i],pp_level4[16+4-1-16],pp_level5[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 20;i<4+20 ;i=i+1) begin:gen_mul_kl_block520
             // assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[20+4-1-16];
              AO21 a3 (pp_level4[i],gnpg_level4[20+4-1-16],gnpg_level4[i],gnpg_level5[i]);
            //   assign  pp_level5[i]=pp_level4[i]&pp_level4[20+4-1-16];
            AND2_X1 and3 (pp_level4[i],pp_level4[20+4-1-16],pp_level5[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 24;i<4+24 ;i=i+1) begin:gen_mul_kl_block524
             // assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[24+4-1-16];
              AO21 a3 (pp_level4[i],gnpg_level4[24+4-1-16],gnpg_level4[i],gnpg_level5[i]);
            //   assign  pp_level5[i]=pp_level4[i]&pp_level4[24+4-1-16];
            AND2_X1 and3 (pp_level4[i],pp_level4[24+4-1-16],pp_level5[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 28;i<4+28 ;i=i+1) begin:gen_mul_kl_block528
             // assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[28+4-1-16];
              AO21 a3 (pp_level4[i],gnpg_level4[28+4-1-16],gnpg_level4[i],gnpg_level5[i]);
            //   assign  pp_level5[i]=pp_level4[i]&pp_level4[28+4-1-16];
            AND2_X1 and3 (pp_level4[i],pp_level4[28+4-1-16],pp_level5[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 32;i<4+32 ;i=i+1) begin:gen_mul_kl_block532
             // assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[32+4-1-16];
              AO21 a3 (pp_level4[i],gnpg_level4[32+4-1-16],gnpg_level4[i],gnpg_level5[i]);
            //   assign  pp_level5[i]=pp_level4[i]&pp_level4[32+4-1-16];
            AND2_X1 and3 (pp_level4[i],pp_level4[32+4-1-16],pp_level5[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 36;i<4+36 ;i=i+1) begin:gen_mul_kl_block536
             // assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[36+4-1-16];
              AO21 a3 (pp_level4[i],gnpg_level4[36+4-1-16],gnpg_level4[i],gnpg_level5[i]);
            //   assign  pp_level5[i]=pp_level4[i]&pp_level4[36+4-1-16];
            AND2_X1 and3 (pp_level4[i],pp_level4[36+4-1-16],pp_level5[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 40;i<4+40 ;i=i+1) begin:gen_mul_kl_block540
             // assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[40+4-1-16];
              AO21 a3 (pp_level4[i],gnpg_level4[40+4-1-16],gnpg_level4[i],gnpg_level5[i]);
            //   assign  pp_level5[i]=pp_level4[i]&pp_level4[40+4-1-16];
            AND2_X1 and3 (pp_level4[i],pp_level4[40+4-1-16],pp_level5[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 44;i<4+44 ;i=i+1) begin:gen_mul_kl_block544
             // assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[44+4-1-16];
              AO21 a3 (pp_level4[i],gnpg_level4[44+4-1-16],gnpg_level4[i],gnpg_level5[i]);
            //   assign  pp_level5[i]=pp_level4[i]&pp_level4[44+4-1-16];
            AND2_X1 and3 (pp_level4[i],pp_level4[44+4-1-16],pp_level5[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 48;i<4+48 ;i=i+1) begin:gen_mul_kl_block548
             // assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[48+4-1-16];
              AO21 a3 (pp_level4[i],gnpg_level4[48+4-1-16],gnpg_level4[i],gnpg_level5[i]);
            //   assign  pp_level5[i]=pp_level4[i]&pp_level4[48+4-1-16];
            AND2_X1 and3 (pp_level4[i],pp_level4[48+4-1-16],pp_level5[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 52;i<4+52 ;i=i+1) begin:gen_mul_kl_block552
             // assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[52+4-1-16];
              AO21 a3 (pp_level4[i],gnpg_level4[52+4-1-16],gnpg_level4[i],gnpg_level5[i]);
            //   assign  pp_level5[i]=pp_level4[i]&pp_level4[52+4-1-16];
            AND2_X1 and3 (pp_level4[i],pp_level4[52+4-1-16],pp_level5[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 56;i<4+56 ;i=i+1) begin:gen_mul_kl_block556
             // assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[56+4-1-16];
              AO21 a3 (pp_level4[i],gnpg_level4[56+4-1-16],gnpg_level4[i],gnpg_level5[i]);
            //   assign  pp_level5[i]=pp_level4[i]&pp_level4[56+4-1-16];
            AND2_X1 and3 (pp_level4[i],pp_level4[56+4-1-16],pp_level5[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 60;i<4+60 ;i=i+1) begin:gen_mul_kl_block560
             // assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[60+4-1-16];
              AO21 a3 (pp_level4[i],gnpg_level4[60+4-1-16],gnpg_level4[i],gnpg_level5[i]);
            //   assign  pp_level5[i]=pp_level4[i]&pp_level4[60+4-1-16];
            AND2_X1 and3 (pp_level4[i],pp_level4[60+4-1-16],pp_level5[i]);
           end 
         endgenerate
         
 wire [63:0] gnpg_level6;
 wire [63:0] pp_level6;  
          // old pass
         generate
          for (i = 0;i<32 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]; 
              assign  pp_level6[i]=pp_level5[i];
          end 
         endgenerate
         // Multiple fanout stage
         generate
           for (i = 32;i<4+32 ;i=i+1) begin:gen_mul_kl_block632
             // assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[32+4-1-32];
              AO21 a3 (pp_level5[i],gnpg_level5[32+4-1-32],gnpg_level5[i],gnpg_level6[i]);
            //   assign  pp_level6[i]=pp_level5[i]&pp_level5[32+4-1-32];
            AND2_X1 and3 (pp_level5[i],pp_level5[32+4-1-32],pp_level6[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 36;i<4+36 ;i=i+1) begin:gen_mul_kl_block636
             // assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[36+4-1-32];
              AO21 a3 (pp_level5[i],gnpg_level5[36+4-1-32],gnpg_level5[i],gnpg_level6[i]);
            //   assign  pp_level6[i]=pp_level5[i]&pp_level5[36+4-1-32];
            AND2_X1 and3 (pp_level5[i],pp_level5[36+4-1-32],pp_level6[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 40;i<4+40 ;i=i+1) begin:gen_mul_kl_block640
             // assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[40+4-1-32];
              AO21 a3 (pp_level5[i],gnpg_level5[40+4-1-32],gnpg_level5[i],gnpg_level6[i]);
            //   assign  pp_level6[i]=pp_level5[i]&pp_level5[40+4-1-32];
            AND2_X1 and3 (pp_level5[i],pp_level5[40+4-1-32],pp_level6[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 44;i<4+44 ;i=i+1) begin:gen_mul_kl_block644
             // assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[44+4-1-32];
              AO21 a3 (pp_level5[i],gnpg_level5[44+4-1-32],gnpg_level5[i],gnpg_level6[i]);
            //   assign  pp_level6[i]=pp_level5[i]&pp_level5[44+4-1-32];
            AND2_X1 and3 (pp_level5[i],pp_level5[44+4-1-32],pp_level6[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 48;i<4+48 ;i=i+1) begin:gen_mul_kl_block648
             // assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[48+4-1-32];
              AO21 a3 (pp_level5[i],gnpg_level5[48+4-1-32],gnpg_level5[i],gnpg_level6[i]);
            //   assign  pp_level6[i]=pp_level5[i]&pp_level5[48+4-1-32];
            AND2_X1 and3 (pp_level5[i],pp_level5[48+4-1-32],pp_level6[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 52;i<4+52 ;i=i+1) begin:gen_mul_kl_block652
             // assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[52+4-1-32];
              AO21 a3 (pp_level5[i],gnpg_level5[52+4-1-32],gnpg_level5[i],gnpg_level6[i]);
            //   assign  pp_level6[i]=pp_level5[i]&pp_level5[52+4-1-32];
            AND2_X1 and3 (pp_level5[i],pp_level5[52+4-1-32],pp_level6[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 56;i<4+56 ;i=i+1) begin:gen_mul_kl_block656
             // assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[56+4-1-32];
              AO21 a3 (pp_level5[i],gnpg_level5[56+4-1-32],gnpg_level5[i],gnpg_level6[i]);
            //   assign  pp_level6[i]=pp_level5[i]&pp_level5[56+4-1-32];
            AND2_X1 and3 (pp_level5[i],pp_level5[56+4-1-32],pp_level6[i]);
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 60;i<4+60 ;i=i+1) begin:gen_mul_kl_block660
             // assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[60+4-1-32];
              AO21 a3 (pp_level5[i],gnpg_level5[60+4-1-32],gnpg_level5[i],gnpg_level6[i]);
            //   assign  pp_level6[i]=pp_level5[i]&pp_level5[60+4-1-32];
            AND2_X1 and3 (pp_level5[i],pp_level5[60+4-1-32],pp_level6[i]);
           end 
         endgenerate
         
   assign cout= g[64]|p[64]&gnpg_level6[63];
   generate
    for (i = 1;i<65 ;i=i+1 ) begin
        assign  sum[i]= p[i]^gnpg_level6[i-1];    
    end
   endgenerate // 6 is deep enough , no post process
endmodule
module AO21 ( a, b, d, y_bar );
  input a, b, d;
   // wire y;
  output   y_bar;

   //AOI21_X2 aoi21_1 ( .A1(a), .A2(b), .B(d), .ZN(y) );
   // INV_X2 inv_1 ( .I(y), .ZN(y_bar) );
   AO21x1_ASAP7_75t_SL aoi21_1 (y_bar,a,b,d);
endmodule
 module AND2_X1 (A,B,Y);
input A,B;
output Y;

AND2x2_ASAP7_75t_SL and2 (Y,A,B);

endmodule 
/* module AND2x2_ASAP7_75t_SL (Y, A, B);
	output Y;
	input A, B;
	// Function
	and (Y, A, B);
endmodule

module AO21x1_ASAP7_75t_SL (Y, A1, A2, B);
	output Y;
	input A1, A2, B;

	// Function
	wire int_fwire_0;

	and (int_fwire_0, A1, A2);
	or (Y, int_fwire_0, B);
endmodule*/


/* verilator lint_off UNUSEDSIGNAL */


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

module Hybrid_64_BK0_KL6_Fanout2 (a,b,cin,sum,cout);

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
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[0+i]=g[0+i]|p[0+i]&g[i+0-1]; 
              assign  pp_level1[0+i]=p[0+i]&p[i+0-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[2+i]=g[2+i]|p[2+i]&g[i+2-1]; 
              assign  pp_level1[2+i]=p[2+i]&p[i+2-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[4+i]=g[4+i]|p[4+i]&g[i+4-1]; 
              assign  pp_level1[4+i]=p[4+i]&p[i+4-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[6+i]=g[6+i]|p[6+i]&g[i+6-1]; 
              assign  pp_level1[6+i]=p[6+i]&p[i+6-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[8+i]=g[8+i]|p[8+i]&g[i+8-1]; 
              assign  pp_level1[8+i]=p[8+i]&p[i+8-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[10+i]=g[10+i]|p[10+i]&g[i+10-1]; 
              assign  pp_level1[10+i]=p[10+i]&p[i+10-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[12+i]=g[12+i]|p[12+i]&g[i+12-1]; 
              assign  pp_level1[12+i]=p[12+i]&p[i+12-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[14+i]=g[14+i]|p[14+i]&g[i+14-1]; 
              assign  pp_level1[14+i]=p[14+i]&p[i+14-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[16+i]=g[16+i]|p[16+i]&g[i+16-1]; 
              assign  pp_level1[16+i]=p[16+i]&p[i+16-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[18+i]=g[18+i]|p[18+i]&g[i+18-1]; 
              assign  pp_level1[18+i]=p[18+i]&p[i+18-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[20+i]=g[20+i]|p[20+i]&g[i+20-1]; 
              assign  pp_level1[20+i]=p[20+i]&p[i+20-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[22+i]=g[22+i]|p[22+i]&g[i+22-1]; 
              assign  pp_level1[22+i]=p[22+i]&p[i+22-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[24+i]=g[24+i]|p[24+i]&g[i+24-1]; 
              assign  pp_level1[24+i]=p[24+i]&p[i+24-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[26+i]=g[26+i]|p[26+i]&g[i+26-1]; 
              assign  pp_level1[26+i]=p[26+i]&p[i+26-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[28+i]=g[28+i]|p[28+i]&g[i+28-1]; 
              assign  pp_level1[28+i]=p[28+i]&p[i+28-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[30+i]=g[30+i]|p[30+i]&g[i+30-1]; 
              assign  pp_level1[30+i]=p[30+i]&p[i+30-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[32+i]=g[32+i]|p[32+i]&g[i+32-1]; 
              assign  pp_level1[32+i]=p[32+i]&p[i+32-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[34+i]=g[34+i]|p[34+i]&g[i+34-1]; 
              assign  pp_level1[34+i]=p[34+i]&p[i+34-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[36+i]=g[36+i]|p[36+i]&g[i+36-1]; 
              assign  pp_level1[36+i]=p[36+i]&p[i+36-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[38+i]=g[38+i]|p[38+i]&g[i+38-1]; 
              assign  pp_level1[38+i]=p[38+i]&p[i+38-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[40+i]=g[40+i]|p[40+i]&g[i+40-1]; 
              assign  pp_level1[40+i]=p[40+i]&p[i+40-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[42+i]=g[42+i]|p[42+i]&g[i+42-1]; 
              assign  pp_level1[42+i]=p[42+i]&p[i+42-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[44+i]=g[44+i]|p[44+i]&g[i+44-1]; 
              assign  pp_level1[44+i]=p[44+i]&p[i+44-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[46+i]=g[46+i]|p[46+i]&g[i+46-1]; 
              assign  pp_level1[46+i]=p[46+i]&p[i+46-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[48+i]=g[48+i]|p[48+i]&g[i+48-1]; 
              assign  pp_level1[48+i]=p[48+i]&p[i+48-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[50+i]=g[50+i]|p[50+i]&g[i+50-1]; 
              assign  pp_level1[50+i]=p[50+i]&p[i+50-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[52+i]=g[52+i]|p[52+i]&g[i+52-1]; 
              assign  pp_level1[52+i]=p[52+i]&p[i+52-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[54+i]=g[54+i]|p[54+i]&g[i+54-1]; 
              assign  pp_level1[54+i]=p[54+i]&p[i+54-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[56+i]=g[56+i]|p[56+i]&g[i+56-1]; 
              assign  pp_level1[56+i]=p[56+i]&p[i+56-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[58+i]=g[58+i]|p[58+i]&g[i+58-1]; 
              assign  pp_level1[58+i]=p[58+i]&p[i+58-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[60+i]=g[60+i]|p[60+i]&g[i+60-1]; 
              assign  pp_level1[60+i]=p[60+i]&p[i+60-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<2 ;i=i+1 ) begin
              assign  gnpg_level1[62+i]=g[62+i]|p[62+i]&g[i+62-1]; 
              assign  pp_level1[62+i]=p[62+i]&p[i+62-1];
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
              assign  gnpg_level1[2+i]=g[2+i]; 
              assign  pp_level1[2+i]=p[2+i];
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
              assign  gnpg_level1[6+i]=g[6+i]; 
              assign  pp_level1[6+i]=p[6+i];
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
              assign  gnpg_level1[10+i]=g[10+i]; 
              assign  pp_level1[10+i]=p[10+i];
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
              assign  gnpg_level1[14+i]=g[14+i]; 
              assign  pp_level1[14+i]=p[14+i];
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
              assign  gnpg_level1[18+i]=g[18+i]; 
              assign  pp_level1[18+i]=p[18+i];
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
              assign  gnpg_level1[22+i]=g[22+i]; 
              assign  pp_level1[22+i]=p[22+i];
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
              assign  gnpg_level1[26+i]=g[26+i]; 
              assign  pp_level1[26+i]=p[26+i];
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
              assign  gnpg_level1[30+i]=g[30+i]; 
              assign  pp_level1[30+i]=p[30+i];
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
              assign  gnpg_level1[34+i]=g[34+i]; 
              assign  pp_level1[34+i]=p[34+i];
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
              assign  gnpg_level1[38+i]=g[38+i]; 
              assign  pp_level1[38+i]=p[38+i];
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
              assign  gnpg_level1[42+i]=g[42+i]; 
              assign  pp_level1[42+i]=p[42+i];
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
              assign  gnpg_level1[46+i]=g[46+i]; 
              assign  pp_level1[46+i]=p[46+i];
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
              assign  gnpg_level1[50+i]=g[50+i]; 
              assign  pp_level1[50+i]=p[50+i];
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
              assign  gnpg_level1[54+i]=g[54+i]; 
              assign  pp_level1[54+i]=p[54+i];
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
              assign  gnpg_level1[58+i]=g[58+i]; 
              assign  pp_level1[58+i]=p[58+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[60+i]=g[60+i]; 
              assign  pp_level1[60+i]=p[60+i];
            end 
            endgenerate
          // old pass
            generate
            for (i = 0;i<1  ;i=i+1 ) begin
              assign  gnpg_level1[62+i]=g[62+i]; 
              assign  pp_level1[62+i]=p[62+i];
            end 
            endgenerate
 wire [63:0] gnpg_level2;
 wire [63:0] pp_level2;  
          // old pass
         generate
          for (i = 0;i<2 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]; 
              assign  pp_level2[i]=pp_level1[i];
          end 
         endgenerate
         // Multiple fanout stage
         generate
           for (i = 2;i<2+2 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[2+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[2+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 4;i<2+4 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[4+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[4+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 6;i<2+6 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[6+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[6+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 8;i<2+8 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[8+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[8+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 10;i<2+10 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[10+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[10+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 12;i<2+12 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[12+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[12+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 14;i<2+14 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[14+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[14+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 16;i<2+16 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[16+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[16+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 18;i<2+18 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[18+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[18+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 20;i<2+20 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[20+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[20+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 22;i<2+22 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[22+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[22+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 24;i<2+24 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[24+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[24+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 26;i<2+26 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[26+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[26+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 28;i<2+28 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[28+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[28+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 30;i<2+30 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[30+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[30+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 32;i<2+32 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[32+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[32+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 34;i<2+34 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[34+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[34+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 36;i<2+36 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[36+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[36+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 38;i<2+38 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[38+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[38+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 40;i<2+40 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[40+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[40+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 42;i<2+42 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[42+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[42+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 44;i<2+44 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[44+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[44+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 46;i<2+46 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[46+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[46+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 48;i<2+48 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[48+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[48+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 50;i<2+50 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[50+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[50+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 52;i<2+52 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[52+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[52+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 54;i<2+54 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[54+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[54+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 56;i<2+56 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[56+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[56+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 58;i<2+58 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[58+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[58+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 60;i<2+60 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[60+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[60+2-1-2];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 62;i<2+62 ;i=i+1) begin
              assign  gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[62+2-1-2];
              assign  pp_level2[i]=pp_level1[i]&pp_level1[62+2-1-2];
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
           for (i = 4;i<2+4 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[4+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[4+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 6;i<2+6 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[6+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[6+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 8;i<2+8 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[8+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[8+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 10;i<2+10 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[10+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[10+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 12;i<2+12 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[12+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[12+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 14;i<2+14 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[14+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[14+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 16;i<2+16 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[16+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[16+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 18;i<2+18 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[18+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[18+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 20;i<2+20 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[20+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[20+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 22;i<2+22 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[22+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[22+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 24;i<2+24 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[24+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[24+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 26;i<2+26 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[26+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[26+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 28;i<2+28 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[28+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[28+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 30;i<2+30 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[30+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[30+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 32;i<2+32 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[32+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[32+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 34;i<2+34 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[34+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[34+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 36;i<2+36 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[36+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[36+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 38;i<2+38 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[38+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[38+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 40;i<2+40 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[40+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[40+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 42;i<2+42 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[42+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[42+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 44;i<2+44 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[44+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[44+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 46;i<2+46 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[46+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[46+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 48;i<2+48 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[48+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[48+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 50;i<2+50 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[50+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[50+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 52;i<2+52 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[52+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[52+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 54;i<2+54 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[54+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[54+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 56;i<2+56 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[56+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[56+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 58;i<2+58 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[58+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[58+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 60;i<2+60 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[60+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[60+2-1-4];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 62;i<2+62 ;i=i+1) begin
              assign  gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[62+2-1-4];
              assign  pp_level3[i]=pp_level2[i]&pp_level2[62+2-1-4];
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
           for (i = 8;i<2+8 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[8+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[8+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 10;i<2+10 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[10+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[10+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 12;i<2+12 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[12+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[12+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 14;i<2+14 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[14+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[14+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 16;i<2+16 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[16+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[16+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 18;i<2+18 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[18+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[18+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 20;i<2+20 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[20+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[20+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 22;i<2+22 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[22+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[22+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 24;i<2+24 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[24+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[24+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 26;i<2+26 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[26+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[26+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 28;i<2+28 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[28+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[28+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 30;i<2+30 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[30+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[30+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 32;i<2+32 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[32+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[32+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 34;i<2+34 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[34+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[34+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 36;i<2+36 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[36+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[36+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 38;i<2+38 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[38+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[38+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 40;i<2+40 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[40+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[40+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 42;i<2+42 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[42+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[42+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 44;i<2+44 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[44+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[44+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 46;i<2+46 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[46+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[46+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 48;i<2+48 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[48+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[48+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 50;i<2+50 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[50+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[50+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 52;i<2+52 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[52+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[52+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 54;i<2+54 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[54+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[54+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 56;i<2+56 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[56+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[56+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 58;i<2+58 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[58+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[58+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 60;i<2+60 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[60+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[60+2-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 62;i<2+62 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[62+2-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[62+2-1-8];
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
           for (i = 16;i<2+16 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[16+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[16+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 18;i<2+18 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[18+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[18+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 20;i<2+20 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[20+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[20+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 22;i<2+22 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[22+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[22+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 24;i<2+24 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[24+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[24+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 26;i<2+26 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[26+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[26+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 28;i<2+28 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[28+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[28+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 30;i<2+30 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[30+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[30+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 32;i<2+32 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[32+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[32+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 34;i<2+34 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[34+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[34+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 36;i<2+36 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[36+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[36+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 38;i<2+38 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[38+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[38+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 40;i<2+40 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[40+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[40+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 42;i<2+42 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[42+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[42+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 44;i<2+44 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[44+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[44+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 46;i<2+46 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[46+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[46+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 48;i<2+48 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[48+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[48+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 50;i<2+50 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[50+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[50+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 52;i<2+52 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[52+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[52+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 54;i<2+54 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[54+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[54+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 56;i<2+56 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[56+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[56+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 58;i<2+58 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[58+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[58+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 60;i<2+60 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[60+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[60+2-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 62;i<2+62 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[62+2-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[62+2-1-16];
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
           for (i = 32;i<2+32 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[32+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[32+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 34;i<2+34 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[34+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[34+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 36;i<2+36 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[36+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[36+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 38;i<2+38 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[38+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[38+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 40;i<2+40 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[40+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[40+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 42;i<2+42 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[42+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[42+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 44;i<2+44 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[44+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[44+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 46;i<2+46 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[46+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[46+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 48;i<2+48 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[48+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[48+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 50;i<2+50 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[50+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[50+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 52;i<2+52 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[52+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[52+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 54;i<2+54 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[54+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[54+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 56;i<2+56 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[56+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[56+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 58;i<2+58 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[58+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[58+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 60;i<2+60 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[60+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[60+2-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 62;i<2+62 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[62+2-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[62+2-1-32];
           end 
         endgenerate
         
   assign cout= g[64]|p[64]&gnpg_level6[63];
   generate
    for (i = 1;i<65 ;i=i+1 ) begin
        assign  sum[i]= p[i]^gnpg_level6[i-1];    
    end
   endgenerate // 6 is deep enough , no post process
endmodule


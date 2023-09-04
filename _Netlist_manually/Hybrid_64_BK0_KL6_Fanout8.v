
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

module Hybrid_64_BK0_KL6_Fanout8 (a,b,cin,sum,cout);

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
            for (i = 1;i<8 ;i=i+1 ) begin
              assign  gnpg_level1[0+i]=g[0+i]|p[0+i]&g[i+0-1]; 
              assign  pp_level1[0+i]=p[0+i]&p[i+0-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<8 ;i=i+1 ) begin
              assign  gnpg_level1[8+i]=g[8+i]|p[8+i]&g[i+8-1]; 
              assign  pp_level1[8+i]=p[8+i]&p[i+8-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<8 ;i=i+1 ) begin
              assign  gnpg_level1[16+i]=g[16+i]|p[16+i]&g[i+16-1]; 
              assign  pp_level1[16+i]=p[16+i]&p[i+16-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<8 ;i=i+1 ) begin
              assign  gnpg_level1[24+i]=g[24+i]|p[24+i]&g[i+24-1]; 
              assign  pp_level1[24+i]=p[24+i]&p[i+24-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<8 ;i=i+1 ) begin
              assign  gnpg_level1[32+i]=g[32+i]|p[32+i]&g[i+32-1]; 
              assign  pp_level1[32+i]=p[32+i]&p[i+32-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<8 ;i=i+1 ) begin
              assign  gnpg_level1[40+i]=g[40+i]|p[40+i]&g[i+40-1]; 
              assign  pp_level1[40+i]=p[40+i]&p[i+40-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<8 ;i=i+1 ) begin
              assign  gnpg_level1[48+i]=g[48+i]|p[48+i]&g[i+48-1]; 
              assign  pp_level1[48+i]=p[48+i]&p[i+48-1];
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<8 ;i=i+1 ) begin
              assign  gnpg_level1[56+i]=g[56+i]|p[56+i]&g[i+56-1]; 
              assign  pp_level1[56+i]=p[56+i]&p[i+56-1];
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
              assign  gnpg_level1[8+i]=g[8+i]; 
              assign  pp_level1[8+i]=p[8+i];
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
              assign  gnpg_level1[24+i]=g[24+i]; 
              assign  pp_level1[24+i]=p[24+i];
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
              assign  gnpg_level1[40+i]=g[40+i]; 
              assign  pp_level1[40+i]=p[40+i];
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
              assign  gnpg_level1[56+i]=g[56+i]; 
              assign  pp_level1[56+i]=p[56+i];
            end 
            endgenerate
 wire [63:0] gnpg_level2;
 wire [63:0] pp_level2;  
          // pre process continue last 2
           generate
            for (i = 2;i<8 ;i=i+1 ) begin
              assign  gnpg_level2[0+i]=gnpg_level1[0+i]|pp_level1[0+i]&gnpg_level1[i+0-2]; 
              assign  pp_level2[0+i]=pp_level1[0+i]&pp_level1[i+0-2];
            end
           endgenerate
          
          // pre process continue last 2
           generate
            for (i = 2;i<8 ;i=i+1 ) begin
              assign  gnpg_level2[8+i]=gnpg_level1[8+i]|pp_level1[8+i]&gnpg_level1[i+8-2]; 
              assign  pp_level2[8+i]=pp_level1[8+i]&pp_level1[i+8-2];
            end
           endgenerate
          
          // pre process continue last 2
           generate
            for (i = 2;i<8 ;i=i+1 ) begin
              assign  gnpg_level2[16+i]=gnpg_level1[16+i]|pp_level1[16+i]&gnpg_level1[i+16-2]; 
              assign  pp_level2[16+i]=pp_level1[16+i]&pp_level1[i+16-2];
            end
           endgenerate
          
          // pre process continue last 2
           generate
            for (i = 2;i<8 ;i=i+1 ) begin
              assign  gnpg_level2[24+i]=gnpg_level1[24+i]|pp_level1[24+i]&gnpg_level1[i+24-2]; 
              assign  pp_level2[24+i]=pp_level1[24+i]&pp_level1[i+24-2];
            end
           endgenerate
          
          // pre process continue last 2
           generate
            for (i = 2;i<8 ;i=i+1 ) begin
              assign  gnpg_level2[32+i]=gnpg_level1[32+i]|pp_level1[32+i]&gnpg_level1[i+32-2]; 
              assign  pp_level2[32+i]=pp_level1[32+i]&pp_level1[i+32-2];
            end
           endgenerate
          
          // pre process continue last 2
           generate
            for (i = 2;i<8 ;i=i+1 ) begin
              assign  gnpg_level2[40+i]=gnpg_level1[40+i]|pp_level1[40+i]&gnpg_level1[i+40-2]; 
              assign  pp_level2[40+i]=pp_level1[40+i]&pp_level1[i+40-2];
            end
           endgenerate
          
          // pre process continue last 2
           generate
            for (i = 2;i<8 ;i=i+1 ) begin
              assign  gnpg_level2[48+i]=gnpg_level1[48+i]|pp_level1[48+i]&gnpg_level1[i+48-2]; 
              assign  pp_level2[48+i]=pp_level1[48+i]&pp_level1[i+48-2];
            end
           endgenerate
          
          // pre process continue last 2
           generate
            for (i = 2;i<8 ;i=i+1 ) begin
              assign  gnpg_level2[56+i]=gnpg_level1[56+i]|pp_level1[56+i]&gnpg_level1[i+56-2]; 
              assign  pp_level2[56+i]=pp_level1[56+i]&pp_level1[i+56-2];
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
              assign  gnpg_level2[8+i]=gnpg_level1[8+i]; 
              assign  pp_level2[8+i]=pp_level1[8+i];
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
              assign  gnpg_level2[24+i]=gnpg_level1[24+i]; 
              assign  pp_level2[24+i]=pp_level1[24+i];
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
              assign  gnpg_level2[40+i]=gnpg_level1[40+i]; 
              assign  pp_level2[40+i]=pp_level1[40+i];
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
              assign  gnpg_level2[56+i]=gnpg_level1[56+i]; 
              assign  pp_level2[56+i]=pp_level1[56+i];
            end 
            endgenerate
 wire [63:0] gnpg_level3;
 wire [63:0] pp_level3;  
          // pre process continue last 1
           generate
            for (i = 4;i<8 ;i=i+1 ) begin
              assign  gnpg_level3[0+i]=gnpg_level2[0+i]|pp_level2[0+i]&gnpg_level2[i+0-4]; 
              assign  pp_level3[0+i]=pp_level2[0+i]&pp_level2[i+0-4];
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 4;i<8 ;i=i+1 ) begin
              assign  gnpg_level3[8+i]=gnpg_level2[8+i]|pp_level2[8+i]&gnpg_level2[i+8-4]; 
              assign  pp_level3[8+i]=pp_level2[8+i]&pp_level2[i+8-4];
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 4;i<8 ;i=i+1 ) begin
              assign  gnpg_level3[16+i]=gnpg_level2[16+i]|pp_level2[16+i]&gnpg_level2[i+16-4]; 
              assign  pp_level3[16+i]=pp_level2[16+i]&pp_level2[i+16-4];
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 4;i<8 ;i=i+1 ) begin
              assign  gnpg_level3[24+i]=gnpg_level2[24+i]|pp_level2[24+i]&gnpg_level2[i+24-4]; 
              assign  pp_level3[24+i]=pp_level2[24+i]&pp_level2[i+24-4];
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 4;i<8 ;i=i+1 ) begin
              assign  gnpg_level3[32+i]=gnpg_level2[32+i]|pp_level2[32+i]&gnpg_level2[i+32-4]; 
              assign  pp_level3[32+i]=pp_level2[32+i]&pp_level2[i+32-4];
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 4;i<8 ;i=i+1 ) begin
              assign  gnpg_level3[40+i]=gnpg_level2[40+i]|pp_level2[40+i]&gnpg_level2[i+40-4]; 
              assign  pp_level3[40+i]=pp_level2[40+i]&pp_level2[i+40-4];
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 4;i<8 ;i=i+1 ) begin
              assign  gnpg_level3[48+i]=gnpg_level2[48+i]|pp_level2[48+i]&gnpg_level2[i+48-4]; 
              assign  pp_level3[48+i]=pp_level2[48+i]&pp_level2[i+48-4];
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 4;i<8 ;i=i+1 ) begin
              assign  gnpg_level3[56+i]=gnpg_level2[56+i]|pp_level2[56+i]&gnpg_level2[i+56-4]; 
              assign  pp_level3[56+i]=pp_level2[56+i]&pp_level2[i+56-4];
            end
           endgenerate
          
            generate
            for (i = 0;i<4 ;i=i+1 ) begin
              assign  gnpg_level3[0+i]=gnpg_level2[0+i]; 
              assign  pp_level3[0+i]=pp_level2[0+i];
            end 
            endgenerate
            generate
            for (i = 0;i<4 ;i=i+1 ) begin
              assign  gnpg_level3[8+i]=gnpg_level2[8+i]; 
              assign  pp_level3[8+i]=pp_level2[8+i];
            end 
            endgenerate
            generate
            for (i = 0;i<4 ;i=i+1 ) begin
              assign  gnpg_level3[16+i]=gnpg_level2[16+i]; 
              assign  pp_level3[16+i]=pp_level2[16+i];
            end 
            endgenerate
            generate
            for (i = 0;i<4 ;i=i+1 ) begin
              assign  gnpg_level3[24+i]=gnpg_level2[24+i]; 
              assign  pp_level3[24+i]=pp_level2[24+i];
            end 
            endgenerate
            generate
            for (i = 0;i<4 ;i=i+1 ) begin
              assign  gnpg_level3[32+i]=gnpg_level2[32+i]; 
              assign  pp_level3[32+i]=pp_level2[32+i];
            end 
            endgenerate
            generate
            for (i = 0;i<4 ;i=i+1 ) begin
              assign  gnpg_level3[40+i]=gnpg_level2[40+i]; 
              assign  pp_level3[40+i]=pp_level2[40+i];
            end 
            endgenerate
            generate
            for (i = 0;i<4 ;i=i+1 ) begin
              assign  gnpg_level3[48+i]=gnpg_level2[48+i]; 
              assign  pp_level3[48+i]=pp_level2[48+i];
            end 
            endgenerate
            generate
            for (i = 0;i<4 ;i=i+1 ) begin
              assign  gnpg_level3[56+i]=gnpg_level2[56+i]; 
              assign  pp_level3[56+i]=pp_level2[56+i];
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
           for (i = 8;i<8+8 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[8+8-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[8+8-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 16;i<8+16 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[16+8-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[16+8-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 24;i<8+24 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[24+8-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[24+8-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 32;i<8+32 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[32+8-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[32+8-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 40;i<8+40 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[40+8-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[40+8-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 48;i<8+48 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[48+8-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[48+8-1-8];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 56;i<8+56 ;i=i+1) begin
              assign  gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[56+8-1-8];
              assign  pp_level4[i]=pp_level3[i]&pp_level3[56+8-1-8];
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
           for (i = 16;i<8+16 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[16+8-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[16+8-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 24;i<8+24 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[24+8-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[24+8-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 32;i<8+32 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[32+8-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[32+8-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 40;i<8+40 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[40+8-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[40+8-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 48;i<8+48 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[48+8-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[48+8-1-16];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 56;i<8+56 ;i=i+1) begin
              assign  gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[56+8-1-16];
              assign  pp_level5[i]=pp_level4[i]&pp_level4[56+8-1-16];
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
           for (i = 32;i<8+32 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[32+8-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[32+8-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 40;i<8+40 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[40+8-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[40+8-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 48;i<8+48 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[48+8-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[48+8-1-32];
           end 
         endgenerate
         
         // Multiple fanout stage
         generate
           for (i = 56;i<8+56 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[56+8-1-32];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[56+8-1-32];
           end 
         endgenerate
         
   assign cout= g[64]|p[64]&gnpg_level6[63];
   generate
    for (i = 1;i<65 ;i=i+1 ) begin
        assign  sum[i]= p[i]^gnpg_level6[i-1];    
    end
   endgenerate // 6 is deep enough , no post process
endmodule


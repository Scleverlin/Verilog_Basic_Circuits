
/* verilator lint_off UNUSEDSIGNAL */


module pg_gen_bk_sa_64 (a,b,cin,p,g);
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

module Hybrid_64_BK0_SA6 (a,b,cin,sum,cout);

input [64:1]a;
input [64:1]b;
input cin;
output [64:1]sum;
output cout;
wire [64:0]p;
wire [64:0]g;
pg_gen_bk_sa_64 pg_gen_bksa (a,b,cin,p,g);
genvar i;
//22
 wire [63:0] gnpg_level1;
 wire [63:0] pp_level1;
 //assign gnpg_level1[0]=g[0];
 //assign pp_level1[0]=p[0];
        generate
            for (i = 1;i<64 ;i=i+2 ) begin
             assign gnpg_level1[i]=g[i]|p[i]&g[i-1];  
             assign pp_level1[i]=p[i]&p[i-1];            
            end
        endgenerate
        generate
            for (i = 0;i<64 ;i=i+2 ) begin
             assign gnpg_level1[i]=g[i];  
             assign pp_level1[i]=p[i];            
            end
        endgenerate        
        
       // others
 wire [63:0] gnpg_level2;
 wire [63:0] pp_level2;  
         
           //11111
         generate
             for (i = 2;i<64 ;i=i+4) begin
             assign gnpg_level2[i+0]=gnpg_level1[i+0]|pp_level1[i+0]&gnpg_level1[i-1];  
             assign pp_level2[i+0]=pp_level1[i+0]&pp_level1[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 2;i<64 ;i=i+4) begin
             assign gnpg_level2[i+1]=gnpg_level1[i+1]|pp_level1[i+1]&gnpg_level1[i-1];  
             assign pp_level2[i+1]=pp_level1[i+1]&pp_level1[i-1];            
         end
       endgenerate
        generate
         for (i = 0*4;i<2+0*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 1*4;i<2+1*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 2*4;i<2+2*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 3*4;i<2+3*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 4*4;i<2+4*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 5*4;i<2+5*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 6*4;i<2+6*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 7*4;i<2+7*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 8*4;i<2+8*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 9*4;i<2+9*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 10*4;i<2+10*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 11*4;i<2+11*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 12*4;i<2+12*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 13*4;i<2+13*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 14*4;i<2+14*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
        generate
         for (i = 15*4;i<2+15*4 ;i=i+1) begin
           assign gnpg_level2[i]=gnpg_level1[i];  
           assign pp_level2[i]=pp_level1[i];            
         end
       endgenerate
         
       // others
 wire [63:0] gnpg_level3;
 wire [63:0] pp_level3;  
         
           //11111
         generate
             for (i = 4;i<64 ;i=i+8) begin
             assign gnpg_level3[i+0]=gnpg_level2[i+0]|pp_level2[i+0]&gnpg_level2[i-1];  
             assign pp_level3[i+0]=pp_level2[i+0]&pp_level2[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 4;i<64 ;i=i+8) begin
             assign gnpg_level3[i+1]=gnpg_level2[i+1]|pp_level2[i+1]&gnpg_level2[i-1];  
             assign pp_level3[i+1]=pp_level2[i+1]&pp_level2[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 4;i<64 ;i=i+8) begin
             assign gnpg_level3[i+2]=gnpg_level2[i+2]|pp_level2[i+2]&gnpg_level2[i-1];  
             assign pp_level3[i+2]=pp_level2[i+2]&pp_level2[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 4;i<64 ;i=i+8) begin
             assign gnpg_level3[i+3]=gnpg_level2[i+3]|pp_level2[i+3]&gnpg_level2[i-1];  
             assign pp_level3[i+3]=pp_level2[i+3]&pp_level2[i-1];            
         end
       endgenerate
        generate
         for (i = 0*8;i<4+0*8 ;i=i+1) begin
           assign gnpg_level3[i]=gnpg_level2[i];  
           assign pp_level3[i]=pp_level2[i];            
         end
       endgenerate
         
        generate
         for (i = 1*8;i<4+1*8 ;i=i+1) begin
           assign gnpg_level3[i]=gnpg_level2[i];  
           assign pp_level3[i]=pp_level2[i];            
         end
       endgenerate
         
        generate
         for (i = 2*8;i<4+2*8 ;i=i+1) begin
           assign gnpg_level3[i]=gnpg_level2[i];  
           assign pp_level3[i]=pp_level2[i];            
         end
       endgenerate
         
        generate
         for (i = 3*8;i<4+3*8 ;i=i+1) begin
           assign gnpg_level3[i]=gnpg_level2[i];  
           assign pp_level3[i]=pp_level2[i];            
         end
       endgenerate
         
        generate
         for (i = 4*8;i<4+4*8 ;i=i+1) begin
           assign gnpg_level3[i]=gnpg_level2[i];  
           assign pp_level3[i]=pp_level2[i];            
         end
       endgenerate
         
        generate
         for (i = 5*8;i<4+5*8 ;i=i+1) begin
           assign gnpg_level3[i]=gnpg_level2[i];  
           assign pp_level3[i]=pp_level2[i];            
         end
       endgenerate
         
        generate
         for (i = 6*8;i<4+6*8 ;i=i+1) begin
           assign gnpg_level3[i]=gnpg_level2[i];  
           assign pp_level3[i]=pp_level2[i];            
         end
       endgenerate
         
        generate
         for (i = 7*8;i<4+7*8 ;i=i+1) begin
           assign gnpg_level3[i]=gnpg_level2[i];  
           assign pp_level3[i]=pp_level2[i];            
         end
       endgenerate
         
       // others
 wire [63:0] gnpg_level4;
 wire [63:0] pp_level4;  
         
           //11111
         generate
             for (i = 8;i<64 ;i=i+16) begin
             assign gnpg_level4[i+0]=gnpg_level3[i+0]|pp_level3[i+0]&gnpg_level3[i-1];  
             assign pp_level4[i+0]=pp_level3[i+0]&pp_level3[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 8;i<64 ;i=i+16) begin
             assign gnpg_level4[i+1]=gnpg_level3[i+1]|pp_level3[i+1]&gnpg_level3[i-1];  
             assign pp_level4[i+1]=pp_level3[i+1]&pp_level3[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 8;i<64 ;i=i+16) begin
             assign gnpg_level4[i+2]=gnpg_level3[i+2]|pp_level3[i+2]&gnpg_level3[i-1];  
             assign pp_level4[i+2]=pp_level3[i+2]&pp_level3[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 8;i<64 ;i=i+16) begin
             assign gnpg_level4[i+3]=gnpg_level3[i+3]|pp_level3[i+3]&gnpg_level3[i-1];  
             assign pp_level4[i+3]=pp_level3[i+3]&pp_level3[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 8;i<64 ;i=i+16) begin
             assign gnpg_level4[i+4]=gnpg_level3[i+4]|pp_level3[i+4]&gnpg_level3[i-1];  
             assign pp_level4[i+4]=pp_level3[i+4]&pp_level3[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 8;i<64 ;i=i+16) begin
             assign gnpg_level4[i+5]=gnpg_level3[i+5]|pp_level3[i+5]&gnpg_level3[i-1];  
             assign pp_level4[i+5]=pp_level3[i+5]&pp_level3[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 8;i<64 ;i=i+16) begin
             assign gnpg_level4[i+6]=gnpg_level3[i+6]|pp_level3[i+6]&gnpg_level3[i-1];  
             assign pp_level4[i+6]=pp_level3[i+6]&pp_level3[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 8;i<64 ;i=i+16) begin
             assign gnpg_level4[i+7]=gnpg_level3[i+7]|pp_level3[i+7]&gnpg_level3[i-1];  
             assign pp_level4[i+7]=pp_level3[i+7]&pp_level3[i-1];            
         end
       endgenerate
        generate
         for (i = 0*16;i<8+0*16 ;i=i+1) begin
           assign gnpg_level4[i]=gnpg_level3[i];  
           assign pp_level4[i]=pp_level3[i];            
         end
       endgenerate
         
        generate
         for (i = 1*16;i<8+1*16 ;i=i+1) begin
           assign gnpg_level4[i]=gnpg_level3[i];  
           assign pp_level4[i]=pp_level3[i];            
         end
       endgenerate
         
        generate
         for (i = 2*16;i<8+2*16 ;i=i+1) begin
           assign gnpg_level4[i]=gnpg_level3[i];  
           assign pp_level4[i]=pp_level3[i];            
         end
       endgenerate
         
        generate
         for (i = 3*16;i<8+3*16 ;i=i+1) begin
           assign gnpg_level4[i]=gnpg_level3[i];  
           assign pp_level4[i]=pp_level3[i];            
         end
       endgenerate
         
       // others
 wire [63:0] gnpg_level5;
 wire [63:0] pp_level5;  
         
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+0]=gnpg_level4[i+0]|pp_level4[i+0]&gnpg_level4[i-1];  
             assign pp_level5[i+0]=pp_level4[i+0]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+1]=gnpg_level4[i+1]|pp_level4[i+1]&gnpg_level4[i-1];  
             assign pp_level5[i+1]=pp_level4[i+1]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+2]=gnpg_level4[i+2]|pp_level4[i+2]&gnpg_level4[i-1];  
             assign pp_level5[i+2]=pp_level4[i+2]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+3]=gnpg_level4[i+3]|pp_level4[i+3]&gnpg_level4[i-1];  
             assign pp_level5[i+3]=pp_level4[i+3]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+4]=gnpg_level4[i+4]|pp_level4[i+4]&gnpg_level4[i-1];  
             assign pp_level5[i+4]=pp_level4[i+4]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+5]=gnpg_level4[i+5]|pp_level4[i+5]&gnpg_level4[i-1];  
             assign pp_level5[i+5]=pp_level4[i+5]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+6]=gnpg_level4[i+6]|pp_level4[i+6]&gnpg_level4[i-1];  
             assign pp_level5[i+6]=pp_level4[i+6]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+7]=gnpg_level4[i+7]|pp_level4[i+7]&gnpg_level4[i-1];  
             assign pp_level5[i+7]=pp_level4[i+7]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+8]=gnpg_level4[i+8]|pp_level4[i+8]&gnpg_level4[i-1];  
             assign pp_level5[i+8]=pp_level4[i+8]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+9]=gnpg_level4[i+9]|pp_level4[i+9]&gnpg_level4[i-1];  
             assign pp_level5[i+9]=pp_level4[i+9]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+10]=gnpg_level4[i+10]|pp_level4[i+10]&gnpg_level4[i-1];  
             assign pp_level5[i+10]=pp_level4[i+10]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+11]=gnpg_level4[i+11]|pp_level4[i+11]&gnpg_level4[i-1];  
             assign pp_level5[i+11]=pp_level4[i+11]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+12]=gnpg_level4[i+12]|pp_level4[i+12]&gnpg_level4[i-1];  
             assign pp_level5[i+12]=pp_level4[i+12]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+13]=gnpg_level4[i+13]|pp_level4[i+13]&gnpg_level4[i-1];  
             assign pp_level5[i+13]=pp_level4[i+13]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+14]=gnpg_level4[i+14]|pp_level4[i+14]&gnpg_level4[i-1];  
             assign pp_level5[i+14]=pp_level4[i+14]&pp_level4[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 16;i<64 ;i=i+32) begin
             assign gnpg_level5[i+15]=gnpg_level4[i+15]|pp_level4[i+15]&gnpg_level4[i-1];  
             assign pp_level5[i+15]=pp_level4[i+15]&pp_level4[i-1];            
         end
       endgenerate
        generate
         for (i = 0*32;i<16+0*32 ;i=i+1) begin
           assign gnpg_level5[i]=gnpg_level4[i];  
           assign pp_level5[i]=pp_level4[i];            
         end
       endgenerate
         
        generate
         for (i = 1*32;i<16+1*32 ;i=i+1) begin
           assign gnpg_level5[i]=gnpg_level4[i];  
           assign pp_level5[i]=pp_level4[i];            
         end
       endgenerate
         
       // others
 wire [63:0] gnpg_level6;
 wire [63:0] pp_level6;  
         
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+0]=gnpg_level5[i+0]|pp_level5[i+0]&gnpg_level5[i-1];  
             assign pp_level6[i+0]=pp_level5[i+0]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+1]=gnpg_level5[i+1]|pp_level5[i+1]&gnpg_level5[i-1];  
             assign pp_level6[i+1]=pp_level5[i+1]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+2]=gnpg_level5[i+2]|pp_level5[i+2]&gnpg_level5[i-1];  
             assign pp_level6[i+2]=pp_level5[i+2]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+3]=gnpg_level5[i+3]|pp_level5[i+3]&gnpg_level5[i-1];  
             assign pp_level6[i+3]=pp_level5[i+3]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+4]=gnpg_level5[i+4]|pp_level5[i+4]&gnpg_level5[i-1];  
             assign pp_level6[i+4]=pp_level5[i+4]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+5]=gnpg_level5[i+5]|pp_level5[i+5]&gnpg_level5[i-1];  
             assign pp_level6[i+5]=pp_level5[i+5]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+6]=gnpg_level5[i+6]|pp_level5[i+6]&gnpg_level5[i-1];  
             assign pp_level6[i+6]=pp_level5[i+6]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+7]=gnpg_level5[i+7]|pp_level5[i+7]&gnpg_level5[i-1];  
             assign pp_level6[i+7]=pp_level5[i+7]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+8]=gnpg_level5[i+8]|pp_level5[i+8]&gnpg_level5[i-1];  
             assign pp_level6[i+8]=pp_level5[i+8]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+9]=gnpg_level5[i+9]|pp_level5[i+9]&gnpg_level5[i-1];  
             assign pp_level6[i+9]=pp_level5[i+9]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+10]=gnpg_level5[i+10]|pp_level5[i+10]&gnpg_level5[i-1];  
             assign pp_level6[i+10]=pp_level5[i+10]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+11]=gnpg_level5[i+11]|pp_level5[i+11]&gnpg_level5[i-1];  
             assign pp_level6[i+11]=pp_level5[i+11]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+12]=gnpg_level5[i+12]|pp_level5[i+12]&gnpg_level5[i-1];  
             assign pp_level6[i+12]=pp_level5[i+12]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+13]=gnpg_level5[i+13]|pp_level5[i+13]&gnpg_level5[i-1];  
             assign pp_level6[i+13]=pp_level5[i+13]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+14]=gnpg_level5[i+14]|pp_level5[i+14]&gnpg_level5[i-1];  
             assign pp_level6[i+14]=pp_level5[i+14]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+15]=gnpg_level5[i+15]|pp_level5[i+15]&gnpg_level5[i-1];  
             assign pp_level6[i+15]=pp_level5[i+15]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+16]=gnpg_level5[i+16]|pp_level5[i+16]&gnpg_level5[i-1];  
             assign pp_level6[i+16]=pp_level5[i+16]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+17]=gnpg_level5[i+17]|pp_level5[i+17]&gnpg_level5[i-1];  
             assign pp_level6[i+17]=pp_level5[i+17]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+18]=gnpg_level5[i+18]|pp_level5[i+18]&gnpg_level5[i-1];  
             assign pp_level6[i+18]=pp_level5[i+18]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+19]=gnpg_level5[i+19]|pp_level5[i+19]&gnpg_level5[i-1];  
             assign pp_level6[i+19]=pp_level5[i+19]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+20]=gnpg_level5[i+20]|pp_level5[i+20]&gnpg_level5[i-1];  
             assign pp_level6[i+20]=pp_level5[i+20]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+21]=gnpg_level5[i+21]|pp_level5[i+21]&gnpg_level5[i-1];  
             assign pp_level6[i+21]=pp_level5[i+21]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+22]=gnpg_level5[i+22]|pp_level5[i+22]&gnpg_level5[i-1];  
             assign pp_level6[i+22]=pp_level5[i+22]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+23]=gnpg_level5[i+23]|pp_level5[i+23]&gnpg_level5[i-1];  
             assign pp_level6[i+23]=pp_level5[i+23]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+24]=gnpg_level5[i+24]|pp_level5[i+24]&gnpg_level5[i-1];  
             assign pp_level6[i+24]=pp_level5[i+24]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+25]=gnpg_level5[i+25]|pp_level5[i+25]&gnpg_level5[i-1];  
             assign pp_level6[i+25]=pp_level5[i+25]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+26]=gnpg_level5[i+26]|pp_level5[i+26]&gnpg_level5[i-1];  
             assign pp_level6[i+26]=pp_level5[i+26]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+27]=gnpg_level5[i+27]|pp_level5[i+27]&gnpg_level5[i-1];  
             assign pp_level6[i+27]=pp_level5[i+27]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+28]=gnpg_level5[i+28]|pp_level5[i+28]&gnpg_level5[i-1];  
             assign pp_level6[i+28]=pp_level5[i+28]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+29]=gnpg_level5[i+29]|pp_level5[i+29]&gnpg_level5[i-1];  
             assign pp_level6[i+29]=pp_level5[i+29]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+30]=gnpg_level5[i+30]|pp_level5[i+30]&gnpg_level5[i-1];  
             assign pp_level6[i+30]=pp_level5[i+30]&pp_level5[i-1];            
         end
       endgenerate
           //11111
         generate
             for (i = 32;i<64 ;i=i+64) begin
             assign gnpg_level6[i+31]=gnpg_level5[i+31]|pp_level5[i+31]&gnpg_level5[i-1];  
             assign pp_level6[i+31]=pp_level5[i+31]&pp_level5[i-1];            
         end
       endgenerate
        generate
         for (i = 0*64;i<32+0*64 ;i=i+1) begin
           assign gnpg_level6[i]=gnpg_level5[i];  
           assign pp_level6[i]=pp_level5[i];            
         end
       endgenerate
         
   assign cout= g[64]|p[64]&gnpg_level6[63];
   generate
    for (i = 1;i<65 ;i=i+1 ) begin
        assign  sum[i]= p[i]^gnpg_level6[i-1];    
    end
   endgenerate // 6 is deep enough , no post process
endmodule


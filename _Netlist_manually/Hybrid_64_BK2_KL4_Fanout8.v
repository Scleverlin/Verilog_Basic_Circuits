
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

module Hybrid_64_BK2_KL4_Fanout8 (a,b,cin,sum,cout);

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
wire [63:0] gnpg_level2;
wire [63:0] pp_level2;
wire [63:0] gnpg_level3;
wire [63:0] pp_level3;
wire [63:0] gnpg_level4;
wire [63:0] pp_level4;
wire [63:0] gnpg_level5;
wire [63:0] pp_level5;
wire [63:0] gnpg_level6;
wire [63:0] pp_level6;
             generate
               for (i = 1;i<64 ;i=i+2 ) begin
                assign gnpg_level1[i]=g[i]|p[i]&g[i-1];  
                assign pp_level1[i]=p[i]&p[i-1];     
               end
            endgenerate
             generate
                for (i = 0;i<64 ;i=i+2) begin
                 assign gnpg_level1[i]=g[i];  
                 assign pp_level1[i]=p[i];     
               end
            endgenerate
             generate
              for (i = 4-1 ;i<64;i=i+4) begin
                assign gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[i-2];  
                assign pp_level2[i]=pp_level1[i]&pp_level1[i-2];            
              end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*0+i]=gnpg_level1[ 4*0+i];
                assign pp_level2[ 4*0+i]=pp_level1[ 4*0+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*1+i]=gnpg_level1[ 4*1+i];
                assign pp_level2[ 4*1+i]=pp_level1[ 4*1+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*2+i]=gnpg_level1[ 4*2+i];
                assign pp_level2[ 4*2+i]=pp_level1[ 4*2+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*3+i]=gnpg_level1[ 4*3+i];
                assign pp_level2[ 4*3+i]=pp_level1[ 4*3+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*4+i]=gnpg_level1[ 4*4+i];
                assign pp_level2[ 4*4+i]=pp_level1[ 4*4+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*5+i]=gnpg_level1[ 4*5+i];
                assign pp_level2[ 4*5+i]=pp_level1[ 4*5+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*6+i]=gnpg_level1[ 4*6+i];
                assign pp_level2[ 4*6+i]=pp_level1[ 4*6+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*7+i]=gnpg_level1[ 4*7+i];
                assign pp_level2[ 4*7+i]=pp_level1[ 4*7+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*8+i]=gnpg_level1[ 4*8+i];
                assign pp_level2[ 4*8+i]=pp_level1[ 4*8+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*9+i]=gnpg_level1[ 4*9+i];
                assign pp_level2[ 4*9+i]=pp_level1[ 4*9+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*10+i]=gnpg_level1[ 4*10+i];
                assign pp_level2[ 4*10+i]=pp_level1[ 4*10+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*11+i]=gnpg_level1[ 4*11+i];
                assign pp_level2[ 4*11+i]=pp_level1[ 4*11+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*12+i]=gnpg_level1[ 4*12+i];
                assign pp_level2[ 4*12+i]=pp_level1[ 4*12+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*13+i]=gnpg_level1[ 4*13+i];
                assign pp_level2[ 4*13+i]=pp_level1[ 4*13+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*14+i]=gnpg_level1[ 4*14+i];
                assign pp_level2[ 4*14+i]=pp_level1[ 4*14+i];
               end
            endgenerate generate
              for (i = 0;i<4-1 ;i=i+1) begin
                assign gnpg_level2[ 4*15+i]=gnpg_level1[ 4*15+i];
                assign pp_level2[ 4*15+i]=pp_level1[ 4*15+i];
               end
            endgenerate 
          // pre process continue last 3
           generate
            for (i = 4;i<4*8 ;i=i+4) begin
              assign  gnpg_level3[3+i]=gnpg_level2[3+i]|pp_level2[3+i]&gnpg_level2[i+3-4]; 
              assign  pp_level3[3+i]=pp_level2[3+i]&pp_level2[i+3-4];
            end
           endgenerate
          
          // pre process continue last 3
           generate
            for (i = 4;i<4*8 ;i=i+4) begin
              assign  gnpg_level3[35+i]=gnpg_level2[35+i]|pp_level2[35+i]&gnpg_level2[i+35-4]; 
              assign  pp_level3[35+i]=pp_level2[35+i]&pp_level2[i+35-4];
            end
           endgenerate
          
         // strange part
            generate
            for (i = 0;i<4 ;i=i+4 ) begin
              assign  gnpg_level3[35+i]=gnpg_level2[35+i]; 
              assign  pp_level3[35+i]=pp_level2[35+i];
            end 
            endgenerate
          // before start point
            generate
            for (i = 0;i<7 ;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 7+1;i<7+4;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 11+1;i<11+4;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 15+1;i<15+4;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 19+1;i<19+4;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 23+1;i<23+4;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 27+1;i<27+4;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 31+1;i<31+4;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 35+1;i<35+4;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 39+1;i<39+4;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 43+1;i<43+4;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 47+1;i<47+4;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 51+1;i<51+4;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 55+1;i<55+4;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 59+1;i<59+4;i=i+1 ) begin
              assign  gnpg_level3[i]=gnpg_level2[i]; 
              assign  pp_level3[i]=pp_level2[i];
            end 
            endgenerate  
          
          // pre process continue last 2
           generate
            for (i = 8;i<4*8 ;i=i+4) begin
              assign  gnpg_level4[3+i]=gnpg_level3[3+i]|pp_level3[3+i]&gnpg_level3[i+3-8]; 
              assign  pp_level4[3+i]=pp_level3[3+i]&pp_level3[i+3-8];
            end
           endgenerate
          
          // pre process continue last 2
           generate
            for (i = 8;i<4*8 ;i=i+4) begin
              assign  gnpg_level4[35+i]=gnpg_level3[35+i]|pp_level3[35+i]&gnpg_level3[i+35-8]; 
              assign  pp_level4[35+i]=pp_level3[35+i]&pp_level3[i+35-8];
            end
           endgenerate
          
         // strange part
            generate
            for (i = 0;i<8 ;i=i+4 ) begin
              assign  gnpg_level4[35+i]=gnpg_level3[35+i]; 
              assign  pp_level4[35+i]=pp_level3[35+i];
            end 
            endgenerate
          // before start point
            generate
            for (i = 0;i<11 ;i=i+1 ) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 11+1;i<11+4;i=i+1 ) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 15+1;i<15+4;i=i+1 ) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 19+1;i<19+4;i=i+1 ) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 23+1;i<23+4;i=i+1 ) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 27+1;i<27+4;i=i+1 ) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 31+1;i<31+4;i=i+1 ) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 35+1;i<35+4;i=i+1 ) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 39+1;i<39+4;i=i+1 ) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 43+1;i<43+4;i=i+1 ) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 47+1;i<47+4;i=i+1 ) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 51+1;i<51+4;i=i+1 ) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 55+1;i<55+4;i=i+1 ) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 59+1;i<59+4;i=i+1 ) begin
              assign  gnpg_level4[i]=gnpg_level3[i]; 
              assign  pp_level4[i]=pp_level3[i];
            end 
            endgenerate  
          
          // pre process continue last 1
           generate
            for (i = 16;i<4*8 ;i=i+4) begin
              assign  gnpg_level5[3+i]=gnpg_level4[3+i]|pp_level4[3+i]&gnpg_level4[i+3-16]; 
              assign  pp_level5[3+i]=pp_level4[3+i]&pp_level4[i+3-16];
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 16;i<4*8 ;i=i+4) begin
              assign  gnpg_level5[35+i]=gnpg_level4[35+i]|pp_level4[35+i]&gnpg_level4[i+35-16]; 
              assign  pp_level5[35+i]=pp_level4[35+i]&pp_level4[i+35-16];
            end
           endgenerate
          
         // strange part
            generate
            for (i = 0;i<16 ;i=i+4 ) begin
              assign  gnpg_level5[35+i]=gnpg_level4[35+i]; 
              assign  pp_level5[35+i]=pp_level4[35+i];
            end 
            endgenerate
          // before start point
            generate
            for (i = 0;i<19 ;i=i+1 ) begin
              assign  gnpg_level5[i]=gnpg_level4[i]; 
              assign  pp_level5[i]=pp_level4[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 19+1;i<19+4;i=i+1 ) begin
              assign  gnpg_level5[i]=gnpg_level4[i]; 
              assign  pp_level5[i]=pp_level4[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 23+1;i<23+4;i=i+1 ) begin
              assign  gnpg_level5[i]=gnpg_level4[i]; 
              assign  pp_level5[i]=pp_level4[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 27+1;i<27+4;i=i+1 ) begin
              assign  gnpg_level5[i]=gnpg_level4[i]; 
              assign  pp_level5[i]=pp_level4[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 31+1;i<31+4;i=i+1 ) begin
              assign  gnpg_level5[i]=gnpg_level4[i]; 
              assign  pp_level5[i]=pp_level4[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 35+1;i<35+4;i=i+1 ) begin
              assign  gnpg_level5[i]=gnpg_level4[i]; 
              assign  pp_level5[i]=pp_level4[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 39+1;i<39+4;i=i+1 ) begin
              assign  gnpg_level5[i]=gnpg_level4[i]; 
              assign  pp_level5[i]=pp_level4[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 43+1;i<43+4;i=i+1 ) begin
              assign  gnpg_level5[i]=gnpg_level4[i]; 
              assign  pp_level5[i]=pp_level4[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 47+1;i<47+4;i=i+1 ) begin
              assign  gnpg_level5[i]=gnpg_level4[i]; 
              assign  pp_level5[i]=pp_level4[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 51+1;i<51+4;i=i+1 ) begin
              assign  gnpg_level5[i]=gnpg_level4[i]; 
              assign  pp_level5[i]=pp_level4[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 55+1;i<55+4;i=i+1 ) begin
              assign  gnpg_level5[i]=gnpg_level4[i]; 
              assign  pp_level5[i]=pp_level4[i];
            end 
            endgenerate  
          
          // space between point and next point
            generate
            for (i = 59+1;i<59+4;i=i+1 ) begin
              assign  gnpg_level5[i]=gnpg_level4[i]; 
              assign  pp_level5[i]=pp_level4[i];
            end 
            endgenerate  
          
          // old pass
         generate
          for (i = 0;i<35 ;i=i+1) begin
              assign  gnpg_level6[i]=gnpg_level5[i]; 
              assign  pp_level6[i]=pp_level5[i];
          end 
         endgenerate
         // Multiple fanout stage
         generate
           for (i = 35;i<4*8+35 ;i=i+4) begin
              assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[35+4*8-4-4*8];
              assign  pp_level6[i]=pp_level5[i]&pp_level5[35+4*8-4-4*8];
           end 
         endgenerate
         
            generate
            for (i = 35+1;i<35+4;i=i+1 ) begin
              assign  gnpg_level6[i]=gnpg_level5[i]; 
              assign  pp_level6[i]=pp_level5[i];
            end 
            endgenerate  
          
            generate
            for (i = 39+1;i<39+4;i=i+1 ) begin
              assign  gnpg_level6[i]=gnpg_level5[i]; 
              assign  pp_level6[i]=pp_level5[i];
            end 
            endgenerate  
          
            generate
            for (i = 43+1;i<43+4;i=i+1 ) begin
              assign  gnpg_level6[i]=gnpg_level5[i]; 
              assign  pp_level6[i]=pp_level5[i];
            end 
            endgenerate  
          
            generate
            for (i = 47+1;i<47+4;i=i+1 ) begin
              assign  gnpg_level6[i]=gnpg_level5[i]; 
              assign  pp_level6[i]=pp_level5[i];
            end 
            endgenerate  
          
            generate
            for (i = 51+1;i<51+4;i=i+1 ) begin
              assign  gnpg_level6[i]=gnpg_level5[i]; 
              assign  pp_level6[i]=pp_level5[i];
            end 
            endgenerate  
          
            generate
            for (i = 55+1;i<55+4;i=i+1 ) begin
              assign  gnpg_level6[i]=gnpg_level5[i]; 
              assign  pp_level6[i]=pp_level5[i];
            end 
            endgenerate  
          
            generate
            for (i = 59+1;i<59+4;i=i+1 ) begin
              assign  gnpg_level6[i]=gnpg_level5[i]; 
              assign  pp_level6[i]=pp_level5[i];
            end 
            endgenerate  
          
    wire [63:0] gnpg_level8;  
    
    wire [30-1:0] gnpg_level7;   
    wire [30-1:0] pp_level7; 
    
assign sum[64:1]=p[64:1]^gnpg_level8[64-1:0];
assign cout =g[64]|p[64]&gnpg_level8[64-1];
assign gnpg_level8[0]=gnpg_level6[0];
assign gnpg_level8[1]=gnpg_level6[1];
assign gnpg_level8[2]=gnpg_level6[2]|pp_level6[2]&gnpg_level6[1];
assign gnpg_level8[63]=gnpg_level6[63];
generate 
   for (i = 1;i<(64-2)/2 ;i=i+1 ) begin
      assign gnpg_level8[2*i+1]=gnpg_level7[i-1];
   end
endgenerate
generate 
   for (i = 2;i<64/2 ;i=i+1 ) begin
      assign gnpg_level8[2*i]=gnpg_level6[2*i]|pp_level6[2*i]&gnpg_level7[i-2];
   end
endgenerate

//1111
assign gnpg_level7[0]=gnpg_level6[3];
assign gnpg_level7[1]=gnpg_level6[2+3]|pp_level6[2+3]&gnpg_level6[2+3-2];
generate 
//1111
   for (i = 3;i<30;i=i+2 ) begin
      assign gnpg_level7[i]=gnpg_level6[2*i+3]|pp_level6[2*i+3]&gnpg_level6[2*i+3-2];
   end
endgenerate
generate 
//1111
   for (i = 2;i<30 ;i=i+2 ) begin
      assign gnpg_level7[i]=gnpg_level6[2*i+3];
   end
endgenerate

endmodule


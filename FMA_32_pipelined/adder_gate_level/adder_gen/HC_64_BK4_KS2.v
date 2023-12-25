
/* verilator lint_off UNUSEDSIGNAL 
module HC_64_BK4_KS2_top (a,b,cin,sum,cout,clk,rst);
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
HC_64_BK4_KS2 u0 (a,b,cin_r,sum_w,cout_w);
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

module P_G_gen_hc_64 (a,b,cin,p,g);
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

module HC_64_BK4_KS2 (a,b,cin,sum,cout);

input [64:1]a;
input [64:1]b;
input cin;
output [64:1]sum;
output cout;
wire [64:0]p;
wire [64:0]g;
P_G_gen_hc_64 pg_gen_hc (a,b,cin,p,g);
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
               for (i = 1;i<64 ;i=i+2 ) begin:gen_ks_1_1
              //  assign gnpg_level1[i]=g[i]|p[i]&g[i-1];  
                  AO21 a3 (p[i],g[i-1],g[i],gnpg_level1[i]);
                // assign pp_level1[i]=p[i]&p[i-1];     
                  AND2_X1 and3 (p[i],p[i-1],pp_level1[i]);
               end
            endgenerate
             generate
                for (i = 0;i<64 ;i=i+2) begin
                 assign gnpg_level1[i]=g[i];  
                 assign pp_level1[i]=p[i];     
               end
            endgenerate
             generate
              for (i = 4-1 ;i<64;i=i+4) begin:gen_ks_2_2
                // assign gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[i-2]; 
                AO21 a4 (pp_level1[i],gnpg_level1[i-2],gnpg_level1[i],gnpg_level2[i]); 
               // assign pp_level2[i]=pp_level1[i]&pp_level1[i-2];     
                  AND2_X1 and4 (pp_level1[i],pp_level1[i-2],pp_level2[i]);        
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
             generate
              for (i = 8-1 ;i<64;i=i+8) begin:gen_ks_2_3
                // assign gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[i-4]; 
                AO21 a4 (pp_level2[i],gnpg_level2[i-4],gnpg_level2[i],gnpg_level3[i]); 
               // assign pp_level3[i]=pp_level2[i]&pp_level2[i-4];     
                  AND2_X1 and4 (pp_level2[i],pp_level2[i-4],pp_level3[i]);        
              end
            endgenerate generate
              for (i = 0;i<8-1 ;i=i+1) begin
                assign gnpg_level3[ 8*0+i]=gnpg_level2[ 8*0+i];
                assign pp_level3[ 8*0+i]=pp_level2[ 8*0+i];
               end
            endgenerate generate
              for (i = 0;i<8-1 ;i=i+1) begin
                assign gnpg_level3[ 8*1+i]=gnpg_level2[ 8*1+i];
                assign pp_level3[ 8*1+i]=pp_level2[ 8*1+i];
               end
            endgenerate generate
              for (i = 0;i<8-1 ;i=i+1) begin
                assign gnpg_level3[ 8*2+i]=gnpg_level2[ 8*2+i];
                assign pp_level3[ 8*2+i]=pp_level2[ 8*2+i];
               end
            endgenerate generate
              for (i = 0;i<8-1 ;i=i+1) begin
                assign gnpg_level3[ 8*3+i]=gnpg_level2[ 8*3+i];
                assign pp_level3[ 8*3+i]=pp_level2[ 8*3+i];
               end
            endgenerate generate
              for (i = 0;i<8-1 ;i=i+1) begin
                assign gnpg_level3[ 8*4+i]=gnpg_level2[ 8*4+i];
                assign pp_level3[ 8*4+i]=pp_level2[ 8*4+i];
               end
            endgenerate generate
              for (i = 0;i<8-1 ;i=i+1) begin
                assign gnpg_level3[ 8*5+i]=gnpg_level2[ 8*5+i];
                assign pp_level3[ 8*5+i]=pp_level2[ 8*5+i];
               end
            endgenerate generate
              for (i = 0;i<8-1 ;i=i+1) begin
                assign gnpg_level3[ 8*6+i]=gnpg_level2[ 8*6+i];
                assign pp_level3[ 8*6+i]=pp_level2[ 8*6+i];
               end
            endgenerate generate
              for (i = 0;i<8-1 ;i=i+1) begin
                assign gnpg_level3[ 8*7+i]=gnpg_level2[ 8*7+i];
                assign pp_level3[ 8*7+i]=pp_level2[ 8*7+i];
               end
            endgenerate 
             generate
              for (i = 16-1 ;i<64;i=i+16) begin:gen_ks_2_4
                // assign gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[i-8]; 
                AO21 a4 (pp_level3[i],gnpg_level3[i-8],gnpg_level3[i],gnpg_level4[i]); 
               // assign pp_level4[i]=pp_level3[i]&pp_level3[i-8];     
                  AND2_X1 and4 (pp_level3[i],pp_level3[i-8],pp_level4[i]);        
              end
            endgenerate generate
              for (i = 0;i<16-1 ;i=i+1) begin
                assign gnpg_level4[ 16*0+i]=gnpg_level3[ 16*0+i];
                assign pp_level4[ 16*0+i]=pp_level3[ 16*0+i];
               end
            endgenerate generate
              for (i = 0;i<16-1 ;i=i+1) begin
                assign gnpg_level4[ 16*1+i]=gnpg_level3[ 16*1+i];
                assign pp_level4[ 16*1+i]=pp_level3[ 16*1+i];
               end
            endgenerate generate
              for (i = 0;i<16-1 ;i=i+1) begin
                assign gnpg_level4[ 16*2+i]=gnpg_level3[ 16*2+i];
                assign pp_level4[ 16*2+i]=pp_level3[ 16*2+i];
               end
            endgenerate generate
              for (i = 0;i<16-1 ;i=i+1) begin
                assign gnpg_level4[ 16*3+i]=gnpg_level3[ 16*3+i];
                assign pp_level4[ 16*3+i]=pp_level3[ 16*3+i];
               end
            endgenerate 
            //KS 
            generate
              for (i = 0;i<(64-31) ;i=i+16) begin:gen_ks_4_1
               // assign gnpg_level5[31+i]=gnpg_level4[31+i]|pp_level4[31+i]&gnpg_level4[31+i-1*16];
               AO21 a5 (pp_level4[31+i],gnpg_level4[31+i-1*16],gnpg_level4[31+i],gnpg_level5[31+i]);
              //  assign pp_level5[31+i]=pp_level4[31+i]&pp_level4[31+i-1*16];
               AND2_X1 and5 (pp_level4[31+i],pp_level4[31+i-1*16],pp_level5[31+i]);
               end
            endgenerate
            generate
              for (i = 0;i<31;i=i+1) begin
                assign gnpg_level5[i]=gnpg_level4[i];
                assign pp_level5[i]=pp_level4[i];
               end
            endgenerate
            
        generate
            for (i = 31+1;i<47;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 47+1;i<63;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
            //KS 
            generate
              for (i = 0;i<(64-47) ;i=i+16) begin:gen_ks_4_2
               // assign gnpg_level6[47+i]=gnpg_level5[47+i]|pp_level5[47+i]&gnpg_level5[47+i-2*16];
               AO21 a5 (pp_level5[47+i],gnpg_level5[47+i-2*16],gnpg_level5[47+i],gnpg_level6[47+i]);
              //  assign pp_level6[47+i]=pp_level5[47+i]&pp_level5[47+i-2*16];
               AND2_X1 and5 (pp_level5[47+i],pp_level5[47+i-2*16],pp_level6[47+i]);
               end
            endgenerate
            generate
              for (i = 0;i<47;i=i+1) begin
                assign gnpg_level6[i]=gnpg_level5[i];
                assign pp_level6[i]=pp_level5[i];
               end
            endgenerate
            
        generate
            for (i = 47+1;i<63;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
    wire [63:0] gnpg_level10;  
    
    wire [30-1:0] gnpg_level9;   
    wire [30-1:0] pp_level9; 
    
    wire [14-1:0] gnpg_level8;   
    wire [14-1:0] pp_level8; 
    
    wire [6-1:0] gnpg_level7;   
    wire [6-1:0] pp_level7; 
    
assign sum[64:1]=p[64:1]^gnpg_level10[64-1:0];
assign cout =g[64]|p[64]&gnpg_level10[64-1];
assign gnpg_level10[0]=gnpg_level6[0];
assign gnpg_level10[1]=gnpg_level6[1];
// assign gnpg_level10[2]=gnpg_level6[2]|pp_level6[2]&gnpg_level6[1];
AO21 a9 (pp_level6[2],gnpg_level6[1],gnpg_level6[2],gnpg_level10[2]);
assign gnpg_level10[63]=gnpg_level6[63];
generate 
   for (i = 1;i<(64-2)/2 ;i=i+1 ) begin
      assign gnpg_level10[2*i+1]=gnpg_level9[i-1];
   end
endgenerate
generate 
   for (i = 2;i<64/2 ;i=i+1 ) begin:gen_post_2
      //assign gnpg_level10[2*i]=gnpg_level6[2*i]|pp_level6[2*i]&gnpg_level9[i-2];
      AO21 a10 (pp_level6[2*i],gnpg_level9[i-2],gnpg_level6[2*i],gnpg_level10[2*i]);
   end
endgenerate


assign gnpg_level9[0]=gnpg_level6[3];
// assign gnpg_level9[1]=gnpg_level6[2+3]|pp_level6[2+3]&gnpg_level6[2+3-2];
AO21 a11_3 (pp_level6[2+3],gnpg_level6[2+3-2],gnpg_level6[2+3],gnpg_level9[1]);
generate 

   for (i = 3;i<30;i=i+2 ) begin:gen_post_33
      // assign gnpg_level9[i]=gnpg_level6[2*i+3]|pp_level6[2*i+3]&gnpg_level8[(i-3)/2];
      AO21 a12 (pp_level6[2*i+3],gnpg_level8[(i-3)/2],gnpg_level6[2*i+3],gnpg_level9[i]);
   end
endgenerate
generate 

   for (i = 2;i<30 ;i=i+2 ) begin
      assign gnpg_level9[i]=gnpg_level8[i/2-1];
   end
endgenerate



assign gnpg_level8[0]=gnpg_level6[7];
// assign gnpg_level8[1]=gnpg_level6[4+7]|pp_level6[4+7]&gnpg_level6[4+7-4];
AO21 a11_2 (pp_level6[4+7],gnpg_level6[4+7-4],gnpg_level6[4+7],gnpg_level8[1]);
generate 

   for (i = 3;i<14;i=i+2 ) begin:gen_post_32
      // assign gnpg_level8[i]=gnpg_level6[4*i+7]|pp_level6[4*i+7]&gnpg_level7[(i-3)/2];
      AO21 a12 (pp_level6[4*i+7],gnpg_level7[(i-3)/2],gnpg_level6[4*i+7],gnpg_level8[i]);
   end
endgenerate
generate 

   for (i = 2;i<14 ;i=i+2 ) begin
      assign gnpg_level8[i]=gnpg_level7[i/2-1];
   end
endgenerate


//1111
assign gnpg_level7[0]=gnpg_level6[15];
// assign gnpg_level7[1]=gnpg_level6[8+15]|pp_level6[8+15]&gnpg_level6[8+15-8];
AO21 a13_1 (pp_level6[8+15],gnpg_level6[8+15-8],gnpg_level6[8+15],gnpg_level7[1]);
generate 
//1111
   for (i = 3;i<6;i=i+2 ) begin:gen_post_41
     // assign gnpg_level7[i]=gnpg_level6[8*i+15]|pp_level6[8*i+15]&gnpg_level6[8*i+15-8];
     AO21 a141 (pp_level6[8*i+15],gnpg_level6[8*i+15-8],gnpg_level6[8*i+15],gnpg_level7[i]);
   end
endgenerate
generate 
//1111
   for (i = 2;i<6 ;i=i+2 ) begin
      assign gnpg_level7[i]=gnpg_level6[8*i+15];
   end
endgenerate

endmodule
module AO21 ( a, b, d, y_bar );
  input a, b, d;
    // wire y;
  output   y_bar;

    // AOI21_X2 aoi21_1 ( .A1(a), .A2(b), .B(d), .ZN(y) );
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

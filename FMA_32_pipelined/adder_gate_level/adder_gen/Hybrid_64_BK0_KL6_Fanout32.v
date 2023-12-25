
/* verilator lint_off UNUSEDSIGNAL
module Hybrid_64_BK0_KL6_Fanout32_top (a,b,cin,sum,cout,clk,rst);
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
Hybrid_64_BK0_KL6_Fanout32 u0 (a,b,cin_r,sum_w,cout_w);
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

module Hybrid_64_BK0_KL6_Fanout32 (a,b,cin,sum,cout);

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
            for (i = 1;i<32 ;i=i+1 ) begin:genblock10
            //   assign  gnpg_level1[0+i]=g[0+i]|p[0+i]&g[i+0-1]; 
            AO21 a1 (p[0+i],g[i+0-1],g[0+i],gnpg_level1[0+i]);
            //   assign  pp_level1[0+i]=p[0+i]&p[i+0-1];
            AND2_X1 and1 (p[0+i],p[i+0-1],pp_level1[0+i]);
            end
           endgenerate

          
          // pre process
           generate
            for (i = 1;i<32 ;i=i+1 ) begin:genblock132
            //   assign  gnpg_level1[32+i]=g[32+i]|p[32+i]&g[i+32-1]; 
            AO21 a1 (p[32+i],g[i+32-1],g[32+i],gnpg_level1[32+i]);
            //   assign  pp_level1[32+i]=p[32+i]&p[i+32-1];
            AND2_X1 and1 (p[32+i],p[i+32-1],pp_level1[32+i]);
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
              assign  gnpg_level1[32+i]=g[32+i]; 
              assign  pp_level1[32+i]=p[32+i];
            end 
            endgenerate
 wire [63:0] gnpg_level2;
 wire [63:0] pp_level2;  
          // pre process continue last 4
           generate
            for (i = 2;i<32 ;i=i+1 ) begin:gen_kl_block20
   //         assign  gnpg_level2[0+i]=gnpg_level1[0+i]|pp_level1[0+i]&gnpg_level1[i+0-2]; 
            AO21 a2 (pp_level1[0+i],gnpg_level1[i+0-2],gnpg_level1[0+i],gnpg_level2[0+i]);
            //  assign  pp_level2[0+i]=pp_level1[0+i]&pp_level1[i+0-2];
            AND2_X1 and2 (pp_level1[0+i],pp_level1[i+0-2],pp_level2[0+i]);
            end
           endgenerate
          
          // pre process continue last 4
           generate
            for (i = 2;i<32 ;i=i+1 ) begin:gen_kl_block232
   //         assign  gnpg_level2[32+i]=gnpg_level1[32+i]|pp_level1[32+i]&gnpg_level1[i+32-2]; 
            AO21 a2 (pp_level1[32+i],gnpg_level1[i+32-2],gnpg_level1[32+i],gnpg_level2[32+i]);
            //  assign  pp_level2[32+i]=pp_level1[32+i]&pp_level1[i+32-2];
            AND2_X1 and2 (pp_level1[32+i],pp_level1[i+32-2],pp_level2[32+i]);
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
              assign  gnpg_level2[32+i]=gnpg_level1[32+i]; 
              assign  pp_level2[32+i]=pp_level1[32+i];
            end 
            endgenerate
 wire [63:0] gnpg_level3;
 wire [63:0] pp_level3;  
          // pre process continue last 3
           generate
            for (i = 4;i<32 ;i=i+1 ) begin:gen_kl_block30
   //         assign  gnpg_level3[0+i]=gnpg_level2[0+i]|pp_level2[0+i]&gnpg_level2[i+0-4]; 
            AO21 a2 (pp_level2[0+i],gnpg_level2[i+0-4],gnpg_level2[0+i],gnpg_level3[0+i]);
            //  assign  pp_level3[0+i]=pp_level2[0+i]&pp_level2[i+0-4];
            AND2_X1 and2 (pp_level2[0+i],pp_level2[i+0-4],pp_level3[0+i]);
            end
           endgenerate
          
          // pre process continue last 3
           generate
            for (i = 4;i<32 ;i=i+1 ) begin:gen_kl_block332
   //         assign  gnpg_level3[32+i]=gnpg_level2[32+i]|pp_level2[32+i]&gnpg_level2[i+32-4]; 
            AO21 a2 (pp_level2[32+i],gnpg_level2[i+32-4],gnpg_level2[32+i],gnpg_level3[32+i]);
            //  assign  pp_level3[32+i]=pp_level2[32+i]&pp_level2[i+32-4];
            AND2_X1 and2 (pp_level2[32+i],pp_level2[i+32-4],pp_level3[32+i]);
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
              assign  gnpg_level3[32+i]=gnpg_level2[32+i]; 
              assign  pp_level3[32+i]=pp_level2[32+i];
            end 
            endgenerate
 wire [63:0] gnpg_level4;
 wire [63:0] pp_level4;  
          // pre process continue last 2
           generate
            for (i = 8;i<32 ;i=i+1 ) begin:gen_kl_block40
   //         assign  gnpg_level4[0+i]=gnpg_level3[0+i]|pp_level3[0+i]&gnpg_level3[i+0-8]; 
            AO21 a2 (pp_level3[0+i],gnpg_level3[i+0-8],gnpg_level3[0+i],gnpg_level4[0+i]);
            //  assign  pp_level4[0+i]=pp_level3[0+i]&pp_level3[i+0-8];
            AND2_X1 and2 (pp_level3[0+i],pp_level3[i+0-8],pp_level4[0+i]);
            end
           endgenerate
          
          // pre process continue last 2
           generate
            for (i = 8;i<32 ;i=i+1 ) begin:gen_kl_block432
   //         assign  gnpg_level4[32+i]=gnpg_level3[32+i]|pp_level3[32+i]&gnpg_level3[i+32-8]; 
            AO21 a2 (pp_level3[32+i],gnpg_level3[i+32-8],gnpg_level3[32+i],gnpg_level4[32+i]);
            //  assign  pp_level4[32+i]=pp_level3[32+i]&pp_level3[i+32-8];
            AND2_X1 and2 (pp_level3[32+i],pp_level3[i+32-8],pp_level4[32+i]);
            end
           endgenerate
          
            generate
            for (i = 0;i<8 ;i=i+1 ) begin
              assign  gnpg_level4[0+i]=gnpg_level3[0+i]; 
              assign  pp_level4[0+i]=pp_level3[0+i];
            end 
            endgenerate
            generate
            for (i = 0;i<8 ;i=i+1 ) begin
              assign  gnpg_level4[32+i]=gnpg_level3[32+i]; 
              assign  pp_level4[32+i]=pp_level3[32+i];
            end 
            endgenerate
 wire [63:0] gnpg_level5;
 wire [63:0] pp_level5;  
          // pre process continue last 1
           generate
            for (i = 16;i<32 ;i=i+1 ) begin:gen_kl_block50
   //         assign  gnpg_level5[0+i]=gnpg_level4[0+i]|pp_level4[0+i]&gnpg_level4[i+0-16]; 
            AO21 a2 (pp_level4[0+i],gnpg_level4[i+0-16],gnpg_level4[0+i],gnpg_level5[0+i]);
            //  assign  pp_level5[0+i]=pp_level4[0+i]&pp_level4[i+0-16];
            AND2_X1 and2 (pp_level4[0+i],pp_level4[i+0-16],pp_level5[0+i]);
            end
           endgenerate
          
          // pre process continue last 1
           generate
            for (i = 16;i<32 ;i=i+1 ) begin:gen_kl_block532
   //         assign  gnpg_level5[32+i]=gnpg_level4[32+i]|pp_level4[32+i]&gnpg_level4[i+32-16]; 
            AO21 a2 (pp_level4[32+i],gnpg_level4[i+32-16],gnpg_level4[32+i],gnpg_level5[32+i]);
            //  assign  pp_level5[32+i]=pp_level4[32+i]&pp_level4[i+32-16];
            AND2_X1 and2 (pp_level4[32+i],pp_level4[i+32-16],pp_level5[32+i]);
            end
           endgenerate
          
            generate
            for (i = 0;i<16 ;i=i+1 ) begin
              assign  gnpg_level5[0+i]=gnpg_level4[0+i]; 
              assign  pp_level5[0+i]=pp_level4[0+i];
            end 
            endgenerate
            generate
            for (i = 0;i<16 ;i=i+1 ) begin
              assign  gnpg_level5[32+i]=gnpg_level4[32+i]; 
              assign  pp_level5[32+i]=pp_level4[32+i];
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
           for (i = 32;i<32+32 ;i=i+1) begin:gen_mul_kl_block632
             // assign  gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[32+32-1-32];
              AO21 a3 (pp_level5[i],gnpg_level5[32+32-1-32],gnpg_level5[i],gnpg_level6[i]);
            //   assign  pp_level6[i]=pp_level5[i]&pp_level5[32+32-1-32];
            AND2_X1 and3 (pp_level5[i],pp_level5[32+32-1-32],pp_level6[i]);
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

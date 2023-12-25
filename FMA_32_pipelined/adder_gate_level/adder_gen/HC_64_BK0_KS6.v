
/* verilator lint_off UNUSEDSIGNAL 
module HC_64_BK0_KS6_top (a,b,cin,sum,cout,clk,rst);
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
HC_64_BK0_KS6 u0 (a,b,cin_r,sum_w,cout_w);
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

module HC_64_BK0_KS6 (a,b,cin,sum,cout);

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
assign gnpg_level1[0]=g[0];
assign pp_level1[0]=p[0];
        generate
            for (i = 1;i<64 ;i=i+1 ) begin:gen_1
             //assign gnpg_level1[i]=g[i]|p[i]&g[i-1]; 
             AO21 a1 (p[i],g[i-1],g[i],gnpg_level1[i]); 
            //  assign pp_level1[i]=p[i]&p[i-1];    
            AND2_X1 and1 (p[i],p[i-1],pp_level1[i]);   
            end
        endgenerate
wire [63:0] gnpg_level2;
wire [63:0] pp_level2;
       generate
         for (i = 2;i<64 ;i=i+1 ) begin:gen_2
           // assign gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[i-2];  
             AO21 a22 (pp_level1[i],gnpg_level1[i-2],gnpg_level1[i],gnpg_level2[i]);
          //  assign pp_level2[i]=pp_level1[i]&pp_level1[i-2];  
             AND2_X1 and2 (pp_level1[i],pp_level1[i-2],pp_level2[i]);          
         end
       endgenerate
       generate 
         for (i=0;i<2;i=i+1) begin
            assign gnpg_level2[i]=gnpg_level1[i];
            assign pp_level2[i]=pp_level1[i];
         end
       endgenerate  
         
wire [63:0] gnpg_level3;
wire [63:0] pp_level3;
       generate
         for (i = 4;i<64 ;i=i+1 ) begin:gen_3
           // assign gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[i-4];  
             AO21 a23 (pp_level2[i],gnpg_level2[i-4],gnpg_level2[i],gnpg_level3[i]);
          //  assign pp_level3[i]=pp_level2[i]&pp_level2[i-4];  
             AND2_X1 and2 (pp_level2[i],pp_level2[i-4],pp_level3[i]);          
         end
       endgenerate
       generate 
         for (i=0;i<4;i=i+1) begin
            assign gnpg_level3[i]=gnpg_level2[i];
            assign pp_level3[i]=pp_level2[i];
         end
       endgenerate  
         
wire [63:0] gnpg_level4;
wire [63:0] pp_level4;
       generate
         for (i = 8;i<64 ;i=i+1 ) begin:gen_4
           // assign gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[i-8];  
             AO21 a24 (pp_level3[i],gnpg_level3[i-8],gnpg_level3[i],gnpg_level4[i]);
          //  assign pp_level4[i]=pp_level3[i]&pp_level3[i-8];  
             AND2_X1 and2 (pp_level3[i],pp_level3[i-8],pp_level4[i]);          
         end
       endgenerate
       generate 
         for (i=0;i<8;i=i+1) begin
            assign gnpg_level4[i]=gnpg_level3[i];
            assign pp_level4[i]=pp_level3[i];
         end
       endgenerate  
         
wire [63:0] gnpg_level5;
wire [63:0] pp_level5;
       generate
         for (i = 16;i<64 ;i=i+1 ) begin:gen_5
           // assign gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[i-16];  
             AO21 a25 (pp_level4[i],gnpg_level4[i-16],gnpg_level4[i],gnpg_level5[i]);
          //  assign pp_level5[i]=pp_level4[i]&pp_level4[i-16];  
             AND2_X1 and2 (pp_level4[i],pp_level4[i-16],pp_level5[i]);          
         end
       endgenerate
       generate 
         for (i=0;i<16;i=i+1) begin
            assign gnpg_level5[i]=gnpg_level4[i];
            assign pp_level5[i]=pp_level4[i];
         end
       endgenerate  
         
wire [63:0] gnpg_level6;
wire [63:0] pp_level6;
       generate
         for (i = 32;i<64 ;i=i+1 ) begin:gen_6
           // assign gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[i-32];  
             AO21 a26 (pp_level5[i],gnpg_level5[i-32],gnpg_level5[i],gnpg_level6[i]);
          //  assign pp_level6[i]=pp_level5[i]&pp_level5[i-32];  
             AND2_X1 and2 (pp_level5[i],pp_level5[i-32],pp_level6[i]);          
         end
       endgenerate
       generate 
         for (i=0;i<32;i=i+1) begin
            assign gnpg_level6[i]=gnpg_level5[i];
            assign pp_level6[i]=pp_level5[i];
         end
       endgenerate  
         
assign cout= g[64]|p[64]&gnpg_level6[63];
generate
   for (i = 1;i<65 ;i=i+1 ) begin
        assign  sum[i]= p[i]^gnpg_level6[i-1];    
   end
endgenerate
 //  is deep enough , no post process
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

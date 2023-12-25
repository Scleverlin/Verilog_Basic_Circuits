
/* verilator lint_off UNUSEDSIGNAL 
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
endmodule */

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
            for (i = 1;i<32 ;i=i+1 ) begin:gen_1
             //assign gnpg_level1[i]=g[i]|p[i]&g[i-1]; 
             AO21 a1 (p[i],g[i-1],g[i],gnpg_level1[i]); 
            //  assign pp_level1[i]=p[i]&p[i-1];    
            AND2_X1 and1 (p[i],p[i-1],pp_level1[i]);   
            end
        endgenerate
wire [31:0] gnpg_level2;
wire [31:0] pp_level2;
       generate
         for (i = 2;i<32 ;i=i+1 ) begin:gen_2
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
         
wire [31:0] gnpg_level3;
wire [31:0] pp_level3;
       generate
         for (i = 4;i<32 ;i=i+1 ) begin:gen_3
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
         
wire [31:0] gnpg_level4;
wire [31:0] pp_level4;
       generate
         for (i = 8;i<32 ;i=i+1 ) begin:gen_4
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
         
wire [31:0] gnpg_level5;
wire [31:0] pp_level5;
       generate
         for (i = 16;i<32 ;i=i+1 ) begin:gen_5
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
         
assign cout= g[32]|p[32]&gnpg_level5[31];
generate
   for (i = 1;i<33 ;i=i+1 ) begin
        assign  sum[i]= p[i]^gnpg_level5[i-1];    
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


/* verilator lint_off UNUSEDSIGNAL 
module HC_64_BK1_KS5_top (a,b,cin,sum,cout,clk,rst);
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
HC_64_BK1_KS5 u0 (a,b,cin_r,sum_w,cout_w);
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

module HC_64_BK1_KS5 (a,b,cin,sum,cout);

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
            //KS 
            generate
              for (i = 0;i<(64-3) ;i=i+2) begin:gen_ks_4_1
               // assign gnpg_level2[3+i]=gnpg_level1[3+i]|pp_level1[3+i]&gnpg_level1[3+i-1*2];
               AO21 a5 (pp_level1[3+i],gnpg_level1[3+i-1*2],gnpg_level1[3+i],gnpg_level2[3+i]);
              //  assign pp_level2[3+i]=pp_level1[3+i]&pp_level1[3+i-1*2];
               AND2_X1 and5 (pp_level1[3+i],pp_level1[3+i-1*2],pp_level2[3+i]);
               end
            endgenerate
            generate
              for (i = 0;i<3;i=i+1) begin
                assign gnpg_level2[i]=gnpg_level1[i];
                assign pp_level2[i]=pp_level1[i];
               end
            endgenerate
            
        generate
            for (i = 3+1;i<5;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 5+1;i<7;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 7+1;i<9;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 9+1;i<11;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 11+1;i<13;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 13+1;i<15;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 15+1;i<17;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 17+1;i<19;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 19+1;i<21;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 21+1;i<23;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 23+1;i<25;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 25+1;i<27;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 27+1;i<29;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 29+1;i<31;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 31+1;i<33;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 33+1;i<35;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 35+1;i<37;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 37+1;i<39;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 39+1;i<41;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 41+1;i<43;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 43+1;i<45;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 45+1;i<47;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 47+1;i<49;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 49+1;i<51;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 51+1;i<53;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 53+1;i<55;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 55+1;i<57;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 57+1;i<59;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 59+1;i<61;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
        generate
            for (i = 61+1;i<63;i=i+1) begin
               assign gnpg_level2[i]=gnpg_level1[i];
               assign pp_level2[i]=pp_level1[i];
            end
            endgenerate
        
            //KS 
            generate
              for (i = 0;i<(64-5) ;i=i+2) begin:gen_ks_4_2
               // assign gnpg_level3[5+i]=gnpg_level2[5+i]|pp_level2[5+i]&gnpg_level2[5+i-2*2];
               AO21 a5 (pp_level2[5+i],gnpg_level2[5+i-2*2],gnpg_level2[5+i],gnpg_level3[5+i]);
              //  assign pp_level3[5+i]=pp_level2[5+i]&pp_level2[5+i-2*2];
               AND2_X1 and5 (pp_level2[5+i],pp_level2[5+i-2*2],pp_level3[5+i]);
               end
            endgenerate
            generate
              for (i = 0;i<5;i=i+1) begin
                assign gnpg_level3[i]=gnpg_level2[i];
                assign pp_level3[i]=pp_level2[i];
               end
            endgenerate
            
        generate
            for (i = 5+1;i<7;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 7+1;i<9;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 9+1;i<11;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 11+1;i<13;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 13+1;i<15;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 15+1;i<17;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 17+1;i<19;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 19+1;i<21;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 21+1;i<23;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 23+1;i<25;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 25+1;i<27;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 27+1;i<29;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 29+1;i<31;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 31+1;i<33;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 33+1;i<35;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 35+1;i<37;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 37+1;i<39;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 39+1;i<41;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 41+1;i<43;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 43+1;i<45;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 45+1;i<47;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 47+1;i<49;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 49+1;i<51;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 51+1;i<53;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 53+1;i<55;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 55+1;i<57;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 57+1;i<59;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 59+1;i<61;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
        generate
            for (i = 61+1;i<63;i=i+1) begin
               assign gnpg_level3[i]=gnpg_level2[i];
               assign pp_level3[i]=pp_level2[i];
            end
            endgenerate
        
            //KS 
            generate
              for (i = 0;i<(64-9) ;i=i+2) begin:gen_ks_4_3
               // assign gnpg_level4[9+i]=gnpg_level3[9+i]|pp_level3[9+i]&gnpg_level3[9+i-4*2];
               AO21 a5 (pp_level3[9+i],gnpg_level3[9+i-4*2],gnpg_level3[9+i],gnpg_level4[9+i]);
              //  assign pp_level4[9+i]=pp_level3[9+i]&pp_level3[9+i-4*2];
               AND2_X1 and5 (pp_level3[9+i],pp_level3[9+i-4*2],pp_level4[9+i]);
               end
            endgenerate
            generate
              for (i = 0;i<9;i=i+1) begin
                assign gnpg_level4[i]=gnpg_level3[i];
                assign pp_level4[i]=pp_level3[i];
               end
            endgenerate
            
        generate
            for (i = 9+1;i<11;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 11+1;i<13;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 13+1;i<15;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 15+1;i<17;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 17+1;i<19;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 19+1;i<21;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 21+1;i<23;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 23+1;i<25;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 25+1;i<27;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 27+1;i<29;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 29+1;i<31;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 31+1;i<33;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 33+1;i<35;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 35+1;i<37;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 37+1;i<39;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 39+1;i<41;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 41+1;i<43;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 43+1;i<45;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 45+1;i<47;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 47+1;i<49;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 49+1;i<51;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 51+1;i<53;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 53+1;i<55;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 55+1;i<57;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 57+1;i<59;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 59+1;i<61;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
        generate
            for (i = 61+1;i<63;i=i+1) begin
               assign gnpg_level4[i]=gnpg_level3[i];
               assign pp_level4[i]=pp_level3[i];
            end
            endgenerate
        
            //KS 
            generate
              for (i = 0;i<(64-17) ;i=i+2) begin:gen_ks_4_4
               // assign gnpg_level5[17+i]=gnpg_level4[17+i]|pp_level4[17+i]&gnpg_level4[17+i-8*2];
               AO21 a5 (pp_level4[17+i],gnpg_level4[17+i-8*2],gnpg_level4[17+i],gnpg_level5[17+i]);
              //  assign pp_level5[17+i]=pp_level4[17+i]&pp_level4[17+i-8*2];
               AND2_X1 and5 (pp_level4[17+i],pp_level4[17+i-8*2],pp_level5[17+i]);
               end
            endgenerate
            generate
              for (i = 0;i<17;i=i+1) begin
                assign gnpg_level5[i]=gnpg_level4[i];
                assign pp_level5[i]=pp_level4[i];
               end
            endgenerate
            
        generate
            for (i = 17+1;i<19;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 19+1;i<21;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 21+1;i<23;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 23+1;i<25;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 25+1;i<27;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 27+1;i<29;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 29+1;i<31;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 31+1;i<33;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 33+1;i<35;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 35+1;i<37;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 37+1;i<39;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 39+1;i<41;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 41+1;i<43;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 43+1;i<45;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 45+1;i<47;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 47+1;i<49;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 49+1;i<51;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 51+1;i<53;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 53+1;i<55;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 55+1;i<57;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 57+1;i<59;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 59+1;i<61;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
        generate
            for (i = 61+1;i<63;i=i+1) begin
               assign gnpg_level5[i]=gnpg_level4[i];
               assign pp_level5[i]=pp_level4[i];
            end
            endgenerate
        
            //KS 
            generate
              for (i = 0;i<(64-33) ;i=i+2) begin:gen_ks_4_5
               // assign gnpg_level6[33+i]=gnpg_level5[33+i]|pp_level5[33+i]&gnpg_level5[33+i-16*2];
               AO21 a5 (pp_level5[33+i],gnpg_level5[33+i-16*2],gnpg_level5[33+i],gnpg_level6[33+i]);
              //  assign pp_level6[33+i]=pp_level5[33+i]&pp_level5[33+i-16*2];
               AND2_X1 and5 (pp_level5[33+i],pp_level5[33+i-16*2],pp_level6[33+i]);
               end
            endgenerate
            generate
              for (i = 0;i<33;i=i+1) begin
                assign gnpg_level6[i]=gnpg_level5[i];
                assign pp_level6[i]=pp_level5[i];
               end
            endgenerate
            
        generate
            for (i = 33+1;i<35;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
        generate
            for (i = 35+1;i<37;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
        generate
            for (i = 37+1;i<39;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
        generate
            for (i = 39+1;i<41;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
        generate
            for (i = 41+1;i<43;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
        generate
            for (i = 43+1;i<45;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
        generate
            for (i = 45+1;i<47;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
        generate
            for (i = 47+1;i<49;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
        generate
            for (i = 49+1;i<51;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
        generate
            for (i = 51+1;i<53;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
        generate
            for (i = 53+1;i<55;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
        generate
            for (i = 55+1;i<57;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
        generate
            for (i = 57+1;i<59;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
        generate
            for (i = 59+1;i<61;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
        
        generate
            for (i = 61+1;i<63;i=i+1) begin
               assign gnpg_level6[i]=gnpg_level5[i];
               assign pp_level6[i]=pp_level5[i];
            end
            endgenerate
         
wire [63:0] gnpg_level7;
assign gnpg_level7[0]=gnpg_level6[0];
assign gnpg_level7[64-1]=gnpg_level6[64-1];

generate
    for (i = 1 ;i<64/2;i=i+1) begin:gen_post_1
     // assign gnpg_level7[2*i]=gnpg_level6[2*i]|pp_level6[2*i]&gnpg_level6[2*i-1];
      AO21 a8 (pp_level6[2*i],gnpg_level6[2*i-1],gnpg_level6[2*i],gnpg_level7[2*i]);
      assign gnpg_level7[2*i-1]=gnpg_level6[2*i-1];
   end
 endgenerate   
assign sum[64:1]=p[64:1]^gnpg_level7[64-1:0];
assign cout =g[64]|p[64]&gnpg_level7[64-1];
   
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

module ACA_ks_version (
    a,b,sum,cout
);
input [15:0]a,b;
output [15:0]sum;
output cout;
wire [15:0]p,g;

p_g_gen u1 (a,b,p,g);

//level1
wire [14:0]pp;
wire [14:0]gnpg_level1;
genvar i;


generate
    for (i=0;i<15;i=i+1) begin
       assign pp[i]=p[i+1]&p[i]; 
       assign gnpg_level1[i]=g[i+1]|(p[i+1]&g[i]);
    end
endgenerate

//level2

// wire [12:0]pppp;
wire [12:0]gnpg_level2;

generate
    for (i=0;i<13;i=i+1) begin
    //    assign pppp[i]=pp[i+2]&pp[i]; // pp[0]=p0p1, pp[2]=p2p3, pppp[0]=p0p1p2p3
       assign gnpg_level2[i]= gnpg_level1[i+2]|(pp[i+2]&gnpg_level1[i]);
    end
endgenerate

//level3

// wire [10:0]complex_p;
wire [10:0]complex_gnpg;

generate
    for (i=0;i<11;i=i+1) begin
    //    assign complex_p[i]= pppp[i]&pp[i+5];
         assign complex_gnpg[i]= gnpg_level2[i]&pp[i+4] | gnpg_level1[i+4];
    end
endgenerate

endmodule //ACA_cla_version




module p_g_gen (a,b,p,g);

input  [15:0] a,b;
output [15:0] p,g;

assign p=a^b;
assign g=a&b;

endmodule //p_g_gen
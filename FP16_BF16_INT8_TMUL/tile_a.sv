module tile_a (a,clk,a_out,rst);
input logic [15:0] a [15:0];
output logic [255:0]a_out ;
input clk,rst; 


logic [15:0] reg_file_inst0;
logic [31:0] reg_file_inst1;
logic [47:0] reg_file_inst2;
logic [63:0] reg_file_inst3;
logic [79:0] reg_file_inst4;
logic [95:0] reg_file_inst5;
logic [111:0] reg_file_inst6;
logic [127:0] reg_file_inst7;
logic [143:0] reg_file_inst8;
logic [159:0] reg_file_inst9;
logic [175:0] reg_file_inst10;
logic [191:0] reg_file_inst11;
logic [207:0] reg_file_inst12;
logic [223:0] reg_file_inst13;
logic [239:0] reg_file_inst14;
logic [255:0] reg_file_inst15;


always @(posedge clk)
 begin
 if(rst)begin
    reg_file_inst0 <= 0;
    reg_file_inst1 <= 0;
    reg_file_inst2 <= 0;
    reg_file_inst3 <= 0;
    reg_file_inst4 <= 0;
    reg_file_inst5 <= 0;
    reg_file_inst6 <= 0;
    reg_file_inst7 <= 0;
    reg_file_inst8 <= 0;
    reg_file_inst9 <= 0;
    reg_file_inst10 <= 0;
    reg_file_inst11 <= 0;
    reg_file_inst12 <= 0;
    reg_file_inst13 <= 0;
    reg_file_inst14 <= 0;
    reg_file_inst15 <= 0;

 end
 else begin
    reg_file_inst0 <= a[0];
    reg_file_inst1 <= {a[1],reg_file_inst1[31:16]};
    reg_file_inst2 <= {a[2],reg_file_inst2[47:16]};
    reg_file_inst3 <= {a[3],reg_file_inst3[63:16]};
    reg_file_inst4 <= {a[4],reg_file_inst4[79:16]};
    reg_file_inst5 <= {a[5],reg_file_inst5[95:16]};
    reg_file_inst6 <= {a[6],reg_file_inst6[111:16]};
    reg_file_inst7 <= {a[7],reg_file_inst7[127:16]};
    reg_file_inst8 <= {a[8],reg_file_inst8[143:16]};
    reg_file_inst9 <= {a[9],reg_file_inst9[159:16]};
    reg_file_inst10 <= {a[10],reg_file_inst10[175:16]};
    reg_file_inst11 <= {a[11],reg_file_inst11[191:16]};
    reg_file_inst12 <= {a[12],reg_file_inst12[207:16]};
    reg_file_inst13 <= {a[13],reg_file_inst13[223:16]};
    reg_file_inst14 <= {a[14],reg_file_inst14[239:16]};
    reg_file_inst15 <= {a[15],reg_file_inst15[255:16]};
 end
 end

assign a_out[15:0]=reg_file_inst0[15:0];
assign a_out[31:16]=reg_file_inst1[15:0];
assign a_out[47:32]=reg_file_inst2[15:0];
assign a_out[63:48]=reg_file_inst3[15:0];
assign a_out[79:64]=reg_file_inst4[15:0];
assign a_out[95:80]=reg_file_inst5[15:0];
assign a_out[111:96]=reg_file_inst6[15:0];
assign a_out[127:112]=reg_file_inst7[15:0];
assign a_out[143:128]=reg_file_inst8[15:0];
assign a_out[159:144]=reg_file_inst9[15:0];
assign a_out[175:160]=reg_file_inst10[15:0];
assign a_out[191:176]=reg_file_inst11[15:0];
assign a_out[207:192]=reg_file_inst12[15:0];
assign a_out[223:208]=reg_file_inst13[15:0];
assign a_out[239:224]=reg_file_inst14[15:0];
assign a_out[255:240]=reg_file_inst15[15:0];

endmodule

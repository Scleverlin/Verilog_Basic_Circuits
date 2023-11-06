`define plus 2'b00
`define minus 2'b01     
`define reverse_minus 2'b10
`define plus_then_mius 2'b11

module mode_judge(a,b,add,sub,mode);
input logic [31:0]a;
input logic [31:0]b;
input logic add;
input logic sub;
output logic [1:0]mode;
assign mode = (add) ? {a[31], b[31]} : 
              (sub) ? {a[31], ~b[31]} : 2'b00;

endmodule

module preprocessing(a,b,add,sub,result_sign,mode,abs_a_ht_b);
input logic [31:0]a;
input logic [31:0]b;
input logic add;
input logic sub;
output logic result_sign;
output logic [1:0]mode;
mode_judge mode_judge(a,b,add,sub,mode);
output abs_a_ht_b;//abs a higher than abs b

assign abs_a_ht_b = (a[30:23]>b[30:23])?1'b1:((a[30:23]==b[30:23])&&(a[22:0]>=b[22:0]))?1'b1:1'b0;
assign result_sign = (mode == `plus) ? 1'b0 :
                     ((mode == `minus) && abs_a_ht_b) ? 1'b0 :
                     ((mode == `reverse_minus) && (~abs_a_ht_b)) ? 1'b0 :
                     1'b1;

                    
endmodule
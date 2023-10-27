`include "post_processing.sv"
module tb_pp_q();
 logic [23:0] result;
 logic [4:0]shift_nums;
 logic right_shift;
 logic resultsign;
 logic [7:0] current_exponent;
logic [31:0]quotient;


post_processing pp(  //convert the final quotient to be IEEE-754
result,
shift_nums,
 right_shift,
resultsign,
 current_exponent,
quotient
);


initial begin
       $dumpfile("dump.vcd");
       $dumpvars(0, pp); 
end

    // 测试向量生成
  initial begin
shift_nums = 5'b00001;
    current_exponent = 8'd127;
    right_shift = 1'b0;
    resultsign = 1'b0;
    result = {1'b0,1'b1,22'b0};
#200 $finish; // 结束仿真
    end

endmodule
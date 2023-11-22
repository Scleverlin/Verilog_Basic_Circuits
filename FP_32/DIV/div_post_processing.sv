module div_post_processing(  //convert the final quotient to be IEEE-754
    input logic [23:0] result,
    input logic [4:0]shift_nums,
    input logic exp_add,
    input logic right_shift,
    input logic resultsign,
    input logic [7:0] current_exponent,
    output logic [31:0]quotient
    );
    
    logic [23:0] result_temp;
    assign result_temp=(right_shift)?result>>shift_nums:result<<shift_nums;
    
    logic [4:0] exponent_addend;
    logic [23:0] result_shifted;
    
    m_n_gen_2 mngen( result_temp,result_shifted,exponent_addend);
    logic [7:0]exponent_final;
    
    logic [7:0] addend_copmplement;
    
    assign addend_copmplement=~{3'b0,exponent_addend}+1'b1;
    
    assign exponent_final=current_exponent+addend_copmplement+{7'b0,exp_add};
    
    assign quotient={resultsign,exponent_final,result_shifted[22:0]};
    
endmodule


module m_n_gen_2 (
    input logic [23:0] data,
    output logic [23:0] outdata,
    output logic [4:0] shift
);
assign shift = (data[23] == 1) ? 0 :
               (data[22] == 1) ? 1 :
               (data[21] == 1) ? 2 :
               (data[20] == 1) ? 3 :
               (data[19] == 1) ? 4 :
               (data[18] == 1) ? 5 :
               (data[17] == 1) ? 6 :
               (data[16] == 1) ? 7 :
               (data[15] == 1) ? 8 :
               (data[14] == 1) ? 9 :
               (data[13] == 1) ? 10 :
               (data[12] == 1) ? 11 :
               (data[11] == 1) ? 12 :
               (data[10] == 1) ? 13 :
               (data[9] == 1) ? 14 :
               (data[8] == 1) ? 15 :
               (data[7] == 1) ? 16 :
               (data[6] == 1) ? 17 :
               (data[5] == 1) ? 18 :
               (data[4] == 1) ? 19 :
               (data[3] == 1) ? 20 :
               (data[2] == 1) ? 21 :
               (data[1] == 1) ? 22 :
               (data[0] == 1) ? 23 : 0;

assign outdata = data << shift;
endmodule
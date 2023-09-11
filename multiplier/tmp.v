assign pp3 = 
    ({1'b0,b[31:29]}== 4'b0000) ? {64'b0} : 
    ({1'b0,b[31:29]}== 4'b0001) ?  partial_product_1 :
    ({1'b0,b[31:29]}== 4'b0010) ?  partial_product_1 :
    ({1'b0,b[31:29]}== 4'b0011) ? partial_product_2 :
    ({1'b0,b[31:29]}== 4'b0100) ? partial_product_2 :
    ({1'b0,b[31:29]}== 4'b0101) ? partial_product_3 :
    ({1'b0,b[31:29]}== 4'b0110) ? partial_product_3 :
    ({1'b0,b[31:29]}== 4'b0111) ? partial_product_4 :
    ({1'b0,b[31:29]}== 4'b1000) ? partial_product_minus4 :
    ({1'b0,b[31:29]}== 4'b1001) ? partial_product_minus3 :
    ({1'b0,b[31:29]}== 4'b1010) ? partial_product_minus2 :
    ({1'b0,b[31:29]}== 4'b1011) ? partial_product_minus2 :
    ({1'b0,b[31:29]}== 4'b1100) ? partial_product_minus2 :
    ({1'b0,b[31:29]}== 4'b1101) ? partial_product_minus1 :
    ({1'b0,b[31:29]}== 4'b1110) ? partial_product_minus1 :
    {64'b0};  // This corresponds to the default case
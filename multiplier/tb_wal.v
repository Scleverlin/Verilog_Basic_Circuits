`include "wallace_tree_multiplier.sv"
module wal_mul_tb;
reg [31:0] a, b;
wire [31:0] sum;
reg [63:0] out;
integer i; // 使用integer替代int
// 实例化加法器
wallace_mulp_32x32 u0 (a,b,out);
reg [63:0]expect_out;

initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars;
end

initial begin
    // 随机测试
    i = 0;
    while(i < 1000) begin
        
        a=$random;
        b=$random;
        expect_out = a * b ;

        #10;  // 延迟以让加法器处理输入
        if(out != expect_out ) begin
            $display("ERROR: a=%b, b=%b, Expected: out=%b, Actual: out=%b", a, b, expect_out ,  out);
                $finish;
        end
      $display("a=%h, b=%h, Expected: out=%h, Actual: out=%h, Pass", a, b, expect_out ,  out);
        
        i = i + 1; // 更新循环计数器
    end
    
    $finish;
end

endmodule
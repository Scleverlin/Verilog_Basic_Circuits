`include "FMA_32_pipelined_v2.sv"

module FMA_32_tb;

    // 输入和输出
    reg [31:0] a, b, c;
    wire [31:0] result;
   logic clk,rst;
    // 实例化FMA_32模块
    // FMA_32_pipelined_v2 uut(
    //     .a(a),
    //     .b(b),
    //     .c(c),
    //     .result(result)
    // );
    FMA_clk uut(
        .clk(clk),
        .rst(rst),
        .a(a),
        .b(b),
        .c(c),
        .result(result)
    );

 initial begin
  clk=0;
     forever #5 clk = ~clk;  
end 

real a_real, b_real, c_real, result_real;
    // 生成波形文件
    initial begin
        // 创建VCD文件
        $dumpfile("dump.vcd");
        // 跟踪所有信号
        $dumpvars(0, FMA_32_tb);
        // 初始化输入
        a = 32'b0;
        b = 32'b0;
        c = 32'b0;
    //    #10 $display("Test 0: a = %h, b = %h, c = %h, result = %h", a, b, c, result);
        // 简单的测试案例
        #5 a = 32'h3f800000; // 1.0
            b = 32'h40000000; // 2.0
            c = 32'h40400000; // 3.0
     #10    a = 32'h48004ABC;   
             b = 32'h42BA98BA;;  
             c = 32'h40400000; // 3.0
     #10   a = 32'h3f800000; 
            b = 32'h41F00000; // 30.0
            c = 32'hC1A00000; // -20.0
        // 更多测试案例...
        // 这里可以添加更多测试案例来验证不同的输入组合
     #10 $display("Test 0: a = %h, b = %h, c = %h, result = %b", a, b, c, result);
        // 测试结束
        #100 $finish;
    end

endmodule

`timescale 1ns / 1ps

module DFF_testbench;

    reg D, clk;
    wire Q;

    // DFF实例
    DFF dff_instance (.D(D), .clk(clk), .Q(Q));

    // 生成时钟信号
    always #10 clk = ~clk;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, dff_instance); 
     end
    // 测试序列
    initial begin
        clk = 0;
        D = 0;
        #5 D = 1; // 在时钟边沿之前改变D
        #20 D = 0; // D在时钟边沿之后改变
        #20 $finish;
    end

endmodule

module DFF(input D, clk, output reg Q);
    always @(posedge clk) begin
        Q <= D;
    end
endmodule

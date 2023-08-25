`include "TMUL.sv"
module wal_mul_tb;

reg [31:0] a [7:0];
reg [255:0] b [7:0];
reg clk,rst;
wire [63:0] c [7:0];
integer i; // 使用integer替代int
// 实例化加法器
TMUL_32_8mul8 u0 (a,b,c,clk,rst);
reg [63:0]expect_out;

// 预期输出
reg [63:0] expect_out;

// 时钟生成器
always begin
    #5 clk = ~clk;
end

// 测试向量生成和检查模块输出
initial begin
    // 初始化
    clk = 0;
    rst = 1;
    for(i = 0; i < 8; i = i+1) begin
        a[i] = some_value; // 替换为适当的值
        for(j = 0; j < 8; j = j+1) begin
            b[i][j*32+31:j*32] = another_value; // 替换为适当的值
        end
    end
    #10 rst = 0; // 在10个时间单位后释放复位

    // 每个时钟周期提供新的输入并检查输出
    for(i = 0; i < test_duration; i = i+1) begin // 替换test_duration为测试时长
        // 这里插入提供新输入的代码，例如a和b的新值

        #10; // 等待一个时钟周期

        if(i >= 8) begin // 从第9个时钟周期开始检查输出
            for(k = 0; k < 8; k = k+1) begin
                if(c[k] !== expect_out) begin
                    $display("Mismatch at time %d for output c[%d]. Got: %h, Expected: %h", $time, k, c[k], expect_out);
                end
            end
        end
    end

    $stop; // 结束仿真
end

endmodule

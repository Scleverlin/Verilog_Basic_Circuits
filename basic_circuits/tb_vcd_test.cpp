#include <iostream>
#include <iomanip>
#include "Vks_new_test.h"
#include "verilated.h"
#include "verilated_vcd_c.h"  // 添加VCD跟踪库
#include <cstdlib>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vks_new_test* top = new Vks_new_test;

    Verilated::traceEverOn(true);  // 打开VCD跟踪
    VerilatedVcdC* tfp = new VerilatedVcdC;  // 创建一个VCD跟踪文件指针
    top->trace(tfp, 99);  // 追踪所有信号，99是跟踪的层次
    tfp->open("ks_new_test.vcd");  // 打开VCD文件

    for (int test = 0; test < 100000; ++test) {
        top->a = static_cast<uint64_t>(rand()) | (static_cast<uint64_t>(rand()) << 32);
        top->b = static_cast<uint64_t>(rand()) | (static_cast<uint64_t>(rand()) << 32);
        top->cin = rand() & 0x1;

        top->eval();

        tfp->dump(test);  // 在每次循环时，将当前仿真状态记录到VCD文件中

        uint64_t expected_sum = top->a + top->b + top->cin;
        uint8_t expected_cout = (expected_sum >> 64) & 0x1;

        std::cout << "Test " << std::setw(4) << test + 1 << ": a = " << std::setw(20) << top->a
                  << ", b = " << std::setw(20) << top->b << ", cin = " << static_cast<unsigned>(top->cin)
                  << ", sum = " << std::setw(20) << top->sum << ", cout = " << static_cast<unsigned>(top->cout)
                  << std::endl;

        if (top->sum != (expected_sum & 0xFFFFFFFFFFFFFFFF) || top->cout != expected_cout) {
            std::cout << "Mismatch detected!" << std::endl;
            tfp->close();  // 关闭VCD文件
            top->final();
            delete top;
            delete tfp;
            return 1;
        }
    }

    std::cout << "Random tests completed." << std::endl;

    tfp->close();  // 关闭VCD文件
    top->final();
    delete top;
    delete tfp;
    return 0;
}

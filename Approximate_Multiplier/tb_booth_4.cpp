#include <cstdio>
#include <iostream>
#include <iomanip>
#include <random>
#include "Vbooth_4_8_bit.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vbooth_4_8_bit* top = new Vbooth_4_8_bit;

    srand(time(NULL));

    for (int i = 0; i < 1000; i++) {
        int8_t a = rand() % 256 - 128; // 生成一个-128至127范围内的随机数
        int8_t b = rand() % 256 - 128;

        top->a = a;
        top->b = b;

        top->eval();

        int16_t expected_result = a * b;
        int16_t actual_result = top->c;

           std::cout << "a = " << static_cast<int>(a)
                      << ", b = " << static_cast<int>(b)
                      << ", expected_result = " << expected_result
                      << ", real_result = " << actual_result
                      << std::endl;
          
        if (expected_result != actual_result) {
            std::cout << "测试失败: a = " << static_cast<int>(a)
                      << ", b = " << static_cast<int>(b)
                      << ", expected_result = " << expected_result
                      << ", expected_result = " << actual_result
                      << std::endl;
            delete top;
            exit(1);
        }
    }

    std::cout << "Test Pass!" << std::endl;
    delete top;
    return 0;
}

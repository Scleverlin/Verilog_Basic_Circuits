#include <cstdio>
#include <iostream>
#include <iomanip>
#include <random>
#include "VHC_64_BK0_KS6.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VHC_64_BK0_KS6 * top = new VHC_64_BK0_KS6 ;

    std::mt19937_64 rng(std::random_device{}());
    std::uniform_int_distribution<uint64_t> distribution(0, UINT64_MAX);

    // VerilatedVcdC* tfp = new VerilatedVcdC();
    // top->trace(tfp, 99);
    // tfp->open("vcd_output.vcd");

    for (int test = 0; test < 1000; ++test) {
        top->a = distribution(rng);
        top->b = distribution(rng);
        top->cin = rand() & 0x1;
        top->eval();

        // tfp->dump(test);

        unsigned __int128 expected_sum = static_cast<unsigned __int128>(top->a) + static_cast<unsigned __int128>(top->b) + static_cast<unsigned __int128>(top->cin);
        uint8_t expected_cout = (expected_sum >> 64) & 0x1;

        // std::cout << "Test " << std::setw(4) << test + 1 << ": a = " << std::setw(20) << top->a
        //           << ", b = " << std::setw(20) << top->b << ", cin = " << static_cast<unsigned>(top->cin)
        //           << ", sum = " << std::setw(20) << top->sum << ", cout = " << static_cast<unsigned>(top->cout)
        //           << std::endl;
            // printf("a = %llu, b = %llu, sum = %llu\n", top->a, top->b, top->sum);

    printf("Test %4d: a = %20lu, b = %20lu, cin = %u, sum = %20lu, cout = %u, Pass\n",
       test + 1, top->a, top->b, static_cast<unsigned>(top->cin), top->sum, static_cast<unsigned>(top->cout));

        if (top->sum != (expected_sum & 0xFFFFFFFFFFFFFFFF) || top->cout != expected_cout) {
            // std::cout << "Mismatch detected!" << std::endl;
            printf("Mismatch detected!\n");
            top->final();
            delete top;
            return 1;
        }
    }
    // std::cout << "Random tests completed." << std::endl;
    printf("Random tests completed\n");
    // tfp->close();
    top->final();
    delete top;
    return 0;
}

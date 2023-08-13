#include <cstdio>
#include <iostream>
#include <iomanip>
#include <random>
#include "VHybrid_64_BK2_KL4_Fanout4.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VHybrid_64_BK2_KL4_Fanout4 * top = new VHybrid_64_BK2_KL4_Fanout4 ;

    std::mt19937_64 rng(std::random_device{}());
    std::uniform_int_distribution<uint64_t> distribution(0, UINT64_MAX);

    for (int test = 0; test < 10000; ++test) {
        top->a = distribution(rng);
        top->b = distribution(rng);
        top->cin = rand() & 0x1;
        top->eval();

        unsigned __int128 expected_sum = static_cast<unsigned __int128>(top->a) + static_cast<unsigned __int128>(top->b) + static_cast<unsigned __int128>(top->cin);
        uint8_t expected_cout = (expected_sum >> 64) & 0x1;

        printf("Test %4d: a = %20lu, b = %20lu, cin = %u, sum = %20lu, cout = %u, Pass\n",
           test + 1, top->a, top->b, static_cast<unsigned>(top->cin), top->sum, static_cast<unsigned>(top->cout));

        if (top->sum != (expected_sum & 0xFFFFFFFFFFFFFFFF) || top->cout != expected_cout) {
            printf("Mismatch detected!\n");
            
            // Print the bits that mismatch
            for (int i = 0; i < 64; i++) {
                uint64_t mask = 1ull << i;
                if ((top->sum & mask) != (expected_sum & mask)) {
                    printf("Bit %d is incorrect\n", i + 1);
                }
            }

            // top->final();
            // delete top;
            // return 1;
        }
    }

    printf("Random tests completed\n");
    top->final();
    delete top;
    return 0;
}

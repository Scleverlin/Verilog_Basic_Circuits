// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_op_64_bit.h for the primary calling header

#include "verilated.h"

#include "Vks_op_64_bit__Syms.h"
#include "Vks_op_64_bit_ks_adder_2.h"

void Vks_op_64_bit_ks_adder_2___ctor_var_reset(Vks_op_64_bit_ks_adder_2* vlSelf);

Vks_op_64_bit_ks_adder_2::Vks_op_64_bit_ks_adder_2(Vks_op_64_bit__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vks_op_64_bit_ks_adder_2___ctor_var_reset(this);
}

void Vks_op_64_bit_ks_adder_2::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vks_op_64_bit_ks_adder_2::~Vks_op_64_bit_ks_adder_2() {
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_adder_op_3_64.h for the primary calling header

#include "verilated.h"

#include "Vks_adder_op_3_64__Syms.h"
#include "Vks_adder_op_3_64_ks_adder_3.h"

void Vks_adder_op_3_64_ks_adder_3___ctor_var_reset(Vks_adder_op_3_64_ks_adder_3* vlSelf);

Vks_adder_op_3_64_ks_adder_3::Vks_adder_op_3_64_ks_adder_3(Vks_adder_op_3_64__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vks_adder_op_3_64_ks_adder_3___ctor_var_reset(this);
}

void Vks_adder_op_3_64_ks_adder_3::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vks_adder_op_3_64_ks_adder_3::~Vks_adder_op_3_64_ks_adder_3() {
}

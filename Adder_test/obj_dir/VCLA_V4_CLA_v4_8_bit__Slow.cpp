// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_V4.h for the primary calling header

#include "verilated.h"

#include "VCLA_V4_CLA_v4_8_bit.h"
#include "VCLA_V4__Syms.h"

void VCLA_V4_CLA_v4_8_bit___ctor_var_reset(VCLA_V4_CLA_v4_8_bit* vlSelf);

VCLA_V4_CLA_v4_8_bit::VCLA_V4_CLA_v4_8_bit(VCLA_V4__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCLA_V4_CLA_v4_8_bit___ctor_var_reset(this);
}

void VCLA_V4_CLA_v4_8_bit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCLA_V4_CLA_v4_8_bit::~VCLA_V4_CLA_v4_8_bit() {
}

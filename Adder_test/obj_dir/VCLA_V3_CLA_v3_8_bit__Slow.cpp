// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_V3.h for the primary calling header

#include "verilated.h"

#include "VCLA_V3_CLA_v3_8_bit.h"
#include "VCLA_V3__Syms.h"

void VCLA_V3_CLA_v3_8_bit___ctor_var_reset(VCLA_V3_CLA_v3_8_bit* vlSelf);

VCLA_V3_CLA_v3_8_bit::VCLA_V3_CLA_v3_8_bit(VCLA_V3__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCLA_V3_CLA_v3_8_bit___ctor_var_reset(this);
}

void VCLA_V3_CLA_v3_8_bit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCLA_V3_CLA_v3_8_bit::~VCLA_V3_CLA_v3_8_bit() {
}

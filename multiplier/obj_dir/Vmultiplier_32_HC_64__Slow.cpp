// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier_32.h for the primary calling header

#include "verilated.h"

#include "Vmultiplier_32_HC_64.h"
#include "Vmultiplier_32__Syms.h"

void Vmultiplier_32_HC_64___ctor_var_reset(Vmultiplier_32_HC_64* vlSelf);

Vmultiplier_32_HC_64::Vmultiplier_32_HC_64(Vmultiplier_32__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmultiplier_32_HC_64___ctor_var_reset(this);
}

void Vmultiplier_32_HC_64::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmultiplier_32_HC_64::~Vmultiplier_32_HC_64() {
}

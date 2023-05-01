// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_V3.h for the primary calling header

#include "verilated.h"

#include "VCLA_V3__Syms.h"
#include "VCLA_V3___024root.h"

void VCLA_V3___024root___ctor_var_reset(VCLA_V3___024root* vlSelf);

VCLA_V3___024root::VCLA_V3___024root(VCLA_V3__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCLA_V3___024root___ctor_var_reset(this);
}

void VCLA_V3___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCLA_V3___024root::~VCLA_V3___024root() {
}

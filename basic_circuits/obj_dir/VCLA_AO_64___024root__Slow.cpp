// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_AO_64.h for the primary calling header

#include "verilated.h"

#include "VCLA_AO_64__Syms.h"
#include "VCLA_AO_64___024root.h"

void VCLA_AO_64___024root___ctor_var_reset(VCLA_AO_64___024root* vlSelf);

VCLA_AO_64___024root::VCLA_AO_64___024root(VCLA_AO_64__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCLA_AO_64___024root___ctor_var_reset(this);
}

void VCLA_AO_64___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCLA_AO_64___024root::~VCLA_AO_64___024root() {
}

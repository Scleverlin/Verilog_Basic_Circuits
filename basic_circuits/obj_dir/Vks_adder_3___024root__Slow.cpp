// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_adder_3.h for the primary calling header

#include "verilated.h"

#include "Vks_adder_3__Syms.h"
#include "Vks_adder_3___024root.h"

void Vks_adder_3___024root___ctor_var_reset(Vks_adder_3___024root* vlSelf);

Vks_adder_3___024root::Vks_adder_3___024root(Vks_adder_3__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vks_adder_3___024root___ctor_var_reset(this);
}

void Vks_adder_3___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vks_adder_3___024root::~Vks_adder_3___024root() {
}

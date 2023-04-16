// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_op_64_bit.h for the primary calling header

#include "verilated.h"

#include "Vks_op_64_bit__Syms.h"
#include "Vks_op_64_bit___024root.h"

void Vks_op_64_bit___024root___ctor_var_reset(Vks_op_64_bit___024root* vlSelf);

Vks_op_64_bit___024root::Vks_op_64_bit___024root(Vks_op_64_bit__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vks_op_64_bit___024root___ctor_var_reset(this);
}

void Vks_op_64_bit___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vks_op_64_bit___024root::~Vks_op_64_bit___024root() {
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_adder_op_3_64.h for the primary calling header

#include "verilated.h"

#include "Vks_adder_op_3_64___024root.h"

#ifdef VL_DEBUG
void Vks_adder_op_3_64___024root___eval_debug_assertions(Vks_adder_op_3_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_adder_op_3_64___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdff.h for the primary calling header

#include "verilated.h"

#include "Vdff__Syms.h"
#include "Vdff___024root.h"

void Vdff___024root___eval_act(Vdff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vdff___024root___nba_sequent__TOP__0(Vdff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->q = vlSelf->data;
}

void Vdff___024root___eval_nba(Vdff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdff___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vdff___024root___eval_triggers__act(Vdff___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdff___024root___dump_triggers__act(Vdff___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdff___024root___dump_triggers__nba(Vdff___024root* vlSelf);
#endif  // VL_DEBUG

void Vdff___024root___eval(Vdff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vdff___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vdff___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/shi/verilog/basic_circuits/dff.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vdff___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vdff___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/shi/verilog/basic_circuits/dff.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vdff___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vdff___024root___eval_debug_assertions(Vdff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->data & 0xfeU))) {
        Verilated::overWidthError("data");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_V4.h for the primary calling header

#include "verilated.h"

#include "VCLA_V4___024root.h"

void VCLA_V4___024root___eval_act(VCLA_V4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_V4___024root___eval_act\n"); );
}

void VCLA_V4___024root___eval_nba(VCLA_V4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_V4___024root___eval_nba\n"); );
}

void VCLA_V4___024root___eval_triggers__ico(VCLA_V4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_V4___024root___dump_triggers__ico(VCLA_V4___024root* vlSelf);
#endif  // VL_DEBUG
void VCLA_V4___024root___eval_ico(VCLA_V4___024root* vlSelf);
void VCLA_V4___024root___eval_triggers__act(VCLA_V4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_V4___024root___dump_triggers__act(VCLA_V4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_V4___024root___dump_triggers__nba(VCLA_V4___024root* vlSelf);
#endif  // VL_DEBUG

void VCLA_V4___024root___eval(VCLA_V4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_V4___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VCLA_V4___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VCLA_V4___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("CLA_V4.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VCLA_V4___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VCLA_V4___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VCLA_V4___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("CLA_V4.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VCLA_V4___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VCLA_V4___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("CLA_V4.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VCLA_V4___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VCLA_V4___024root___eval_debug_assertions(VCLA_V4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_V4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG

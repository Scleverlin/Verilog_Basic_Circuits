// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbooth_4_8_bit.h for the primary calling header

#include "verilated.h"

#include "Vbooth_4_8_bit___024root.h"

VL_INLINE_OPT void Vbooth_4_8_bit___024root___ico_sequent__TOP__0(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((2U & (IData)(vlSelf->b))) {
        if ((1U & (IData)(vlSelf->b))) {
            vlSelf->booth_4_8_bit__DOT____Vcellout__p0____pinNumber3 
                = (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->a)));
            vlSelf->booth_4_8_bit__DOT____Vcellout__p0____pinNumber3 
                = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p0____pinNumber3))));
        } else {
            vlSelf->booth_4_8_bit__DOT____Vcellout__p0____pinNumber3 
                = (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->a)));
            vlSelf->booth_4_8_bit__DOT____Vcellout__p0____pinNumber3 
                = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p0____pinNumber3))));
            vlSelf->booth_4_8_bit__DOT____Vcellout__p0____pinNumber3 
                = (0xffffU & ((IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p0____pinNumber3) 
                              << 1U));
        }
    } else {
        vlSelf->booth_4_8_bit__DOT____Vcellout__p0____pinNumber3 
            = ((1U & (IData)(vlSelf->b)) ? (0xffffU 
                                            & VL_EXTENDS_II(16,8, (IData)(vlSelf->a)))
                : 0U);
    }
    if ((8U & (IData)(vlSelf->b))) {
        if ((4U & (IData)(vlSelf->b))) {
            if ((2U & (IData)(vlSelf->b))) {
                vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3 = 0U;
            } else {
                vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3 
                    = (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->a)));
                vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3 
                    = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3))));
            }
        } else if ((2U & (IData)(vlSelf->b))) {
            vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3 
                = (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->a)));
            vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3 
                = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3))));
        } else {
            vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3 
                = (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->a)));
            vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3 
                = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3))));
            vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3 
                = (0xffffU & ((IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3) 
                              << 1U));
        }
    } else {
        vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3 
            = (0xffffU & ((4U & (IData)(vlSelf->b))
                           ? ((2U & (IData)(vlSelf->b))
                               ? (VL_EXTENDS_II(16,8, (IData)(vlSelf->a)) 
                                  << 1U) : VL_EXTENDS_II(16,8, (IData)(vlSelf->a)))
                           : ((2U & (IData)(vlSelf->b))
                               ? VL_EXTENDS_II(16,8, (IData)(vlSelf->a))
                               : 0U)));
    }
    if ((0x20U & (IData)(vlSelf->b))) {
        if ((0x10U & (IData)(vlSelf->b))) {
            if ((8U & (IData)(vlSelf->b))) {
                vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3 = 0U;
            } else {
                vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3 
                    = (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->a)));
                vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3 
                    = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3))));
            }
        } else if ((8U & (IData)(vlSelf->b))) {
            vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3 
                = (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->a)));
            vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3 
                = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3))));
        } else {
            vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3 
                = (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->a)));
            vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3 
                = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3))));
            vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3 
                = (0xffffU & ((IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3) 
                              << 1U));
        }
    } else {
        vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3 
            = (0xffffU & ((0x10U & (IData)(vlSelf->b))
                           ? ((8U & (IData)(vlSelf->b))
                               ? (VL_EXTENDS_II(16,8, (IData)(vlSelf->a)) 
                                  << 1U) : VL_EXTENDS_II(16,8, (IData)(vlSelf->a)))
                           : ((8U & (IData)(vlSelf->b))
                               ? VL_EXTENDS_II(16,8, (IData)(vlSelf->a))
                               : 0U)));
    }
    if ((0x80U & (IData)(vlSelf->b))) {
        if ((0x40U & (IData)(vlSelf->b))) {
            if ((0x20U & (IData)(vlSelf->b))) {
                vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3 = 0U;
            } else {
                vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3 
                    = (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->a)));
                vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3 
                    = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3))));
            }
        } else if ((0x20U & (IData)(vlSelf->b))) {
            vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3 
                = (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->a)));
            vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3 
                = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3))));
        } else {
            vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3 
                = (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->a)));
            vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3 
                = (0xffffU & ((IData)(1U) + (~ (IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3))));
            vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3 
                = (0xffffU & ((IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3) 
                              << 1U));
        }
    } else {
        vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3 
            = (0xffffU & ((0x40U & (IData)(vlSelf->b))
                           ? ((0x20U & (IData)(vlSelf->b))
                               ? (VL_EXTENDS_II(16,8, (IData)(vlSelf->a)) 
                                  << 1U) : VL_EXTENDS_II(16,8, (IData)(vlSelf->a)))
                           : ((0x20U & (IData)(vlSelf->b))
                               ? VL_EXTENDS_II(16,8, (IData)(vlSelf->a))
                               : 0U)));
    }
    vlSelf->c = (0xffffU & ((IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p0____pinNumber3) 
                            + (((IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3) 
                                << 2U) + (((IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3) 
                                           << 4U) + 
                                          ((IData)(vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3) 
                                           << 6U)))));
}

void Vbooth_4_8_bit___024root___eval_ico(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vbooth_4_8_bit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vbooth_4_8_bit___024root___eval_act(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___eval_act\n"); );
}

void Vbooth_4_8_bit___024root___eval_nba(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___eval_nba\n"); );
}

void Vbooth_4_8_bit___024root___eval_triggers__ico(Vbooth_4_8_bit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_4_8_bit___024root___dump_triggers__ico(Vbooth_4_8_bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vbooth_4_8_bit___024root___eval_triggers__act(Vbooth_4_8_bit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_4_8_bit___024root___dump_triggers__act(Vbooth_4_8_bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_4_8_bit___024root___dump_triggers__nba(Vbooth_4_8_bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vbooth_4_8_bit___024root___eval(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___eval\n"); );
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
        Vbooth_4_8_bit___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vbooth_4_8_bit___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("booth_4_8_bit.v", 37, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vbooth_4_8_bit___024root___eval_ico(vlSelf);
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
            Vbooth_4_8_bit___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vbooth_4_8_bit___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("booth_4_8_bit.v", 37, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vbooth_4_8_bit___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vbooth_4_8_bit___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("booth_4_8_bit.v", 37, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vbooth_4_8_bit___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vbooth_4_8_bit___024root___eval_debug_assertions(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

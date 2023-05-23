// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_HAN_shi_8.h for the primary calling header

#include "verilated.h"

#include "VCLA_HAN_shi_8__Syms.h"
#include "VCLA_HAN_shi_8___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_shi_8___024root___dump_triggers__ico(VCLA_HAN_shi_8___024root* vlSelf);
#endif  // VL_DEBUG

void VCLA_HAN_shi_8___024root___eval_triggers__ico(VCLA_HAN_shi_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_shi_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_shi_8___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__gnpg) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u0__DOT__gnpg));
    vlSelf->__VicoTriggered.at(2U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__pp) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u0__DOT__pp));
    vlSelf->__VicoTriggered.at(3U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__gnpg) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u1__DOT__gnpg));
    vlSelf->__VicoTriggered.at(4U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__pp) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u1__DOT__pp));
    vlSelf->__VicoTriggered.at(5U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__gnpg) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u2__DOT__gnpg));
    vlSelf->__VicoTriggered.at(6U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__pp) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u2__DOT__pp));
    vlSelf->__VicoTriggered.at(7U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__gnpg) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u3__DOT__gnpg));
    vlSelf->__VicoTriggered.at(8U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__pp) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u3__DOT__pp));
    vlSelf->__VicoTriggered.at(9U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__gnpg) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u4__DOT__gnpg));
    vlSelf->__VicoTriggered.at(0xaU) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__pp) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u4__DOT__pp));
    vlSelf->__VicoTriggered.at(0xbU) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__gnpg) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u5__DOT__gnpg));
    vlSelf->__VicoTriggered.at(0xcU) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__pp) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u5__DOT__pp));
    vlSelf->__VicoTriggered.at(0xdU) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__gnpg) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u6__DOT__gnpg));
    vlSelf->__VicoTriggered.at(0xeU) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__pp) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u6__DOT__pp));
    vlSelf->__VicoTriggered.at(0xfU) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__gnpg) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u7__DOT__gnpg));
    vlSelf->__VicoTriggered.at(0x10U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__pp) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u7__DOT__pp));
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u0__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u0__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u1__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u1__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u2__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u2__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u3__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u3__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u4__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u4__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u5__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u5__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u6__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u6__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u7__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u7__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__pp;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(1U) = 1U;
        vlSelf->__VicoTriggered.at(2U) = 1U;
        vlSelf->__VicoTriggered.at(3U) = 1U;
        vlSelf->__VicoTriggered.at(4U) = 1U;
        vlSelf->__VicoTriggered.at(5U) = 1U;
        vlSelf->__VicoTriggered.at(6U) = 1U;
        vlSelf->__VicoTriggered.at(7U) = 1U;
        vlSelf->__VicoTriggered.at(8U) = 1U;
        vlSelf->__VicoTriggered.at(9U) = 1U;
        vlSelf->__VicoTriggered.at(0xaU) = 1U;
        vlSelf->__VicoTriggered.at(0xbU) = 1U;
        vlSelf->__VicoTriggered.at(0xcU) = 1U;
        vlSelf->__VicoTriggered.at(0xdU) = 1U;
        vlSelf->__VicoTriggered.at(0xeU) = 1U;
        vlSelf->__VicoTriggered.at(0xfU) = 1U;
        vlSelf->__VicoTriggered.at(0x10U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCLA_HAN_shi_8___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_shi_8___024root___dump_triggers__act(VCLA_HAN_shi_8___024root* vlSelf);
#endif  // VL_DEBUG

void VCLA_HAN_shi_8___024root___eval_triggers__act(VCLA_HAN_shi_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_shi_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_shi_8___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__gnpg) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u0__DOT__gnpg));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__pp) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u0__DOT__pp));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__gnpg) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u1__DOT__gnpg));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__pp) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u1__DOT__pp));
    vlSelf->__VactTriggered.at(4U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__gnpg) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u2__DOT__gnpg));
    vlSelf->__VactTriggered.at(5U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__pp) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u2__DOT__pp));
    vlSelf->__VactTriggered.at(6U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__gnpg) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u3__DOT__gnpg));
    vlSelf->__VactTriggered.at(7U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__pp) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u3__DOT__pp));
    vlSelf->__VactTriggered.at(8U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__gnpg) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u4__DOT__gnpg));
    vlSelf->__VactTriggered.at(9U) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__pp) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u4__DOT__pp));
    vlSelf->__VactTriggered.at(0xaU) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__gnpg) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u5__DOT__gnpg));
    vlSelf->__VactTriggered.at(0xbU) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__pp) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u5__DOT__pp));
    vlSelf->__VactTriggered.at(0xcU) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__gnpg) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u6__DOT__gnpg));
    vlSelf->__VactTriggered.at(0xdU) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__pp) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u6__DOT__pp));
    vlSelf->__VactTriggered.at(0xeU) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__gnpg) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u7__DOT__gnpg));
    vlSelf->__VactTriggered.at(0xfU) = ((IData)(vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__pp) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u7__DOT__pp));
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u0__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u0__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u1__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u1__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u2__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u2__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u3__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u3__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u4__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u4__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u5__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u5__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u6__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u6__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u7__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u7__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__pp;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
        vlSelf->__VactTriggered.at(4U) = 1U;
        vlSelf->__VactTriggered.at(5U) = 1U;
        vlSelf->__VactTriggered.at(6U) = 1U;
        vlSelf->__VactTriggered.at(7U) = 1U;
        vlSelf->__VactTriggered.at(8U) = 1U;
        vlSelf->__VactTriggered.at(9U) = 1U;
        vlSelf->__VactTriggered.at(0xaU) = 1U;
        vlSelf->__VactTriggered.at(0xbU) = 1U;
        vlSelf->__VactTriggered.at(0xcU) = 1U;
        vlSelf->__VactTriggered.at(0xdU) = 1U;
        vlSelf->__VactTriggered.at(0xeU) = 1U;
        vlSelf->__VactTriggered.at(0xfU) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCLA_HAN_shi_8___024root___dump_triggers__act(vlSelf);
    }
#endif
}

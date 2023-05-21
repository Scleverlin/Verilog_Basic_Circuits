// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_new_AO_8bit.h for the primary calling header

#include "verilated.h"

#include "VCLA_new_AO_8bit__Syms.h"
#include "VCLA_new_AO_8bit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_new_AO_8bit___024root___dump_triggers__ico(VCLA_new_AO_8bit___024root* vlSelf);
#endif  // VL_DEBUG

void VCLA_new_AO_8bit___024root___eval_triggers__ico(VCLA_new_AO_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_new_AO_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_new_AO_8bit___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = ((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_new_AO_8bit__DOT__pp));
    vlSelf->__VicoTriggered.at(2U) = ((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_new_AO_8bit__DOT__gnpg));
    vlSelf->__Vtrigrprev__TOP__CLA_new_AO_8bit__DOT__pp 
        = vlSelf->CLA_new_AO_8bit__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_new_AO_8bit__DOT__gnpg 
        = vlSelf->CLA_new_AO_8bit__DOT__gnpg;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(1U) = 1U;
        vlSelf->__VicoTriggered.at(2U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCLA_new_AO_8bit___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_new_AO_8bit___024root___dump_triggers__act(VCLA_new_AO_8bit___024root* vlSelf);
#endif  // VL_DEBUG

void VCLA_new_AO_8bit___024root___eval_triggers__act(VCLA_new_AO_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_new_AO_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_new_AO_8bit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_new_AO_8bit__DOT__pp));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_new_AO_8bit__DOT__gnpg));
    vlSelf->__Vtrigrprev__TOP__CLA_new_AO_8bit__DOT__pp 
        = vlSelf->CLA_new_AO_8bit__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_new_AO_8bit__DOT__gnpg 
        = vlSelf->CLA_new_AO_8bit__DOT__gnpg;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCLA_new_AO_8bit___024root___dump_triggers__act(vlSelf);
    }
#endif
}

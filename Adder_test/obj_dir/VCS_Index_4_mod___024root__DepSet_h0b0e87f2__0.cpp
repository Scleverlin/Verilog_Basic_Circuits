// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCS_Index_4_mod.h for the primary calling header

#include "verilated.h"

#include "VCS_Index_4_mod__Syms.h"
#include "VCS_Index_4_mod___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_Index_4_mod___024root___dump_triggers__ico(VCS_Index_4_mod___024root* vlSelf);
#endif  // VL_DEBUG

void VCS_Index_4_mod___024root___eval_triggers__ico(VCS_Index_4_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_4_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_4_mod___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CS_Index_4_mod__DOT__c4n));
    vlSelf->__Vtrigrprev__TOP__CS_Index_4_mod__DOT__c4n 
        = vlSelf->CS_Index_4_mod__DOT__c4n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCS_Index_4_mod___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_Index_4_mod___024root___dump_triggers__act(VCS_Index_4_mod___024root* vlSelf);
#endif  // VL_DEBUG

void VCS_Index_4_mod___024root___eval_triggers__act(VCS_Index_4_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_4_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_4_mod___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CS_Index_4_mod__DOT__c4n));
    vlSelf->__Vtrigrprev__TOP__CS_Index_4_mod__DOT__c4n 
        = vlSelf->CS_Index_4_mod__DOT__c4n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCS_Index_4_mod___024root___dump_triggers__act(vlSelf);
    }
#endif
}

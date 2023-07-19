// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCS_Index_4_mod.h for the primary calling header

#include "verilated.h"

#include "VCS_Index_4_mod__Syms.h"
#include "VCS_Index_4_mod___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_Index_4_mod___024root___dump_triggers__stl(VCS_Index_4_mod___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VCS_Index_4_mod___024root___eval_triggers__stl(VCS_Index_4_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_4_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_4_mod___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CS_Index_4_mod__DOT__c4n));
    vlSelf->__Vtrigrprev__TOP__CS_Index_4_mod__DOT__c4n 
        = vlSelf->CS_Index_4_mod__DOT__c4n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCS_Index_4_mod___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHC_64_BK1_KS5.h for the primary calling header

#include "verilated.h"

#include "VHC_64_BK1_KS5__Syms.h"
#include "VHC_64_BK1_KS5__Syms.h"
#include "VHC_64_BK1_KS5___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VHC_64_BK1_KS5___024root___dump_triggers__stl(VHC_64_BK1_KS5___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VHC_64_BK1_KS5___024root___eval_triggers__stl(VHC_64_BK1_KS5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK1_KS5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK1_KS5___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VHC_64_BK1_KS5___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

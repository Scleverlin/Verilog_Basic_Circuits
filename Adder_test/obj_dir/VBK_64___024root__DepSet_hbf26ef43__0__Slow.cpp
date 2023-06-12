// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBK_64.h for the primary calling header

#include "verilated.h"

#include "VBK_64__Syms.h"
#include "VBK_64___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VBK_64___024root___dump_triggers__stl(VBK_64___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VBK_64___024root___eval_triggers__stl(VBK_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_64___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = (0U != (((((((
                                                   (((((((((((((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0U] 
                                                                ^ 
                                                                vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0U]) 
                                                               | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U] 
                                                                  ^ 
                                                                  vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U])) 
                                                              | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U] 
                                                                 ^ 
                                                                 vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U])) 
                                                             | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[3U] 
                                                                ^ 
                                                                vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[3U])) 
                                                            | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U])) 
                                                           | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U])) 
                                                          | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U])) 
                                                         | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U])) 
                                                        | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U])) 
                                                       | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U])) 
                                                      | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU])) 
                                                     | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU])) 
                                                    | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU])) 
                                                   | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU])) 
                                                  | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU])) 
                                                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU])) 
                                                | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U])) 
                                               | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                                                  ^ 
                                                  vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U])) 
                                              | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                                                 ^ 
                                                 vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U])) 
                                             | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                                                ^ vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U])));
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[3U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[3U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U];
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBK_64___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void VBK_64___024root___act_sequent__TOP__0(VBK_64___024root* vlSelf);
void VBK_64___024root___ico_sequent__TOP__0(VBK_64___024root* vlSelf);
void VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3___ico_sequent__TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__0(VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3* vlSelf);
void VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3___ico_sequent__TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__0(VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3* vlSelf);
void VBK_64___024root___ico_comb__TOP__0(VBK_64___024root* vlSelf);

VL_ATTR_COLD void VBK_64___024root___eval_stl(VBK_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_64___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(1U)) {
        VBK_64___024root___act_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VBK_64___024root___ico_sequent__TOP__0(vlSelf);
        VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3___ico_sequent__TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__0((&vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh));
        VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3___ico_sequent__TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__0((&vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh));
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        VBK_64___024root___ico_comb__TOP__0(vlSelf);
    }
}

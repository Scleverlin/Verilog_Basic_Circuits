// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_V3.h for the primary calling header

#include "verilated.h"

#include "VCLA_V3__Syms.h"
#include "VCLA_V3___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_V3___024root___dump_triggers__ico(VCLA_V3___024root* vlSelf);
#endif  // VL_DEBUG

void VCLA_V3___024root___eval_triggers__ico(VCLA_V3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_V3___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCLA_V3___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VCLA_V3___024root___ico_sequent__TOP__0(VCLA_V3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_V3___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->cout = (1U & (~ ((~ ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__c5) 
                                 & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__norpp) 
                                    >> 6U))) & (~ (
                                                   (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__p) 
                                                     >> 7U) 
                                                    & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__u1__DOT__g) 
                                                       >> 6U)) 
                                                   | ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__u1__DOT__g) 
                                                      >> 7U))))));
    vlSelf->sum = (((QData)((IData)(((0x80U & (((~ 
                                                 ((~ 
                                                   ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__c4) 
                                                    & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__norpp) 
                                                       >> 5U))) 
                                                  & (~ 
                                                     ((((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__p) 
                                                        >> 6U) 
                                                       & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__u1__DOT__g) 
                                                          >> 5U)) 
                                                      | ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__u1__DOT__g) 
                                                         >> 6U))))) 
                                                << 7U) 
                                               ^ (0xffffff80U 
                                                  & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__p)))) 
                                     | ((0x40U & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__c5) 
                                                   << 6U) 
                                                  ^ 
                                                  (0xffffffc0U 
                                                   & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__p)))) 
                                        | ((0x20U & 
                                            (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__c4) 
                                              << 5U) 
                                             ^ (0xffffffe0U 
                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__p)))) 
                                           | ((0x10U 
                                               & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__c3) 
                                                   << 4U) 
                                                  ^ 
                                                  (0xfffffff0U 
                                                   & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__p)))) 
                                              | ((8U 
                                                  & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__c2) 
                                                      << 3U) 
                                                     ^ 
                                                     (0xfffffff8U 
                                                      & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__p)))) 
                                                 | ((4U 
                                                     & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__c1) 
                                                         << 2U) 
                                                        ^ 
                                                        (0xfffffffcU 
                                                         & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__p)))) 
                                                    | ((2U 
                                                        & ((0xfffffffeU 
                                                            & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__p)) 
                                                           ^ 
                                                           ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__c0) 
                                                            << 1U))) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u8.__PVT__p) 
                                                             ^ (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.cout)))))))))))) 
                    << 0x38U) | (((QData)((IData)((
                                                   (0x80U 
                                                    & (((~ 
                                                         ((~ 
                                                           ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__c4) 
                                                            & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__norpp) 
                                                               >> 5U))) 
                                                          & (~ 
                                                             ((((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__p) 
                                                                >> 6U) 
                                                               & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__u1__DOT__g) 
                                                                  >> 5U)) 
                                                              | ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__u1__DOT__g) 
                                                                 >> 6U))))) 
                                                        << 7U) 
                                                       ^ 
                                                       (0xffffff80U 
                                                        & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__p)))) 
                                                   | ((0x40U 
                                                       & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__c5) 
                                                           << 6U) 
                                                          ^ 
                                                          (0xffffffc0U 
                                                           & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__p)))) 
                                                      | ((0x20U 
                                                          & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__c4) 
                                                              << 5U) 
                                                             ^ 
                                                             (0xffffffe0U 
                                                              & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__p)))) 
                                                         | ((0x10U 
                                                             & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__c3) 
                                                                 << 4U) 
                                                                ^ 
                                                                (0xfffffff0U 
                                                                 & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__p)))) 
                                                            | ((8U 
                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__c2) 
                                                                    << 3U) 
                                                                   ^ 
                                                                   (0xfffffff8U 
                                                                    & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__p)))) 
                                                               | ((4U 
                                                                   & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__c1) 
                                                                       << 2U) 
                                                                      ^ 
                                                                      (0xfffffffcU 
                                                                       & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__p)))) 
                                                                  | ((2U 
                                                                      & ((0xfffffffeU 
                                                                          & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__p)) 
                                                                         ^ 
                                                                         ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__c0) 
                                                                          << 1U))) 
                                                                     | (1U 
                                                                        & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.__PVT__p) 
                                                                           ^ (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.cout)))))))))))) 
                                  << 0x30U) | (((QData)((IData)(
                                                                ((0x80U 
                                                                  & (((~ 
                                                                       ((~ 
                                                                         ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__c4) 
                                                                          & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__norpp) 
                                                                             >> 5U))) 
                                                                        & (~ 
                                                                           ((((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__p) 
                                                                              >> 6U) 
                                                                             & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__u1__DOT__g) 
                                                                                >> 5U)) 
                                                                            | ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__u1__DOT__g) 
                                                                               >> 6U))))) 
                                                                      << 7U) 
                                                                     ^ 
                                                                     (0xffffff80U 
                                                                      & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__p)))) 
                                                                 | ((0x40U 
                                                                     & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__c5) 
                                                                         << 6U) 
                                                                        ^ 
                                                                        (0xffffffc0U 
                                                                         & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__p)))) 
                                                                    | ((0x20U 
                                                                        & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__c4) 
                                                                            << 5U) 
                                                                           ^ 
                                                                           (0xffffffe0U 
                                                                            & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__p)))) 
                                                                       | ((0x10U 
                                                                           & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__c3) 
                                                                               << 4U) 
                                                                              ^ 
                                                                              (0xfffffff0U 
                                                                               & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__p)))) 
                                                                          | ((8U 
                                                                              & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__c2) 
                                                                                << 3U) 
                                                                                ^ 
                                                                                (0xfffffff8U 
                                                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__p)))) 
                                                                             | ((4U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__c1) 
                                                                                << 2U) 
                                                                                ^ 
                                                                                (0xfffffffcU 
                                                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__p)))) 
                                                                                | ((2U 
                                                                                & ((0xfffffffeU 
                                                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__p)) 
                                                                                ^ 
                                                                                ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__c0) 
                                                                                << 1U))) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.__PVT__p) 
                                                                                ^ (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.cout)))))))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((0x80U 
                                                                     & (((~ 
                                                                          ((~ 
                                                                            ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__c4) 
                                                                             & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__norpp) 
                                                                                >> 5U))) 
                                                                           & (~ 
                                                                              ((((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__p) 
                                                                                >> 6U) 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__u1__DOT__g) 
                                                                                >> 5U)) 
                                                                               | ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__u1__DOT__g) 
                                                                                >> 6U))))) 
                                                                         << 7U) 
                                                                        ^ 
                                                                        (0xffffff80U 
                                                                         & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__p)))) 
                                                                    | ((0x40U 
                                                                        & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__c5) 
                                                                            << 6U) 
                                                                           ^ 
                                                                           (0xffffffc0U 
                                                                            & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__p)))) 
                                                                       | ((0x20U 
                                                                           & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__c4) 
                                                                               << 5U) 
                                                                              ^ 
                                                                              (0xffffffe0U 
                                                                               & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__p)))) 
                                                                          | ((0x10U 
                                                                              & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__c3) 
                                                                                << 4U) 
                                                                                ^ 
                                                                                (0xfffffff0U 
                                                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__p)))) 
                                                                             | ((8U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__c2) 
                                                                                << 3U) 
                                                                                ^ 
                                                                                (0xfffffff8U 
                                                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__p)))) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__c1) 
                                                                                << 2U) 
                                                                                ^ 
                                                                                (0xfffffffcU 
                                                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__p)))) 
                                                                                | ((2U 
                                                                                & ((0xfffffffeU 
                                                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__p)) 
                                                                                ^ 
                                                                                ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__c0) 
                                                                                << 1U))) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.__PVT__p) 
                                                                                ^ (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.cout)))))))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((0x80000000U 
                                                                       & (((~ 
                                                                            ((~ 
                                                                              ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__c4) 
                                                                               & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__norpp) 
                                                                                >> 5U))) 
                                                                             & (~ 
                                                                                ((((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__p) 
                                                                                >> 6U) 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__u1__DOT__g) 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__u1__DOT__g) 
                                                                                >> 6U))))) 
                                                                           << 0x1fU) 
                                                                          ^ 
                                                                          (0x80000000U 
                                                                           & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__p) 
                                                                              << 0x18U)))) 
                                                                      | ((0x40000000U 
                                                                          & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__c5) 
                                                                              << 0x1eU) 
                                                                             ^ 
                                                                             (0xc0000000U 
                                                                              & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__p) 
                                                                                << 0x18U)))) 
                                                                         | ((0x20000000U 
                                                                             & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__c4) 
                                                                                << 0x1dU) 
                                                                                ^ 
                                                                                (0xe0000000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__p) 
                                                                                << 0x18U)))) 
                                                                            | ((0x10000000U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__c3) 
                                                                                << 0x1cU) 
                                                                                ^ 
                                                                                (0xf0000000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__p) 
                                                                                << 0x18U)))) 
                                                                               | ((0x8000000U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__c2) 
                                                                                << 0x1bU) 
                                                                                ^ 
                                                                                (0xf8000000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__p) 
                                                                                << 0x18U)))) 
                                                                                | ((0x4000000U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__c1) 
                                                                                << 0x1aU) 
                                                                                ^ 
                                                                                (0xfc000000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__p) 
                                                                                << 0x18U)))) 
                                                                                | ((0x2000000U 
                                                                                & ((0xfe000000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__p) 
                                                                                << 0x18U)) 
                                                                                ^ 
                                                                                ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__c0) 
                                                                                << 0x19U))) 
                                                                                | (0x1000000U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.__PVT__p) 
                                                                                ^ (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.cout)) 
                                                                                << 0x18U))))))))) 
                                                                     | (((0x800000U 
                                                                          & (((~ 
                                                                               ((~ 
                                                                                ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__c4) 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__norpp) 
                                                                                >> 5U))) 
                                                                                & (~ 
                                                                                ((((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__p) 
                                                                                >> 6U) 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__u1__DOT__g) 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__u1__DOT__g) 
                                                                                >> 6U))))) 
                                                                              << 0x17U) 
                                                                             ^ 
                                                                             (0xff800000U 
                                                                              & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__p) 
                                                                                << 0x10U)))) 
                                                                         | ((0x400000U 
                                                                             & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__c5) 
                                                                                << 0x16U) 
                                                                                ^ 
                                                                                (0xffc00000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__p) 
                                                                                << 0x10U)))) 
                                                                            | ((0x200000U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__c4) 
                                                                                << 0x15U) 
                                                                                ^ 
                                                                                (0xffe00000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__p) 
                                                                                << 0x10U)))) 
                                                                               | ((0x100000U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__c3) 
                                                                                << 0x14U) 
                                                                                ^ 
                                                                                (0xfff00000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__p) 
                                                                                << 0x10U)))) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__c2) 
                                                                                << 0x13U) 
                                                                                ^ 
                                                                                (0xfff80000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__p) 
                                                                                << 0x10U)))) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__c1) 
                                                                                << 0x12U) 
                                                                                ^ 
                                                                                (0xfffc0000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__p) 
                                                                                << 0x10U)))) 
                                                                                | ((0x20000U 
                                                                                & ((0xfffe0000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__p) 
                                                                                << 0x10U)) 
                                                                                ^ 
                                                                                ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__c0) 
                                                                                << 0x11U))) 
                                                                                | (0x10000U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.__PVT__p) 
                                                                                ^ (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.cout)) 
                                                                                << 0x10U))))))))) 
                                                                        | (((0x8000U 
                                                                             & (((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__c4) 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__norpp) 
                                                                                >> 5U))) 
                                                                                & (~ 
                                                                                ((((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__p) 
                                                                                >> 6U) 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__u1__DOT__g) 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__u1__DOT__g) 
                                                                                >> 6U))))) 
                                                                                << 0xfU) 
                                                                                ^ 
                                                                                (0xffff8000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__p) 
                                                                                << 8U)))) 
                                                                            | ((0x4000U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__c5) 
                                                                                << 0xeU) 
                                                                                ^ 
                                                                                (0xffffc000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__p) 
                                                                                << 8U)))) 
                                                                               | ((0x2000U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__c4) 
                                                                                << 0xdU) 
                                                                                ^ 
                                                                                (0xffffe000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__p) 
                                                                                << 8U)))) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__c3) 
                                                                                << 0xcU) 
                                                                                ^ 
                                                                                (0xfffff000U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__p) 
                                                                                << 8U)))) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__c2) 
                                                                                << 0xbU) 
                                                                                ^ 
                                                                                (0xfffff800U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__p) 
                                                                                << 8U)))) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__c1) 
                                                                                << 0xaU) 
                                                                                ^ 
                                                                                (0xfffffc00U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__p) 
                                                                                << 8U)))) 
                                                                                | ((0x200U 
                                                                                & ((0xfffffe00U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__p) 
                                                                                << 8U)) 
                                                                                ^ 
                                                                                ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__c0) 
                                                                                << 9U))) 
                                                                                | (0x100U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.__PVT__p) 
                                                                                ^ (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.cout)) 
                                                                                << 8U))))))))) 
                                                                           | ((0x80U 
                                                                               & (((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__c4) 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__norpp) 
                                                                                >> 5U))) 
                                                                                & (~ 
                                                                                ((((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__p) 
                                                                                >> 6U) 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__u1__DOT__g) 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__u1__DOT__g) 
                                                                                >> 6U))))) 
                                                                                << 7U) 
                                                                                ^ 
                                                                                (0xffffff80U 
                                                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__p)))) 
                                                                              | ((0x40U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__c5) 
                                                                                << 6U) 
                                                                                ^ 
                                                                                (0xffffffc0U 
                                                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__p)))) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__c4) 
                                                                                << 5U) 
                                                                                ^ 
                                                                                (0xffffffe0U 
                                                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__p)))) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__c3) 
                                                                                << 4U) 
                                                                                ^ 
                                                                                (0xfffffff0U 
                                                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__p)))) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__c2) 
                                                                                << 3U) 
                                                                                ^ 
                                                                                (0xfffffff8U 
                                                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__p)))) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__c1) 
                                                                                << 2U) 
                                                                                ^ 
                                                                                (0xfffffffcU 
                                                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__p)))) 
                                                                                | ((2U 
                                                                                & ((0xfffffffeU 
                                                                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__p)) 
                                                                                ^ 
                                                                                ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__c0) 
                                                                                << 1U))) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.__PVT__p) 
                                                                                ^ (IData)(vlSelf->cin)))))))))))))))))));
}

void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u8__0(VCLA_V3_CLA_v3_8_bit* vlSelf);
void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u7__0(VCLA_V3_CLA_v3_8_bit* vlSelf);
void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u6__0(VCLA_V3_CLA_v3_8_bit* vlSelf);
void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u5__0(VCLA_V3_CLA_v3_8_bit* vlSelf);
void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u4__0(VCLA_V3_CLA_v3_8_bit* vlSelf);
void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u3__0(VCLA_V3_CLA_v3_8_bit* vlSelf);
void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u2__0(VCLA_V3_CLA_v3_8_bit* vlSelf);
void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u1__0(VCLA_V3_CLA_v3_8_bit* vlSelf);
void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u2__1(VCLA_V3_CLA_v3_8_bit* vlSelf);
void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u3__1(VCLA_V3_CLA_v3_8_bit* vlSelf);
void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u4__1(VCLA_V3_CLA_v3_8_bit* vlSelf);
void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u5__1(VCLA_V3_CLA_v3_8_bit* vlSelf);
void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u6__1(VCLA_V3_CLA_v3_8_bit* vlSelf);
void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u7__1(VCLA_V3_CLA_v3_8_bit* vlSelf);
void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u8__1(VCLA_V3_CLA_v3_8_bit* vlSelf);

void VCLA_V3___024root___eval_ico(VCLA_V3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_V3___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u8__0((&vlSymsp->TOP__CLA_V3_64__DOT__u8));
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u7__0((&vlSymsp->TOP__CLA_V3_64__DOT__u7));
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u6__0((&vlSymsp->TOP__CLA_V3_64__DOT__u6));
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u5__0((&vlSymsp->TOP__CLA_V3_64__DOT__u5));
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u4__0((&vlSymsp->TOP__CLA_V3_64__DOT__u4));
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u3__0((&vlSymsp->TOP__CLA_V3_64__DOT__u3));
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u2__0((&vlSymsp->TOP__CLA_V3_64__DOT__u2));
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u1__0((&vlSymsp->TOP__CLA_V3_64__DOT__u1));
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u2__1((&vlSymsp->TOP__CLA_V3_64__DOT__u2));
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u3__1((&vlSymsp->TOP__CLA_V3_64__DOT__u3));
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u4__1((&vlSymsp->TOP__CLA_V3_64__DOT__u4));
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u5__1((&vlSymsp->TOP__CLA_V3_64__DOT__u5));
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u6__1((&vlSymsp->TOP__CLA_V3_64__DOT__u6));
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u7__1((&vlSymsp->TOP__CLA_V3_64__DOT__u7));
        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u8__1((&vlSymsp->TOP__CLA_V3_64__DOT__u8));
        VCLA_V3___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_V3___024root___dump_triggers__act(VCLA_V3___024root* vlSelf);
#endif  // VL_DEBUG

void VCLA_V3___024root___eval_triggers__act(VCLA_V3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_V3___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCLA_V3___024root___dump_triggers__act(vlSelf);
    }
#endif
}

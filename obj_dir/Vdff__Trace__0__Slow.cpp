// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdff__Syms.h"


VL_ATTR_COLD void Vdff___024root__trace_init_sub__TOP__0(Vdff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"data", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"q", false,-1);
    tracep->pushNamePrefix("dff ");
    tracep->declBit(c+1,"data", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"q", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdff___024root__trace_init_top(Vdff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root__trace_init_top\n"); );
    // Body
    Vdff___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdff___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdff___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdff___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdff___024root__trace_register(Vdff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdff___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdff___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdff___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdff___024root__trace_full_sub_0(Vdff___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdff___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root__trace_full_top_0\n"); );
    // Init
    Vdff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdff___024root*>(voidSelf);
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdff___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdff___024root__trace_full_sub_0(Vdff___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->data));
    bufp->fullBit(oldp+2,(vlSelf->clk));
    bufp->fullBit(oldp+3,(vlSelf->q));
}

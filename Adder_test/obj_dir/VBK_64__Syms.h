// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBK_64__SYMS_H_
#define VERILATED_VBK_64__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VBK_64.h"

// INCLUDE MODULE CLASSES
#include "VBK_64___024root.h"
#include "VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3.h"

// SYMS CLASS (contains all model state)
class VBK_64__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VBK_64* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VBK_64___024root               TOP;
    VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3 TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh;
    VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3 TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh;

    // CONSTRUCTORS
    VBK_64__Syms(VerilatedContext* contextp, const char* namep, VBK_64* modelp);
    ~VBK_64__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

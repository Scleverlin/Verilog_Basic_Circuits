// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vks_new_test__Syms_H_
#define _Vks_new_test__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vks_new_test.h"

// SYMS CLASS
class Vks_new_test__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vks_new_test*                  TOPp;
    
    // CREATORS
    Vks_new_test__Syms(Vks_new_test* topp, const char* namep);
    ~Vks_new_test__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard

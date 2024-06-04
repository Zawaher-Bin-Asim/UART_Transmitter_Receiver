// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vuart_tb__pch.h"
#include "Vuart_tb.h"
#include "Vuart_tb___024root.h"

// FUNCTIONS
Vuart_tb__Syms::~Vuart_tb__Syms()
{
}

Vuart_tb__Syms::Vuart_tb__Syms(VerilatedContext* contextp, const char* namep, Vuart_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(78);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}

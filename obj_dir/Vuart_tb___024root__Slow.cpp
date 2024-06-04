// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tb.h for the primary calling header

#include "Vuart_tb__pch.h"
#include "Vuart_tb__Syms.h"
#include "Vuart_tb___024root.h"

void Vuart_tb___024root___ctor_var_reset(Vuart_tb___024root* vlSelf);

Vuart_tb___024root::Vuart_tb___024root(Vuart_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vuart_tb___024root___ctor_var_reset(this);
}

void Vuart_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vuart_tb___024root::~Vuart_tb___024root() {
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tb.h for the primary calling header

#include "Vuart_tb__pch.h"
#include "Vuart_tb__Syms.h"
#include "Vuart_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__stl(Vuart_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart_tb___024root___eval_triggers__stl(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

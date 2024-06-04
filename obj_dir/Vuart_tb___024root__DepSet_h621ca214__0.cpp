// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tb.h for the primary calling header

#include "Vuart_tb__pch.h"
#include "Vuart_tb__Syms.h"
#include "Vuart_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__act(Vuart_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vuart_tb___024root___eval_triggers__act(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->uart_tb__DOT__reset)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__reset__0))));
    vlSelf->__VactTriggered.set(1U, (((~ (IData)(vlSelf->uart_tb__DOT__reset)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__reset__0)) 
                                     | ((IData)(vlSelf->uart_tb__DOT__tx_baud_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__tx_baud_clk__0)))));
    vlSelf->__VactTriggered.set(2U, (((~ (IData)(vlSelf->uart_tb__DOT__reset)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__reset__0)) 
                                     | ((IData)(vlSelf->uart_tb__DOT__rx_baud_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__rx_baud_clk__0)))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->uart_tb__DOT__data_received) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__data_received__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__reset__0 
        = vlSelf->uart_tb__DOT__reset;
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__tx_baud_clk__0 
        = vlSelf->uart_tb__DOT__tx_baud_clk;
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__rx_baud_clk__0 
        = vlSelf->uart_tb__DOT__rx_baud_clk;
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__data_received__0 
        = vlSelf->uart_tb__DOT__data_received;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

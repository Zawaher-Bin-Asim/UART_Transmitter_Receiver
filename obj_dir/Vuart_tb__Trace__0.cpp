// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart_tb__Syms.h"


void Vuart_tb___024root__trace_chg_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vuart_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_chg_0\n"); );
    // Init
    Vuart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tb___024root*>(voidSelf);
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vuart_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vuart_tb___024root__trace_chg_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->uart_tb__DOT__reset));
        bufp->chgBit(oldp+1,(vlSelf->uart_tb__DOT__tx_start));
        bufp->chgBit(oldp+2,(vlSelf->uart_tb__DOT__load));
        bufp->chgCData(oldp+3,(vlSelf->uart_tb__DOT__in),8);
        bufp->chgIData(oldp+4,(vlSelf->uart_tb__DOT__tx_baud_divisor),32);
        bufp->chgIData(oldp+5,(vlSelf->uart_tb__DOT__clk_rate),32);
        bufp->chgCData(oldp+6,(vlSelf->uart_tb__DOT__captured_in),8);
        bufp->chgIData(oldp+7,(vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i),32);
        bufp->chgIData(oldp+8,(VL_SHIFTR_III(32,32,32, vlSelf->uart_tb__DOT__tx_baud_divisor, 3U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+9,(vlSelf->uart_tb__DOT__tx_baud_clk));
        bufp->chgBit(oldp+10,(vlSelf->uart_tb__DOT__rx_baud_clk));
        bufp->chgIData(oldp+11,(vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_counter),32);
        bufp->chgIData(oldp+12,(vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_counter),32);
        bufp->chgBit(oldp+13,(vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_toggle));
        bufp->chgBit(oldp+14,(vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_toggle));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+15,(vlSelf->uart_tb__DOT__data_transmitted));
        bufp->chgBit(oldp+16,(vlSelf->uart_tb__DOT__UART__DOT__tx_enable));
        bufp->chgBit(oldp+17,(vlSelf->uart_tb__DOT__UART__DOT__load_en));
        bufp->chgBit(oldp+18,(vlSelf->uart_tb__DOT__UART__DOT__tx_sel));
        bufp->chgCData(oldp+19,(vlSelf->uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__c_state),2);
        bufp->chgBit(oldp+20,(vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__piso_out));
        bufp->chgSData(oldp+21,(vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__PISO__DOT__q),10);
        bufp->chgCData(oldp+22,(vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__TX_COUNTER__DOT__counter),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+23,(vlSelf->uart_tb__DOT__data_received));
        bufp->chgCData(oldp+24,(vlSelf->uart_tb__DOT__data_out),8);
        bufp->chgBit(oldp+25,(vlSelf->uart_tb__DOT__UART__DOT__get_value));
        bufp->chgBit(oldp+26,(vlSelf->uart_tb__DOT__UART__DOT__stop));
        bufp->chgBit(oldp+27,(vlSelf->uart_tb__DOT__UART__DOT__bit_clr));
        bufp->chgBit(oldp+28,(vlSelf->uart_tb__DOT__UART__DOT__get_output));
        bufp->chgBit(oldp+29,(vlSelf->uart_tb__DOT__UART__DOT__take_value));
        bufp->chgBit(oldp+30,(vlSelf->uart_tb__DOT__UART__DOT__incre_counter));
        bufp->chgCData(oldp+31,(vlSelf->uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__c_state),2);
        bufp->chgCData(oldp+32,(vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__Bit_Counter__DOT__counter),4);
        bufp->chgCData(oldp+33,(vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SAMLE_COUNTER__DOT__counter),3);
        bufp->chgBit(oldp+34,(vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SAMLE_COUNTER__DOT__started));
        bufp->chgSData(oldp+35,(vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__temp),10);
        bufp->chgSData(oldp+36,(vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__q),10);
    }
    bufp->chgBit(oldp+37,(vlSelf->clk));
    bufp->chgBit(oldp+38,(vlSelf->uart_tb__DOT__out));
    bufp->chgBit(oldp+39,((1U & (~ (IData)(vlSelf->uart_tb__DOT__out)))));
    bufp->chgBit(oldp+40,((vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_counter 
                           == (vlSelf->uart_tb__DOT__tx_baud_divisor 
                               - (IData)(1U)))));
    bufp->chgBit(oldp+41,((vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_counter 
                           == (VL_SHIFTR_III(32,32,32, vlSelf->uart_tb__DOT__tx_baud_divisor, 3U) 
                               - (IData)(1U)))));
    bufp->chgCData(oldp+42,(vlSelf->uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__n_state),2);
    bufp->chgCData(oldp+43,(vlSelf->uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__n_state),2);
}

void Vuart_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_cleanup\n"); );
    // Init
    Vuart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tb___024root*>(voidSelf);
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}

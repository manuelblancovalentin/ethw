// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "dense_latency_ap_fixed_ap_fixed_config2_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic dense_latency_ap_fixed_ap_fixed_config2_0_0::ap_const_logic_1 = sc_dt::Log_1;
const bool dense_latency_ap_fixed_ap_fixed_config2_0_0::ap_const_boolean_1 = true;
const sc_lv<32> dense_latency_ap_fixed_ap_fixed_config2_0_0::ap_const_lv32_1 = "1";
const sc_lv<32> dense_latency_ap_fixed_ap_fixed_config2_0_0::ap_const_lv32_F = "1111";
const sc_logic dense_latency_ap_fixed_ap_fixed_config2_0_0::ap_const_logic_0 = sc_dt::Log_0;

dense_latency_ap_fixed_ap_fixed_config2_0_0::dense_latency_ap_fixed_ap_fixed_config2_0_0(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return);
    sensitive << ( data_V_read );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "dense_latency_ap_fixed_ap_fixed_config2_0_0_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, data_V_read, "(port)data_V_read");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif

    }
}

dense_latency_ap_fixed_ap_fixed_config2_0_0::~dense_latency_ap_fixed_ap_fixed_config2_0_0() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void dense_latency_ap_fixed_ap_fixed_config2_0_0::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0::thread_ap_return() {
    ap_return = data_V_read.read().range(15, 1);
}

}

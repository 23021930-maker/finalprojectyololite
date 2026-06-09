set moduleName detection_head
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {detection_head}
set C_modelType { void 0 }
set C_modelArgList {
	{ out_r float 32 regular {array 1024 { 0 3 } 0 1 }  }
	{ f5_0 float 32 regular {fifo 0 volatile }  }
	{ f5_1 float 32 regular {fifo 0 volatile }  }
	{ f5_2 float 32 regular {fifo 0 volatile }  }
	{ f5_3 float 32 regular {fifo 0 volatile }  }
	{ f5_4 float 32 regular {fifo 0 volatile }  }
	{ f5_5 float 32 regular {fifo 0 volatile }  }
	{ f5_6 float 32 regular {fifo 0 volatile }  }
	{ f5_7 float 32 regular {fifo 0 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "out_r", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "f5_0", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "f5_1", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "f5_2", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "f5_3", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "f5_4", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "f5_5", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "f5_6", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "f5_7", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 35
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ out_r_address0 sc_out sc_lv 10 signal 0 } 
	{ out_r_ce0 sc_out sc_logic 1 signal 0 } 
	{ out_r_we0 sc_out sc_logic 1 signal 0 } 
	{ out_r_d0 sc_out sc_lv 32 signal 0 } 
	{ f5_0_dout sc_in sc_lv 32 signal 1 } 
	{ f5_0_empty_n sc_in sc_logic 1 signal 1 } 
	{ f5_0_read sc_out sc_logic 1 signal 1 } 
	{ f5_1_dout sc_in sc_lv 32 signal 2 } 
	{ f5_1_empty_n sc_in sc_logic 1 signal 2 } 
	{ f5_1_read sc_out sc_logic 1 signal 2 } 
	{ f5_2_dout sc_in sc_lv 32 signal 3 } 
	{ f5_2_empty_n sc_in sc_logic 1 signal 3 } 
	{ f5_2_read sc_out sc_logic 1 signal 3 } 
	{ f5_3_dout sc_in sc_lv 32 signal 4 } 
	{ f5_3_empty_n sc_in sc_logic 1 signal 4 } 
	{ f5_3_read sc_out sc_logic 1 signal 4 } 
	{ f5_4_dout sc_in sc_lv 32 signal 5 } 
	{ f5_4_empty_n sc_in sc_logic 1 signal 5 } 
	{ f5_4_read sc_out sc_logic 1 signal 5 } 
	{ f5_5_dout sc_in sc_lv 32 signal 6 } 
	{ f5_5_empty_n sc_in sc_logic 1 signal 6 } 
	{ f5_5_read sc_out sc_logic 1 signal 6 } 
	{ f5_6_dout sc_in sc_lv 32 signal 7 } 
	{ f5_6_empty_n sc_in sc_logic 1 signal 7 } 
	{ f5_6_read sc_out sc_logic 1 signal 7 } 
	{ f5_7_dout sc_in sc_lv 32 signal 8 } 
	{ f5_7_empty_n sc_in sc_logic 1 signal 8 } 
	{ f5_7_read sc_out sc_logic 1 signal 8 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "out_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_r", "role": "address0" }} , 
 	{ "name": "out_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "ce0" }} , 
 	{ "name": "out_r_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "we0" }} , 
 	{ "name": "out_r_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_r", "role": "d0" }} , 
 	{ "name": "f5_0_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "f5_0", "role": "dout" }} , 
 	{ "name": "f5_0_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_0", "role": "empty_n" }} , 
 	{ "name": "f5_0_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_0", "role": "read" }} , 
 	{ "name": "f5_1_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "f5_1", "role": "dout" }} , 
 	{ "name": "f5_1_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_1", "role": "empty_n" }} , 
 	{ "name": "f5_1_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_1", "role": "read" }} , 
 	{ "name": "f5_2_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "f5_2", "role": "dout" }} , 
 	{ "name": "f5_2_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_2", "role": "empty_n" }} , 
 	{ "name": "f5_2_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_2", "role": "read" }} , 
 	{ "name": "f5_3_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "f5_3", "role": "dout" }} , 
 	{ "name": "f5_3_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_3", "role": "empty_n" }} , 
 	{ "name": "f5_3_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_3", "role": "read" }} , 
 	{ "name": "f5_4_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "f5_4", "role": "dout" }} , 
 	{ "name": "f5_4_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_4", "role": "empty_n" }} , 
 	{ "name": "f5_4_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_4", "role": "read" }} , 
 	{ "name": "f5_5_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "f5_5", "role": "dout" }} , 
 	{ "name": "f5_5_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_5", "role": "empty_n" }} , 
 	{ "name": "f5_5_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_5", "role": "read" }} , 
 	{ "name": "f5_6_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "f5_6", "role": "dout" }} , 
 	{ "name": "f5_6_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_6", "role": "empty_n" }} , 
 	{ "name": "f5_6_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_6", "role": "read" }} , 
 	{ "name": "f5_7_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "f5_7", "role": "dout" }} , 
 	{ "name": "f5_7_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_7", "role": "empty_n" }} , 
 	{ "name": "f5_7_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "f5_7", "role": "read" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8"],
		"CDFG" : "detection_head",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "45953", "EstimateLatencyMax" : "45953",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "f5_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "f5_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "f5_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "f5_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "f5_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "f5_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "f5_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "f5_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "f5_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U180", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U181", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U182", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U183", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U184", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fdiv_32ns_32eOg_U185", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fexp_32ns_32fYi_U186", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_mux_164_32_1_1_U187", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	detection_head {
		out_r {Type O LastRead -1 FirstWrite 45}
		f5_0 {Type I LastRead 4 FirstWrite -1}
		f5_1 {Type I LastRead 4 FirstWrite -1}
		f5_2 {Type I LastRead 4 FirstWrite -1}
		f5_3 {Type I LastRead 4 FirstWrite -1}
		f5_4 {Type I LastRead 4 FirstWrite -1}
		f5_5 {Type I LastRead 4 FirstWrite -1}
		f5_6 {Type I LastRead 4 FirstWrite -1}
		f5_7 {Type I LastRead 4 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "45953", "Max" : "45953"}
	, {"Name" : "Interval", "Min" : "45953", "Max" : "45953"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	out_r { ap_memory {  { out_r_address0 mem_address 1 10 }  { out_r_ce0 mem_ce 1 1 }  { out_r_we0 mem_we 1 1 }  { out_r_d0 mem_din 1 32 } } }
	f5_0 { ap_fifo {  { f5_0_dout fifo_data 0 32 }  { f5_0_empty_n fifo_status 0 1 }  { f5_0_read fifo_update 1 1 } } }
	f5_1 { ap_fifo {  { f5_1_dout fifo_data 0 32 }  { f5_1_empty_n fifo_status 0 1 }  { f5_1_read fifo_update 1 1 } } }
	f5_2 { ap_fifo {  { f5_2_dout fifo_data 0 32 }  { f5_2_empty_n fifo_status 0 1 }  { f5_2_read fifo_update 1 1 } } }
	f5_3 { ap_fifo {  { f5_3_dout fifo_data 0 32 }  { f5_3_empty_n fifo_status 0 1 }  { f5_3_read fifo_update 1 1 } } }
	f5_4 { ap_fifo {  { f5_4_dout fifo_data 0 32 }  { f5_4_empty_n fifo_status 0 1 }  { f5_4_read fifo_update 1 1 } } }
	f5_5 { ap_fifo {  { f5_5_dout fifo_data 0 32 }  { f5_5_empty_n fifo_status 0 1 }  { f5_5_read fifo_update 1 1 } } }
	f5_6 { ap_fifo {  { f5_6_dout fifo_data 0 32 }  { f5_6_empty_n fifo_status 0 1 }  { f5_6_read fifo_update 1 1 } } }
	f5_7 { ap_fifo {  { f5_7_dout fifo_data 0 32 }  { f5_7_empty_n fifo_status 0 1 }  { f5_7_read fifo_update 1 1 } } }
}

set moduleName conv1
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
set C_modelName {conv1}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_0 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ in_1 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ in_2 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ out_0 float 32 regular {fifo 1 volatile }  }
	{ out_1 float 32 regular {fifo 1 volatile }  }
	{ out_2 float 32 regular {fifo 1 volatile }  }
	{ out_3 float 32 regular {fifo 1 volatile }  }
	{ out_4 float 32 regular {fifo 1 volatile }  }
	{ out_5 float 32 regular {fifo 1 volatile }  }
	{ out_6 float 32 regular {fifo 1 volatile }  }
	{ out_7 float 32 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "out_0", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_1", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_2", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_3", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_4", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_5", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_6", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_7", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 52
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ in_0_address0 sc_out sc_lv 12 signal 0 } 
	{ in_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ in_0_q0 sc_in sc_lv 32 signal 0 } 
	{ in_0_address1 sc_out sc_lv 12 signal 0 } 
	{ in_0_ce1 sc_out sc_logic 1 signal 0 } 
	{ in_0_q1 sc_in sc_lv 32 signal 0 } 
	{ in_1_address0 sc_out sc_lv 12 signal 1 } 
	{ in_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ in_1_q0 sc_in sc_lv 32 signal 1 } 
	{ in_1_address1 sc_out sc_lv 12 signal 1 } 
	{ in_1_ce1 sc_out sc_logic 1 signal 1 } 
	{ in_1_q1 sc_in sc_lv 32 signal 1 } 
	{ in_2_address0 sc_out sc_lv 12 signal 2 } 
	{ in_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ in_2_q0 sc_in sc_lv 32 signal 2 } 
	{ in_2_address1 sc_out sc_lv 12 signal 2 } 
	{ in_2_ce1 sc_out sc_logic 1 signal 2 } 
	{ in_2_q1 sc_in sc_lv 32 signal 2 } 
	{ out_0_din sc_out sc_lv 32 signal 3 } 
	{ out_0_full_n sc_in sc_logic 1 signal 3 } 
	{ out_0_write sc_out sc_logic 1 signal 3 } 
	{ out_1_din sc_out sc_lv 32 signal 4 } 
	{ out_1_full_n sc_in sc_logic 1 signal 4 } 
	{ out_1_write sc_out sc_logic 1 signal 4 } 
	{ out_2_din sc_out sc_lv 32 signal 5 } 
	{ out_2_full_n sc_in sc_logic 1 signal 5 } 
	{ out_2_write sc_out sc_logic 1 signal 5 } 
	{ out_3_din sc_out sc_lv 32 signal 6 } 
	{ out_3_full_n sc_in sc_logic 1 signal 6 } 
	{ out_3_write sc_out sc_logic 1 signal 6 } 
	{ out_4_din sc_out sc_lv 32 signal 7 } 
	{ out_4_full_n sc_in sc_logic 1 signal 7 } 
	{ out_4_write sc_out sc_logic 1 signal 7 } 
	{ out_5_din sc_out sc_lv 32 signal 8 } 
	{ out_5_full_n sc_in sc_logic 1 signal 8 } 
	{ out_5_write sc_out sc_logic 1 signal 8 } 
	{ out_6_din sc_out sc_lv 32 signal 9 } 
	{ out_6_full_n sc_in sc_logic 1 signal 9 } 
	{ out_6_write sc_out sc_logic 1 signal 9 } 
	{ out_7_din sc_out sc_lv 32 signal 10 } 
	{ out_7_full_n sc_in sc_logic 1 signal 10 } 
	{ out_7_write sc_out sc_logic 1 signal 10 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "in_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "in_0", "role": "address0" }} , 
 	{ "name": "in_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_0", "role": "ce0" }} , 
 	{ "name": "in_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_0", "role": "q0" }} , 
 	{ "name": "in_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "in_0", "role": "address1" }} , 
 	{ "name": "in_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_0", "role": "ce1" }} , 
 	{ "name": "in_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_0", "role": "q1" }} , 
 	{ "name": "in_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "in_1", "role": "address0" }} , 
 	{ "name": "in_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_1", "role": "ce0" }} , 
 	{ "name": "in_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_1", "role": "q0" }} , 
 	{ "name": "in_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "in_1", "role": "address1" }} , 
 	{ "name": "in_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_1", "role": "ce1" }} , 
 	{ "name": "in_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_1", "role": "q1" }} , 
 	{ "name": "in_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "in_2", "role": "address0" }} , 
 	{ "name": "in_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_2", "role": "ce0" }} , 
 	{ "name": "in_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_2", "role": "q0" }} , 
 	{ "name": "in_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "in_2", "role": "address1" }} , 
 	{ "name": "in_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_2", "role": "ce1" }} , 
 	{ "name": "in_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_2", "role": "q1" }} , 
 	{ "name": "out_0_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_0", "role": "din" }} , 
 	{ "name": "out_0_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_0", "role": "full_n" }} , 
 	{ "name": "out_0_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_0", "role": "write" }} , 
 	{ "name": "out_1_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_1", "role": "din" }} , 
 	{ "name": "out_1_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_1", "role": "full_n" }} , 
 	{ "name": "out_1_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_1", "role": "write" }} , 
 	{ "name": "out_2_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_2", "role": "din" }} , 
 	{ "name": "out_2_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_2", "role": "full_n" }} , 
 	{ "name": "out_2_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_2", "role": "write" }} , 
 	{ "name": "out_3_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_3", "role": "din" }} , 
 	{ "name": "out_3_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_3", "role": "full_n" }} , 
 	{ "name": "out_3_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_3", "role": "write" }} , 
 	{ "name": "out_4_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_4", "role": "din" }} , 
 	{ "name": "out_4_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_4", "role": "full_n" }} , 
 	{ "name": "out_4_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_4", "role": "write" }} , 
 	{ "name": "out_5_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_5", "role": "din" }} , 
 	{ "name": "out_5_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_5", "role": "full_n" }} , 
 	{ "name": "out_5_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_5", "role": "write" }} , 
 	{ "name": "out_6_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_6", "role": "din" }} , 
 	{ "name": "out_6_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_6", "role": "full_n" }} , 
 	{ "name": "out_6_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_6", "role": "write" }} , 
 	{ "name": "out_7_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_7", "role": "din" }} , 
 	{ "name": "out_7_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_7", "role": "full_n" }} , 
 	{ "name": "out_7_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_7", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13"],
		"CDFG" : "conv1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "153904", "EstimateLatencyMax" : "153904",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "in_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "in_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U2", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U3", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U4", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U5", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U6", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U7", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U8", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U9", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U10", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U11", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U12", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fcmp_32ns_32dEe_U13", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	conv1 {
		in_0 {Type I LastRead 7 FirstWrite -1}
		in_1 {Type I LastRead 7 FirstWrite -1}
		in_2 {Type I LastRead 7 FirstWrite -1}
		out_0 {Type O LastRead -1 FirstWrite 148}
		out_1 {Type O LastRead -1 FirstWrite 148}
		out_2 {Type O LastRead -1 FirstWrite 148}
		out_3 {Type O LastRead -1 FirstWrite 148}
		out_4 {Type O LastRead -1 FirstWrite 148}
		out_5 {Type O LastRead -1 FirstWrite 148}
		out_6 {Type O LastRead -1 FirstWrite 148}
		out_7 {Type O LastRead -1 FirstWrite 148}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "153904", "Max" : "153904"}
	, {"Name" : "Interval", "Min" : "153904", "Max" : "153904"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	in_0 { ap_memory {  { in_0_address0 mem_address 1 12 }  { in_0_ce0 mem_ce 1 1 }  { in_0_q0 mem_dout 0 32 }  { in_0_address1 MemPortADDR2 1 12 }  { in_0_ce1 MemPortCE2 1 1 }  { in_0_q1 MemPortDOUT2 0 32 } } }
	in_1 { ap_memory {  { in_1_address0 mem_address 1 12 }  { in_1_ce0 mem_ce 1 1 }  { in_1_q0 mem_dout 0 32 }  { in_1_address1 MemPortADDR2 1 12 }  { in_1_ce1 MemPortCE2 1 1 }  { in_1_q1 MemPortDOUT2 0 32 } } }
	in_2 { ap_memory {  { in_2_address0 mem_address 1 12 }  { in_2_ce0 mem_ce 1 1 }  { in_2_q0 mem_dout 0 32 }  { in_2_address1 MemPortADDR2 1 12 }  { in_2_ce1 MemPortCE2 1 1 }  { in_2_q1 MemPortDOUT2 0 32 } } }
	out_0 { ap_fifo {  { out_0_din fifo_data 1 32 }  { out_0_full_n fifo_status 0 1 }  { out_0_write fifo_update 1 1 } } }
	out_1 { ap_fifo {  { out_1_din fifo_data 1 32 }  { out_1_full_n fifo_status 0 1 }  { out_1_write fifo_update 1 1 } } }
	out_2 { ap_fifo {  { out_2_din fifo_data 1 32 }  { out_2_full_n fifo_status 0 1 }  { out_2_write fifo_update 1 1 } } }
	out_3 { ap_fifo {  { out_3_din fifo_data 1 32 }  { out_3_full_n fifo_status 0 1 }  { out_3_write fifo_update 1 1 } } }
	out_4 { ap_fifo {  { out_4_din fifo_data 1 32 }  { out_4_full_n fifo_status 0 1 }  { out_4_write fifo_update 1 1 } } }
	out_5 { ap_fifo {  { out_5_din fifo_data 1 32 }  { out_5_full_n fifo_status 0 1 }  { out_5_write fifo_update 1 1 } } }
	out_6 { ap_fifo {  { out_6_din fifo_data 1 32 }  { out_6_full_n fifo_status 0 1 }  { out_6_write fifo_update 1 1 } } }
	out_7 { ap_fifo {  { out_7_din fifo_data 1 32 }  { out_7_full_n fifo_status 0 1 }  { out_7_write fifo_update 1 1 } } }
}

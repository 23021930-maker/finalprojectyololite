set moduleName topp
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {topp}
set C_modelType { void 0 }
set C_modelArgList {
	{ image_r float 32 regular {array 12288 { 1 3 } 1 1 }  }
	{ output_r float 32 regular {array 1024 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "image_r", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "image","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 63,"step" : 1},{"low" : 0,"up" : 63,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}]} , 
 	{ "Name" : "output_r", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "output","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 7,"step" : 1},{"low" : 0,"up" : 7,"step" : 1},{"low" : 0,"up" : 15,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 26
set portList { 
	{ image_r_address0 sc_out sc_lv 14 signal 0 } 
	{ image_r_ce0 sc_out sc_logic 1 signal 0 } 
	{ image_r_d0 sc_out sc_lv 32 signal 0 } 
	{ image_r_q0 sc_in sc_lv 32 signal 0 } 
	{ image_r_we0 sc_out sc_logic 1 signal 0 } 
	{ image_r_address1 sc_out sc_lv 14 signal 0 } 
	{ image_r_ce1 sc_out sc_logic 1 signal 0 } 
	{ image_r_d1 sc_out sc_lv 32 signal 0 } 
	{ image_r_q1 sc_in sc_lv 32 signal 0 } 
	{ image_r_we1 sc_out sc_logic 1 signal 0 } 
	{ output_r_address0 sc_out sc_lv 10 signal 1 } 
	{ output_r_ce0 sc_out sc_logic 1 signal 1 } 
	{ output_r_d0 sc_out sc_lv 32 signal 1 } 
	{ output_r_q0 sc_in sc_lv 32 signal 1 } 
	{ output_r_we0 sc_out sc_logic 1 signal 1 } 
	{ output_r_address1 sc_out sc_lv 10 signal 1 } 
	{ output_r_ce1 sc_out sc_logic 1 signal 1 } 
	{ output_r_d1 sc_out sc_lv 32 signal 1 } 
	{ output_r_q1 sc_in sc_lv 32 signal 1 } 
	{ output_r_we1 sc_out sc_logic 1 signal 1 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "image_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "image_r", "role": "address0" }} , 
 	{ "name": "image_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_r", "role": "ce0" }} , 
 	{ "name": "image_r_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_r", "role": "d0" }} , 
 	{ "name": "image_r_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_r", "role": "q0" }} , 
 	{ "name": "image_r_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_r", "role": "we0" }} , 
 	{ "name": "image_r_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "image_r", "role": "address1" }} , 
 	{ "name": "image_r_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_r", "role": "ce1" }} , 
 	{ "name": "image_r_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_r", "role": "d1" }} , 
 	{ "name": "image_r_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_r", "role": "q1" }} , 
 	{ "name": "image_r_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_r", "role": "we1" }} , 
 	{ "name": "output_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "output_r", "role": "address0" }} , 
 	{ "name": "output_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_r", "role": "ce0" }} , 
 	{ "name": "output_r_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_r", "role": "d0" }} , 
 	{ "name": "output_r_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_r", "role": "q0" }} , 
 	{ "name": "output_r_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_r", "role": "we0" }} , 
 	{ "name": "output_r_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "output_r", "role": "address1" }} , 
 	{ "name": "output_r_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_r", "role": "ce1" }} , 
 	{ "name": "output_r_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_r", "role": "d1" }} , 
 	{ "name": "output_r_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_r", "role": "q1" }} , 
 	{ "name": "output_r_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_r", "role": "we1" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "8", "10", "18", "20", "27", "34", "40", "46", "47", "48", "49", "50", "51", "52"],
		"CDFG" : "topp",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "400519", "EstimateLatencyMax" : "35448071",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "conv1_U0"}],
		"OutputProcess" : [
			{"ID" : "40", "Name" : "detection_head_U0"}],
		"Port" : [
			{"Name" : "image_r", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "in_r"}]},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "40", "SubInstance" : "detection_head_U0", "Port" : "out_r"}]},
			{"Name" : "linbu_4_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_0"}]},
			{"Name" : "linbu_4_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_1"}]},
			{"Name" : "f1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "maxpool1_U0", "Port" : "f1"},
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "out_r"}]},
			{"Name" : "p1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv2_U0", "Port" : "p1"},
					{"ID" : "8", "SubInstance" : "maxpool1_U0", "Port" : "p1"}]},
			{"Name" : "linbu_5_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0"}]},
			{"Name" : "linbu_5_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1"}]},
			{"Name" : "f2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv2_U0", "Port" : "out_r"},
					{"ID" : "18", "SubInstance" : "maxpool2_U0", "Port" : "f2"}]},
			{"Name" : "p2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "conv3_U0", "Port" : "p2"},
					{"ID" : "18", "SubInstance" : "maxpool2_U0", "Port" : "p2"}]},
			{"Name" : "linbu_6_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0"}]},
			{"Name" : "linbu_6_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1"}]},
			{"Name" : "f3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "conv3_U0", "Port" : "out_r"},
					{"ID" : "27", "SubInstance" : "conv4_U0", "Port" : "f3"}]},
			{"Name" : "linbu_7_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "27", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0"}]},
			{"Name" : "linbu_7_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "27", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1"}]},
			{"Name" : "f4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "conv5_U0", "Port" : "f4"},
					{"ID" : "27", "SubInstance" : "conv4_U0", "Port" : "out_r"}]},
			{"Name" : "linbu_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "conv5_U0", "Port" : "linbu_0"}]},
			{"Name" : "linbu_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "conv5_U0", "Port" : "linbu_1"}]},
			{"Name" : "f5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "conv5_U0", "Port" : "out_r"},
					{"ID" : "40", "SubInstance" : "detection_head_U0", "Port" : "f5"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_U0", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7"],
		"CDFG" : "conv1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "110721", "EstimateLatencyMax" : "9842817",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_r", "Type" : "Memory", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "46"},
			{"Name" : "linbu_4_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_4_1", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_0_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_1_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.win_buf_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fadd_32ns_32bkb_U1", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fmul_32ns_32cud_U2", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fcmp_32ns_32dEe_U3", "Parent" : "1"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.maxpool1_U0", "Parent" : "0", "Child" : ["9"],
		"CDFG" : "maxpool1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "86553", "EstimateLatencyMax" : "86553",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "f1", "Type" : "Memory", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "46"},
			{"Name" : "p1", "Type" : "Memory", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "47"}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.maxpool1_U0.topp_fcmp_32ns_32dEe_U11", "Parent" : "8"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2_U0", "Parent" : "0", "Child" : ["11", "12", "13", "14", "15", "16", "17"],
		"CDFG" : "conv2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "64450", "EstimateLatencyMax" : "12657394",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_r", "Type" : "Memory", "Direction" : "O", "DependentProc" : "18", "DependentChan" : "48"},
			{"Name" : "p1", "Type" : "Memory", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "47"},
			{"Name" : "linbu_5_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_U", "Parent" : "10"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.win_buf_U", "Parent" : "10"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fadd_32ns_32bkb_U14", "Parent" : "10"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fmul_32ns_32cud_U15", "Parent" : "10"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fcmp_32ns_32dEe_U16", "Parent" : "10"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_am_addmul_5neOg_U17", "Parent" : "10"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.maxpool2_U0", "Parent" : "0", "Child" : ["19"],
		"CDFG" : "maxpool2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "34917", "EstimateLatencyMax" : "34917",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "f2", "Type" : "Memory", "Direction" : "I", "DependentProc" : "10", "DependentChan" : "48"},
			{"Name" : "p2", "Type" : "Memory", "Direction" : "O", "DependentProc" : "20", "DependentChan" : "49"}]},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.maxpool2_U0.topp_fcmp_32ns_32dEe_U23", "Parent" : "18"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv3_U0", "Parent" : "0", "Child" : ["21", "22", "23", "24", "25", "26"],
		"CDFG" : "conv3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "25705", "EstimateLatencyMax" : "10129897",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_r", "Type" : "Memory", "Direction" : "O", "DependentProc" : "27", "DependentChan" : "50"},
			{"Name" : "p2", "Type" : "Memory", "Direction" : "I", "DependentProc" : "18", "DependentChan" : "49"},
			{"Name" : "linbu_6_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_U", "Parent" : "20"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_U", "Parent" : "20"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_U", "Parent" : "20"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fadd_32ns_32bkb_U26", "Parent" : "20"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fmul_32ns_32cud_U27", "Parent" : "20"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fcmp_32ns_32dEe_U28", "Parent" : "20"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv4_U0", "Parent" : "0", "Child" : ["28", "29", "30", "31", "32", "33"],
		"CDFG" : "conv4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "37321", "EstimateLatencyMax" : "14759881",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_r", "Type" : "Memory", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "51"},
			{"Name" : "linbu_7_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "f3", "Type" : "Memory", "Direction" : "I", "DependentProc" : "20", "DependentChan" : "50"}]},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_U", "Parent" : "27"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_U", "Parent" : "27"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_U", "Parent" : "27"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fadd_32ns_32bkb_U33", "Parent" : "27"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fmul_32ns_32cud_U34", "Parent" : "27"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fcmp_32ns_32dEe_U35", "Parent" : "27"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv5_U0", "Parent" : "0", "Child" : ["35", "36", "37", "38", "39"],
		"CDFG" : "conv5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "25921", "EstimateLatencyMax" : "10246721",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_r", "Type" : "Memory", "Direction" : "O", "DependentProc" : "40", "DependentChan" : "52"},
			{"Name" : "linbu_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "f4", "Type" : "Memory", "Direction" : "I", "DependentProc" : "27", "DependentChan" : "51"}]},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_U", "Parent" : "34"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_U", "Parent" : "34"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_U", "Parent" : "34"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fadd_32ns_32bkb_U40", "Parent" : "34"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fmul_32ns_32cud_U41", "Parent" : "34"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.detection_head_U0", "Parent" : "0", "Child" : ["41", "42", "43", "44", "45"],
		"CDFG" : "detection_head",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "311569", "EstimateLatencyMax" : "311569",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "f5", "Type" : "Memory", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "52"}]},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.sum_U", "Parent" : "40"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U45", "Parent" : "40"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fmul_32ns_32cud_U46", "Parent" : "40"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fdiv_32ns_32fYi_U47", "Parent" : "40"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fexp_32ns_32g8j_U48", "Parent" : "40"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	topp {
		image_r {Type I LastRead 9 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 37}
		linbu_4_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_1 {Type IO LastRead -1 FirstWrite -1}
		f1 {Type IO LastRead -1 FirstWrite -1}
		p1 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1 {Type IO LastRead -1 FirstWrite -1}
		f2 {Type IO LastRead -1 FirstWrite -1}
		p2 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1 {Type IO LastRead -1 FirstWrite -1}
		f3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1 {Type IO LastRead -1 FirstWrite -1}
		f4 {Type IO LastRead -1 FirstWrite -1}
		linbu_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1 {Type IO LastRead -1 FirstWrite -1}
		f5 {Type IO LastRead -1 FirstWrite -1}}
	conv1 {
		in_r {Type I LastRead 9 FirstWrite -1}
		out_r {Type O LastRead -1 FirstWrite 6}
		linbu_4_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_1 {Type IO LastRead -1 FirstWrite -1}}
	maxpool1 {
		f1 {Type I LastRead 12 FirstWrite -1}
		p1 {Type O LastRead -1 FirstWrite 13}}
	conv2 {
		out_r {Type O LastRead -1 FirstWrite 6}
		p1 {Type I LastRead 9 FirstWrite -1}
		linbu_5_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1 {Type IO LastRead -1 FirstWrite -1}}
	maxpool2 {
		f2 {Type I LastRead 12 FirstWrite -1}
		p2 {Type O LastRead -1 FirstWrite 13}}
	conv3 {
		out_r {Type O LastRead -1 FirstWrite 6}
		p2 {Type I LastRead 9 FirstWrite -1}
		linbu_6_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1 {Type IO LastRead -1 FirstWrite -1}}
	conv4 {
		out_r {Type O LastRead -1 FirstWrite 6}
		linbu_7_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1 {Type IO LastRead -1 FirstWrite -1}
		f3 {Type I LastRead 9 FirstWrite -1}}
	conv5 {
		out_r {Type O LastRead -1 FirstWrite 5}
		linbu_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1 {Type IO LastRead -1 FirstWrite -1}
		f4 {Type I LastRead 9 FirstWrite -1}}
	detection_head {
		out_r {Type O LastRead -1 FirstWrite 37}
		f5 {Type I LastRead 4 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "400519", "Max" : "35448071"}
	, {"Name" : "Interval", "Min" : "311570", "Max" : "14759882"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	image_r { ap_memory {  { image_r_address0 mem_address 1 14 }  { image_r_ce0 mem_ce 1 1 }  { image_r_d0 mem_din 1 32 }  { image_r_q0 mem_dout 0 32 }  { image_r_we0 mem_we 1 1 }  { image_r_address1 mem_address 1 14 }  { image_r_ce1 mem_ce 1 1 }  { image_r_d1 mem_din 1 32 }  { image_r_q1 mem_dout 0 32 }  { image_r_we1 mem_we 1 1 } } }
	output_r { ap_memory {  { output_r_address0 mem_address 1 10 }  { output_r_ce0 mem_ce 1 1 }  { output_r_d0 mem_din 1 32 }  { output_r_q0 mem_dout 0 32 }  { output_r_we0 mem_we 1 1 }  { output_r_address1 mem_address 1 10 }  { output_r_ce1 mem_ce 1 1 }  { output_r_d1 mem_din 1 32 }  { output_r_q1 mem_dout 0 32 }  { output_r_we1 mem_we 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}

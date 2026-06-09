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
	{ image_r float 32 regular {array 12288 { 1 1 } 1 1 }  }
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "12", "13", "34", "35", "144", "285", "425", "434", "435", "436", "437", "438", "439", "440", "441", "442", "443", "444", "445", "446", "447", "448", "449", "450", "451", "452", "453", "454", "455", "456", "457", "458", "459", "460", "461", "462", "463", "464", "465", "466", "467", "468", "469", "470", "471", "472", "473", "474", "475", "476", "477", "478", "479", "480", "481", "482", "483", "484", "485", "486", "487", "488", "489", "490", "491", "492", "493", "494", "495", "496"],
		"CDFG" : "topp",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "146981", "EstimateLatencyMax" : "14730040",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "conv1_U0"}],
		"OutputProcess" : [
			{"ID" : "425", "Name" : "detection_head_U0"}],
		"Port" : [
			{"Name" : "image_r", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "in_r"}]},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "425", "SubInstance" : "detection_head_U0", "Port" : "out_r"}]},
			{"Name" : "linbu_4_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_0_0"}]},
			{"Name" : "linbu_4_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_1_0"}]},
			{"Name" : "linbu_4_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_0_1"}]},
			{"Name" : "linbu_4_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_1_1"}]},
			{"Name" : "linbu_4_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_0_2"}]},
			{"Name" : "linbu_4_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_1_2"}]},
			{"Name" : "linbu_5_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_0"}]},
			{"Name" : "linbu_5_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_0"}]},
			{"Name" : "linbu_5_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_1"}]},
			{"Name" : "linbu_5_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_1"}]},
			{"Name" : "linbu_5_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_2"}]},
			{"Name" : "linbu_5_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_2"}]},
			{"Name" : "linbu_5_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_3"}]},
			{"Name" : "linbu_5_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_3"}]},
			{"Name" : "linbu_5_0_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_4"}]},
			{"Name" : "linbu_5_1_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_4"}]},
			{"Name" : "linbu_5_0_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_5"}]},
			{"Name" : "linbu_5_1_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_5"}]},
			{"Name" : "linbu_5_0_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_6"}]},
			{"Name" : "linbu_5_1_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_6"}]},
			{"Name" : "linbu_5_0_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_7"}]},
			{"Name" : "linbu_5_1_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_7"}]},
			{"Name" : "linbu_6_0_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_0_0"}]},
			{"Name" : "linbu_6_1_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_0_0"}]},
			{"Name" : "linbu_6_0_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_1_0"}]},
			{"Name" : "linbu_6_1_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_1_0"}]},
			{"Name" : "linbu_6_0_2_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_2_0"}]},
			{"Name" : "linbu_6_1_2_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_2_0"}]},
			{"Name" : "linbu_6_0_3_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_3_0"}]},
			{"Name" : "linbu_6_1_3_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_3_0"}]},
			{"Name" : "linbu_6_0_4_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_4_0"}]},
			{"Name" : "linbu_6_1_4_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_4_0"}]},
			{"Name" : "linbu_6_0_5_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_5_0"}]},
			{"Name" : "linbu_6_1_5_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_5_0"}]},
			{"Name" : "linbu_6_0_6_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_6_0"}]},
			{"Name" : "linbu_6_1_6_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_6_0"}]},
			{"Name" : "linbu_6_0_7_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_7_0"}]},
			{"Name" : "linbu_6_1_7_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_7_0"}]},
			{"Name" : "linbu_6_0_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_0_1"}]},
			{"Name" : "linbu_6_1_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_0_1"}]},
			{"Name" : "linbu_6_0_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_1_1"}]},
			{"Name" : "linbu_6_1_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_1_1"}]},
			{"Name" : "linbu_6_0_2_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_2_1"}]},
			{"Name" : "linbu_6_1_2_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_2_1"}]},
			{"Name" : "linbu_6_0_3_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_3_1"}]},
			{"Name" : "linbu_6_1_3_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_3_1"}]},
			{"Name" : "linbu_6_0_4_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_4_1"}]},
			{"Name" : "linbu_6_1_4_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_4_1"}]},
			{"Name" : "linbu_6_0_5_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_5_1"}]},
			{"Name" : "linbu_6_1_5_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_5_1"}]},
			{"Name" : "linbu_6_0_6_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_6_1"}]},
			{"Name" : "linbu_6_1_6_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_6_1"}]},
			{"Name" : "linbu_6_0_7_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_7_1"}]},
			{"Name" : "linbu_6_1_7_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_7_1"}]},
			{"Name" : "linbu_7_0_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_0_0"}]},
			{"Name" : "linbu_7_1_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_0_0"}]},
			{"Name" : "linbu_7_0_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_1_0"}]},
			{"Name" : "linbu_7_1_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_1_0"}]},
			{"Name" : "linbu_7_0_2_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_2_0"}]},
			{"Name" : "linbu_7_1_2_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_2_0"}]},
			{"Name" : "linbu_7_0_3_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_3_0"}]},
			{"Name" : "linbu_7_1_3_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_3_0"}]},
			{"Name" : "linbu_7_0_4_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_4_0"}]},
			{"Name" : "linbu_7_1_4_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_4_0"}]},
			{"Name" : "linbu_7_0_5_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_5_0"}]},
			{"Name" : "linbu_7_1_5_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_5_0"}]},
			{"Name" : "linbu_7_0_6_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_6_0"}]},
			{"Name" : "linbu_7_1_6_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_6_0"}]},
			{"Name" : "linbu_7_0_7_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_7_0"}]},
			{"Name" : "linbu_7_1_7_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_7_0"}]},
			{"Name" : "linbu_7_0_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_0_1"}]},
			{"Name" : "linbu_7_1_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_0_1"}]},
			{"Name" : "linbu_7_0_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_1_1"}]},
			{"Name" : "linbu_7_1_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_1_1"}]},
			{"Name" : "linbu_7_0_2_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_2_1"}]},
			{"Name" : "linbu_7_1_2_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_2_1"}]},
			{"Name" : "linbu_7_0_3_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_3_1"}]},
			{"Name" : "linbu_7_1_3_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_3_1"}]},
			{"Name" : "linbu_7_0_4_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_4_1"}]},
			{"Name" : "linbu_7_1_4_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_4_1"}]},
			{"Name" : "linbu_7_0_5_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_5_1"}]},
			{"Name" : "linbu_7_1_5_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_5_1"}]},
			{"Name" : "linbu_7_0_6_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_6_1"}]},
			{"Name" : "linbu_7_1_6_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_6_1"}]},
			{"Name" : "linbu_7_0_7_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_7_1"}]},
			{"Name" : "linbu_7_1_7_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_7_1"}]},
			{"Name" : "linbu_7_0_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_0_2"}]},
			{"Name" : "linbu_7_1_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_0_2"}]},
			{"Name" : "linbu_7_0_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_1_2"}]},
			{"Name" : "linbu_7_1_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_1_2"}]},
			{"Name" : "linbu_7_0_2_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_2_2"}]},
			{"Name" : "linbu_7_1_2_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_2_2"}]},
			{"Name" : "linbu_7_0_3_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_3_2"}]},
			{"Name" : "linbu_7_1_3_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_3_2"}]},
			{"Name" : "linbu_7_0_4_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_4_2"}]},
			{"Name" : "linbu_7_1_4_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_4_2"}]},
			{"Name" : "linbu_7_0_5_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_5_2"}]},
			{"Name" : "linbu_7_1_5_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_5_2"}]},
			{"Name" : "linbu_7_0_6_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_6_2"}]},
			{"Name" : "linbu_7_1_6_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_6_2"}]},
			{"Name" : "linbu_7_0_7_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_7_2"}]},
			{"Name" : "linbu_7_1_7_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_7_2"}]},
			{"Name" : "linbu_7_0_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_0_3"}]},
			{"Name" : "linbu_7_1_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_0_3"}]},
			{"Name" : "linbu_7_0_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_1_3"}]},
			{"Name" : "linbu_7_1_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_1_3"}]},
			{"Name" : "linbu_7_0_2_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_2_3"}]},
			{"Name" : "linbu_7_1_2_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_2_3"}]},
			{"Name" : "linbu_7_0_3_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_3_3"}]},
			{"Name" : "linbu_7_1_3_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_3_3"}]},
			{"Name" : "linbu_7_0_4_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_4_3"}]},
			{"Name" : "linbu_7_1_4_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_4_3"}]},
			{"Name" : "linbu_7_0_5_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_5_3"}]},
			{"Name" : "linbu_7_1_5_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_5_3"}]},
			{"Name" : "linbu_7_0_6_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_6_3"}]},
			{"Name" : "linbu_7_1_6_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_6_3"}]},
			{"Name" : "linbu_7_0_7_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_7_3"}]},
			{"Name" : "linbu_7_1_7_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_7_3"}]},
			{"Name" : "linbu_0_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_0_0"}]},
			{"Name" : "linbu_1_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_0_0"}]},
			{"Name" : "linbu_0_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_1_0"}]},
			{"Name" : "linbu_1_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_1_0"}]},
			{"Name" : "linbu_0_2_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_2_0"}]},
			{"Name" : "linbu_1_2_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_2_0"}]},
			{"Name" : "linbu_0_3_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_3_0"}]},
			{"Name" : "linbu_1_3_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_3_0"}]},
			{"Name" : "linbu_0_4_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_4_0"}]},
			{"Name" : "linbu_1_4_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_4_0"}]},
			{"Name" : "linbu_0_5_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_5_0"}]},
			{"Name" : "linbu_1_5_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_5_0"}]},
			{"Name" : "linbu_0_6_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_6_0"}]},
			{"Name" : "linbu_1_6_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_6_0"}]},
			{"Name" : "linbu_0_7_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_7_0"}]},
			{"Name" : "linbu_1_7_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_7_0"}]},
			{"Name" : "linbu_0_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_0_1"}]},
			{"Name" : "linbu_1_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_0_1"}]},
			{"Name" : "linbu_0_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_1_1"}]},
			{"Name" : "linbu_1_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_1_1"}]},
			{"Name" : "linbu_0_2_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_2_1"}]},
			{"Name" : "linbu_1_2_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_2_1"}]},
			{"Name" : "linbu_0_3_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_3_1"}]},
			{"Name" : "linbu_1_3_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_3_1"}]},
			{"Name" : "linbu_0_4_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_4_1"}]},
			{"Name" : "linbu_1_4_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_4_1"}]},
			{"Name" : "linbu_0_5_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_5_1"}]},
			{"Name" : "linbu_1_5_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_5_1"}]},
			{"Name" : "linbu_0_6_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_6_1"}]},
			{"Name" : "linbu_1_6_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_6_1"}]},
			{"Name" : "linbu_0_7_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_7_1"}]},
			{"Name" : "linbu_1_7_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_7_1"}]},
			{"Name" : "linbu_0_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_0_2"}]},
			{"Name" : "linbu_1_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_0_2"}]},
			{"Name" : "linbu_0_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_1_2"}]},
			{"Name" : "linbu_1_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_1_2"}]},
			{"Name" : "linbu_0_2_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_2_2"}]},
			{"Name" : "linbu_1_2_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_2_2"}]},
			{"Name" : "linbu_0_3_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_3_2"}]},
			{"Name" : "linbu_1_3_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_3_2"}]},
			{"Name" : "linbu_0_4_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_4_2"}]},
			{"Name" : "linbu_1_4_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_4_2"}]},
			{"Name" : "linbu_0_5_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_5_2"}]},
			{"Name" : "linbu_1_5_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_5_2"}]},
			{"Name" : "linbu_0_6_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_6_2"}]},
			{"Name" : "linbu_1_6_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_6_2"}]},
			{"Name" : "linbu_0_7_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_7_2"}]},
			{"Name" : "linbu_1_7_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_7_2"}]},
			{"Name" : "linbu_0_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_0_3"}]},
			{"Name" : "linbu_1_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_0_3"}]},
			{"Name" : "linbu_0_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_1_3"}]},
			{"Name" : "linbu_1_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_1_3"}]},
			{"Name" : "linbu_0_2_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_2_3"}]},
			{"Name" : "linbu_1_2_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_2_3"}]},
			{"Name" : "linbu_0_3_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_3_3"}]},
			{"Name" : "linbu_1_3_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_3_3"}]},
			{"Name" : "linbu_0_4_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_4_3"}]},
			{"Name" : "linbu_1_4_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_4_3"}]},
			{"Name" : "linbu_0_5_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_5_3"}]},
			{"Name" : "linbu_1_5_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_5_3"}]},
			{"Name" : "linbu_0_6_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_6_3"}]},
			{"Name" : "linbu_1_6_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_6_3"}]},
			{"Name" : "linbu_0_7_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_0_7_3"}]},
			{"Name" : "linbu_1_7_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "285", "SubInstance" : "conv5_U0", "Port" : "linbu_1_7_3"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_U0", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11"],
		"CDFG" : "conv1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "16513", "EstimateLatencyMax" : "9781377",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "12", "DependentChan" : "434",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "12", "DependentChan" : "435",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "12", "DependentChan" : "436",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "12", "DependentChan" : "437",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "12", "DependentChan" : "438",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "12", "DependentChan" : "439",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "12", "DependentChan" : "440",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "12", "DependentChan" : "441",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_4_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_4_1_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_4_0_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_4_1_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_4_0_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_4_1_2", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_0_0_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_1_0_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_0_1_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_1_1_U", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_0_2_U", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_1_2_U", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fadd_32ns_32bkb_U1", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fmul_32ns_32cud_U2", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fcmp_32ns_32dEe_U3", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_mux_275_32_1_1_U4", "Parent" : "1"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.maxpool1_U0", "Parent" : "0",
		"CDFG" : "maxpool1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "23809", "EstimateLatencyMax" : "23809",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "1",
		"StartFifo" : "start_for_maxpoolg8j_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "13", "DependentChan" : "442",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "13", "DependentChan" : "443",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "13", "DependentChan" : "444",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "13", "DependentChan" : "445",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "13", "DependentChan" : "446",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "13", "DependentChan" : "447",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "13", "DependentChan" : "448",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "13", "DependentChan" : "449",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "434",
				"BlockSignal" : [
					{"Name" : "f1_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "435",
				"BlockSignal" : [
					{"Name" : "f1_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "436",
				"BlockSignal" : [
					{"Name" : "f1_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "437",
				"BlockSignal" : [
					{"Name" : "f1_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "438",
				"BlockSignal" : [
					{"Name" : "f1_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "439",
				"BlockSignal" : [
					{"Name" : "f1_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "440",
				"BlockSignal" : [
					{"Name" : "f1_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "441",
				"BlockSignal" : [
					{"Name" : "f1_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2_U0", "Parent" : "0", "Child" : ["14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33"],
		"CDFG" : "conv2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2946", "EstimateLatencyMax" : "11504194",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "12",
		"StartFifo" : "start_for_conv2_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "450",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "451",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "452",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "453",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "454",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "455",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "456",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "457",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "12", "DependentChan" : "442",
				"BlockSignal" : [
					{"Name" : "p1_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "12", "DependentChan" : "443",
				"BlockSignal" : [
					{"Name" : "p1_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "12", "DependentChan" : "444",
				"BlockSignal" : [
					{"Name" : "p1_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "12", "DependentChan" : "445",
				"BlockSignal" : [
					{"Name" : "p1_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "12", "DependentChan" : "446",
				"BlockSignal" : [
					{"Name" : "p1_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "12", "DependentChan" : "447",
				"BlockSignal" : [
					{"Name" : "p1_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "12", "DependentChan" : "448",
				"BlockSignal" : [
					{"Name" : "p1_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "12", "DependentChan" : "449",
				"BlockSignal" : [
					{"Name" : "p1_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_5_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_0_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_0_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_0_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_0_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_0_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_0_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_0_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_0_U", "Parent" : "13"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_0_U", "Parent" : "13"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_1_U", "Parent" : "13"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_1_U", "Parent" : "13"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_2_U", "Parent" : "13"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_2_U", "Parent" : "13"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_3_U", "Parent" : "13"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_3_U", "Parent" : "13"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_4_U", "Parent" : "13"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_4_U", "Parent" : "13"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_5_U", "Parent" : "13"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_5_U", "Parent" : "13"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_6_U", "Parent" : "13"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_6_U", "Parent" : "13"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_7_U", "Parent" : "13"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_7_U", "Parent" : "13"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fadd_32ns_32bkb_U35", "Parent" : "13"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fmul_32ns_32cud_U36", "Parent" : "13"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fcmp_32ns_32dEe_U37", "Parent" : "13"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_mux_727_32_1_1_U38", "Parent" : "13"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.maxpool2_U0", "Parent" : "0",
		"CDFG" : "maxpool2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9395", "EstimateLatencyMax" : "9395",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "13",
		"StartFifo" : "start_for_maxpoolhbi_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "458",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "459",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "460",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "461",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "462",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "463",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "464",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "465",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "13", "DependentChan" : "450",
				"BlockSignal" : [
					{"Name" : "f2_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "13", "DependentChan" : "451",
				"BlockSignal" : [
					{"Name" : "f2_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "13", "DependentChan" : "452",
				"BlockSignal" : [
					{"Name" : "f2_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "13", "DependentChan" : "453",
				"BlockSignal" : [
					{"Name" : "f2_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "13", "DependentChan" : "454",
				"BlockSignal" : [
					{"Name" : "f2_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "13", "DependentChan" : "455",
				"BlockSignal" : [
					{"Name" : "f2_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "13", "DependentChan" : "456",
				"BlockSignal" : [
					{"Name" : "f2_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "13", "DependentChan" : "457",
				"BlockSignal" : [
					{"Name" : "f2_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv3_U0", "Parent" : "0", "Child" : ["36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143"],
		"CDFG" : "conv3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "617", "EstimateLatencyMax" : "10111081",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "34",
		"StartFifo" : "start_for_conv3_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "144", "DependentChan" : "466",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "144", "DependentChan" : "467",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "144", "DependentChan" : "468",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "144", "DependentChan" : "469",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "144", "DependentChan" : "470",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "144", "DependentChan" : "471",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "144", "DependentChan" : "472",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "144", "DependentChan" : "473",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "458",
				"BlockSignal" : [
					{"Name" : "p2_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "459",
				"BlockSignal" : [
					{"Name" : "p2_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "460",
				"BlockSignal" : [
					{"Name" : "p2_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "461",
				"BlockSignal" : [
					{"Name" : "p2_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "462",
				"BlockSignal" : [
					{"Name" : "p2_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "463",
				"BlockSignal" : [
					{"Name" : "p2_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "464",
				"BlockSignal" : [
					{"Name" : "p2_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "465",
				"BlockSignal" : [
					{"Name" : "p2_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_6_0_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_1_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_1_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_2_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_2_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_3_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_3_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_4_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_4_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_5_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_5_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_6_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_6_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_7_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_7_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_0_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_0_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_1_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_1_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_2_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_2_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_3_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_3_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_4_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_4_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_5_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_5_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_6_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_6_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_7_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_7_1", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_0_0_U", "Parent" : "35"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_0_0_U", "Parent" : "35"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_1_0_U", "Parent" : "35"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_1_0_U", "Parent" : "35"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_2_0_U", "Parent" : "35"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_2_0_U", "Parent" : "35"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_3_0_U", "Parent" : "35"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_3_0_U", "Parent" : "35"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_4_0_U", "Parent" : "35"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_4_0_U", "Parent" : "35"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_5_0_U", "Parent" : "35"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_5_0_U", "Parent" : "35"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_6_0_U", "Parent" : "35"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_6_0_U", "Parent" : "35"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_7_0_U", "Parent" : "35"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_7_0_U", "Parent" : "35"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_0_1_U", "Parent" : "35"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_0_1_U", "Parent" : "35"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_1_1_U", "Parent" : "35"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_1_1_U", "Parent" : "35"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_2_1_U", "Parent" : "35"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_2_1_U", "Parent" : "35"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_3_1_U", "Parent" : "35"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_3_1_U", "Parent" : "35"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_4_1_U", "Parent" : "35"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_4_1_U", "Parent" : "35"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_5_1_U", "Parent" : "35"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_5_1_U", "Parent" : "35"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_6_1_U", "Parent" : "35"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_6_1_U", "Parent" : "35"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_7_1_U", "Parent" : "35"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_7_1_U", "Parent" : "35"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_0_U", "Parent" : "35"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_1_U", "Parent" : "35"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_2_U", "Parent" : "35"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_3_U", "Parent" : "35"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_4_U", "Parent" : "35"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_5_U", "Parent" : "35"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_6_U", "Parent" : "35"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_7_U", "Parent" : "35"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_0_U", "Parent" : "35"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_1_U", "Parent" : "35"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_2_U", "Parent" : "35"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_3_U", "Parent" : "35"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_4_U", "Parent" : "35"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_5_U", "Parent" : "35"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_6_U", "Parent" : "35"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_7_U", "Parent" : "35"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_0_U", "Parent" : "35"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_1_U", "Parent" : "35"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_2_U", "Parent" : "35"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_3_U", "Parent" : "35"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_4_U", "Parent" : "35"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_5_U", "Parent" : "35"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_6_U", "Parent" : "35"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_7_U", "Parent" : "35"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_0_U", "Parent" : "35"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_1_U", "Parent" : "35"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_2_U", "Parent" : "35"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_3_U", "Parent" : "35"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_4_U", "Parent" : "35"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_5_U", "Parent" : "35"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_6_U", "Parent" : "35"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_7_U", "Parent" : "35"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_0_U", "Parent" : "35"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_1_U", "Parent" : "35"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_2_U", "Parent" : "35"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_3_U", "Parent" : "35"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_4_U", "Parent" : "35"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_5_U", "Parent" : "35"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_6_U", "Parent" : "35"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_7_U", "Parent" : "35"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_0_U", "Parent" : "35"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_1_U", "Parent" : "35"},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_2_U", "Parent" : "35"},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_3_U", "Parent" : "35"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_4_U", "Parent" : "35"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_5_U", "Parent" : "35"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_6_U", "Parent" : "35"},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_7_U", "Parent" : "35"},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_0_U", "Parent" : "35"},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_1_U", "Parent" : "35"},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_2_U", "Parent" : "35"},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_3_U", "Parent" : "35"},
	{"ID" : "120", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_4_U", "Parent" : "35"},
	{"ID" : "121", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_5_U", "Parent" : "35"},
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_6_U", "Parent" : "35"},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_7_U", "Parent" : "35"},
	{"ID" : "124", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_0_U", "Parent" : "35"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_1_U", "Parent" : "35"},
	{"ID" : "126", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_2_U", "Parent" : "35"},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_3_U", "Parent" : "35"},
	{"ID" : "128", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_4_U", "Parent" : "35"},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_5_U", "Parent" : "35"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_6_U", "Parent" : "35"},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_7_U", "Parent" : "35"},
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_0_U", "Parent" : "35"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_1_U", "Parent" : "35"},
	{"ID" : "134", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_2_U", "Parent" : "35"},
	{"ID" : "135", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_3_U", "Parent" : "35"},
	{"ID" : "136", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_4_U", "Parent" : "35"},
	{"ID" : "137", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_5_U", "Parent" : "35"},
	{"ID" : "138", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_6_U", "Parent" : "35"},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_7_U", "Parent" : "35"},
	{"ID" : "140", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fadd_32ns_32bkb_U73", "Parent" : "35"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fmul_32ns_32cud_U74", "Parent" : "35"},
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fcmp_32ns_32dEe_U75", "Parent" : "35"},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_mux_727_32_1_1_U76", "Parent" : "35"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv4_U0", "Parent" : "0", "Child" : ["145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228", "229", "230", "231", "232", "233", "234", "235", "236", "237", "238", "239", "240", "241", "242", "243", "244", "245", "246", "247", "248", "249", "250", "251", "252", "253", "254", "255", "256", "257", "258", "259", "260", "261", "262", "263", "264", "265", "266", "267", "268", "269", "270", "271", "272", "273", "274", "275", "276", "277", "278", "279", "280", "281", "282", "283", "284"],
		"CDFG" : "conv4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "745", "EstimateLatencyMax" : "14727913",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "35",
		"StartFifo" : "start_for_conv4_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "285", "DependentChan" : "474",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "285", "DependentChan" : "475",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "285", "DependentChan" : "476",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "285", "DependentChan" : "477",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "285", "DependentChan" : "478",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "285", "DependentChan" : "479",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "285", "DependentChan" : "480",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "285", "DependentChan" : "481",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "466",
				"BlockSignal" : [
					{"Name" : "f3_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "467",
				"BlockSignal" : [
					{"Name" : "f3_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "468",
				"BlockSignal" : [
					{"Name" : "f3_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "469",
				"BlockSignal" : [
					{"Name" : "f3_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "470",
				"BlockSignal" : [
					{"Name" : "f3_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "471",
				"BlockSignal" : [
					{"Name" : "f3_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "472",
				"BlockSignal" : [
					{"Name" : "f3_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "473",
				"BlockSignal" : [
					{"Name" : "f3_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_7_0_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_1_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_1_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_2_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_2_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_3_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_3_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_4_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_4_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_5_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_5_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_6_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_6_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_7_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_7_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_0_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_0_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_1_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_1_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_2_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_2_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_3_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_3_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_4_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_4_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_5_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_5_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_6_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_6_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_7_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_7_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_0_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_0_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_1_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_1_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_2_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_2_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_3_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_3_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_4_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_4_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_5_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_5_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_6_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_6_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_7_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_7_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_0_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_0_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_1_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_1_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_2_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_2_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_3_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_3_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_4_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_4_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_5_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_5_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_6_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_6_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_7_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_7_3", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_0_0_U", "Parent" : "144"},
	{"ID" : "146", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_0_0_U", "Parent" : "144"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_1_0_U", "Parent" : "144"},
	{"ID" : "148", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_1_0_U", "Parent" : "144"},
	{"ID" : "149", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_2_0_U", "Parent" : "144"},
	{"ID" : "150", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_2_0_U", "Parent" : "144"},
	{"ID" : "151", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_3_0_U", "Parent" : "144"},
	{"ID" : "152", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_3_0_U", "Parent" : "144"},
	{"ID" : "153", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_4_0_U", "Parent" : "144"},
	{"ID" : "154", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_4_0_U", "Parent" : "144"},
	{"ID" : "155", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_5_0_U", "Parent" : "144"},
	{"ID" : "156", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_5_0_U", "Parent" : "144"},
	{"ID" : "157", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_6_0_U", "Parent" : "144"},
	{"ID" : "158", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_6_0_U", "Parent" : "144"},
	{"ID" : "159", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_7_0_U", "Parent" : "144"},
	{"ID" : "160", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_7_0_U", "Parent" : "144"},
	{"ID" : "161", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_0_1_U", "Parent" : "144"},
	{"ID" : "162", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_0_1_U", "Parent" : "144"},
	{"ID" : "163", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_1_1_U", "Parent" : "144"},
	{"ID" : "164", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_1_1_U", "Parent" : "144"},
	{"ID" : "165", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_2_1_U", "Parent" : "144"},
	{"ID" : "166", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_2_1_U", "Parent" : "144"},
	{"ID" : "167", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_3_1_U", "Parent" : "144"},
	{"ID" : "168", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_3_1_U", "Parent" : "144"},
	{"ID" : "169", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_4_1_U", "Parent" : "144"},
	{"ID" : "170", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_4_1_U", "Parent" : "144"},
	{"ID" : "171", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_5_1_U", "Parent" : "144"},
	{"ID" : "172", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_5_1_U", "Parent" : "144"},
	{"ID" : "173", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_6_1_U", "Parent" : "144"},
	{"ID" : "174", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_6_1_U", "Parent" : "144"},
	{"ID" : "175", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_7_1_U", "Parent" : "144"},
	{"ID" : "176", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_7_1_U", "Parent" : "144"},
	{"ID" : "177", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_0_2_U", "Parent" : "144"},
	{"ID" : "178", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_0_2_U", "Parent" : "144"},
	{"ID" : "179", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_1_2_U", "Parent" : "144"},
	{"ID" : "180", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_1_2_U", "Parent" : "144"},
	{"ID" : "181", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_2_2_U", "Parent" : "144"},
	{"ID" : "182", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_2_2_U", "Parent" : "144"},
	{"ID" : "183", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_3_2_U", "Parent" : "144"},
	{"ID" : "184", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_3_2_U", "Parent" : "144"},
	{"ID" : "185", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_4_2_U", "Parent" : "144"},
	{"ID" : "186", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_4_2_U", "Parent" : "144"},
	{"ID" : "187", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_5_2_U", "Parent" : "144"},
	{"ID" : "188", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_5_2_U", "Parent" : "144"},
	{"ID" : "189", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_6_2_U", "Parent" : "144"},
	{"ID" : "190", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_6_2_U", "Parent" : "144"},
	{"ID" : "191", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_7_2_U", "Parent" : "144"},
	{"ID" : "192", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_7_2_U", "Parent" : "144"},
	{"ID" : "193", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_0_3_U", "Parent" : "144"},
	{"ID" : "194", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_0_3_U", "Parent" : "144"},
	{"ID" : "195", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_1_3_U", "Parent" : "144"},
	{"ID" : "196", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_1_3_U", "Parent" : "144"},
	{"ID" : "197", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_2_3_U", "Parent" : "144"},
	{"ID" : "198", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_2_3_U", "Parent" : "144"},
	{"ID" : "199", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_3_3_U", "Parent" : "144"},
	{"ID" : "200", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_3_3_U", "Parent" : "144"},
	{"ID" : "201", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_4_3_U", "Parent" : "144"},
	{"ID" : "202", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_4_3_U", "Parent" : "144"},
	{"ID" : "203", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_5_3_U", "Parent" : "144"},
	{"ID" : "204", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_5_3_U", "Parent" : "144"},
	{"ID" : "205", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_6_3_U", "Parent" : "144"},
	{"ID" : "206", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_6_3_U", "Parent" : "144"},
	{"ID" : "207", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_7_3_U", "Parent" : "144"},
	{"ID" : "208", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_7_3_U", "Parent" : "144"},
	{"ID" : "209", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_0_U", "Parent" : "144"},
	{"ID" : "210", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_1_U", "Parent" : "144"},
	{"ID" : "211", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_2_U", "Parent" : "144"},
	{"ID" : "212", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_3_U", "Parent" : "144"},
	{"ID" : "213", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_4_U", "Parent" : "144"},
	{"ID" : "214", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_5_U", "Parent" : "144"},
	{"ID" : "215", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_6_U", "Parent" : "144"},
	{"ID" : "216", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_7_U", "Parent" : "144"},
	{"ID" : "217", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_0_U", "Parent" : "144"},
	{"ID" : "218", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_1_U", "Parent" : "144"},
	{"ID" : "219", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_2_U", "Parent" : "144"},
	{"ID" : "220", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_3_U", "Parent" : "144"},
	{"ID" : "221", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_4_U", "Parent" : "144"},
	{"ID" : "222", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_5_U", "Parent" : "144"},
	{"ID" : "223", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_6_U", "Parent" : "144"},
	{"ID" : "224", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_7_U", "Parent" : "144"},
	{"ID" : "225", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_0_U", "Parent" : "144"},
	{"ID" : "226", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_1_U", "Parent" : "144"},
	{"ID" : "227", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_2_U", "Parent" : "144"},
	{"ID" : "228", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_3_U", "Parent" : "144"},
	{"ID" : "229", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_4_U", "Parent" : "144"},
	{"ID" : "230", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_5_U", "Parent" : "144"},
	{"ID" : "231", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_6_U", "Parent" : "144"},
	{"ID" : "232", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_7_U", "Parent" : "144"},
	{"ID" : "233", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_0_U", "Parent" : "144"},
	{"ID" : "234", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_1_U", "Parent" : "144"},
	{"ID" : "235", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_2_U", "Parent" : "144"},
	{"ID" : "236", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_3_U", "Parent" : "144"},
	{"ID" : "237", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_4_U", "Parent" : "144"},
	{"ID" : "238", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_5_U", "Parent" : "144"},
	{"ID" : "239", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_6_U", "Parent" : "144"},
	{"ID" : "240", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_7_U", "Parent" : "144"},
	{"ID" : "241", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_0_U", "Parent" : "144"},
	{"ID" : "242", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_1_U", "Parent" : "144"},
	{"ID" : "243", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_2_U", "Parent" : "144"},
	{"ID" : "244", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_3_U", "Parent" : "144"},
	{"ID" : "245", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_4_U", "Parent" : "144"},
	{"ID" : "246", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_5_U", "Parent" : "144"},
	{"ID" : "247", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_6_U", "Parent" : "144"},
	{"ID" : "248", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_7_U", "Parent" : "144"},
	{"ID" : "249", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_0_U", "Parent" : "144"},
	{"ID" : "250", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_1_U", "Parent" : "144"},
	{"ID" : "251", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_2_U", "Parent" : "144"},
	{"ID" : "252", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_3_U", "Parent" : "144"},
	{"ID" : "253", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_4_U", "Parent" : "144"},
	{"ID" : "254", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_5_U", "Parent" : "144"},
	{"ID" : "255", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_6_U", "Parent" : "144"},
	{"ID" : "256", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_7_U", "Parent" : "144"},
	{"ID" : "257", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_0_U", "Parent" : "144"},
	{"ID" : "258", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_1_U", "Parent" : "144"},
	{"ID" : "259", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_2_U", "Parent" : "144"},
	{"ID" : "260", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_3_U", "Parent" : "144"},
	{"ID" : "261", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_4_U", "Parent" : "144"},
	{"ID" : "262", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_5_U", "Parent" : "144"},
	{"ID" : "263", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_6_U", "Parent" : "144"},
	{"ID" : "264", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_7_U", "Parent" : "144"},
	{"ID" : "265", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_0_U", "Parent" : "144"},
	{"ID" : "266", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_1_U", "Parent" : "144"},
	{"ID" : "267", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_2_U", "Parent" : "144"},
	{"ID" : "268", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_3_U", "Parent" : "144"},
	{"ID" : "269", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_4_U", "Parent" : "144"},
	{"ID" : "270", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_5_U", "Parent" : "144"},
	{"ID" : "271", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_6_U", "Parent" : "144"},
	{"ID" : "272", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_7_U", "Parent" : "144"},
	{"ID" : "273", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_0_U", "Parent" : "144"},
	{"ID" : "274", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_1_U", "Parent" : "144"},
	{"ID" : "275", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_2_U", "Parent" : "144"},
	{"ID" : "276", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_3_U", "Parent" : "144"},
	{"ID" : "277", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_4_U", "Parent" : "144"},
	{"ID" : "278", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_5_U", "Parent" : "144"},
	{"ID" : "279", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_6_U", "Parent" : "144"},
	{"ID" : "280", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_7_U", "Parent" : "144"},
	{"ID" : "281", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fadd_32ns_32bkb_U96", "Parent" : "144"},
	{"ID" : "282", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fmul_32ns_32cud_U97", "Parent" : "144"},
	{"ID" : "283", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fcmp_32ns_32dEe_U98", "Parent" : "144"},
	{"ID" : "284", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_mux_727_32_1_1_U99", "Parent" : "144"},
	{"ID" : "285", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv5_U0", "Parent" : "0", "Child" : ["286", "287", "288", "289", "290", "291", "292", "293", "294", "295", "296", "297", "298", "299", "300", "301", "302", "303", "304", "305", "306", "307", "308", "309", "310", "311", "312", "313", "314", "315", "316", "317", "318", "319", "320", "321", "322", "323", "324", "325", "326", "327", "328", "329", "330", "331", "332", "333", "334", "335", "336", "337", "338", "339", "340", "341", "342", "343", "344", "345", "346", "347", "348", "349", "350", "351", "352", "353", "354", "355", "356", "357", "358", "359", "360", "361", "362", "363", "364", "365", "366", "367", "368", "369", "370", "371", "372", "373", "374", "375", "376", "377", "378", "379", "380", "381", "382", "383", "384", "385", "386", "387", "388", "389", "390", "391", "392", "393", "394", "395", "396", "397", "398", "399", "400", "401", "402", "403", "404", "405", "406", "407", "408", "409", "410", "411", "412", "413", "414", "415", "416", "417", "418", "419", "420", "421", "422", "423", "424"],
		"CDFG" : "conv5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "521", "EstimateLatencyMax" : "10224521",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "144",
		"StartFifo" : "start_for_conv5_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "425", "DependentChan" : "482",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "425", "DependentChan" : "483",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "425", "DependentChan" : "484",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "425", "DependentChan" : "485",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "425", "DependentChan" : "486",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "425", "DependentChan" : "487",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "425", "DependentChan" : "488",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "425", "DependentChan" : "489",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "144", "DependentChan" : "474",
				"BlockSignal" : [
					{"Name" : "f4_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "144", "DependentChan" : "475",
				"BlockSignal" : [
					{"Name" : "f4_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "144", "DependentChan" : "476",
				"BlockSignal" : [
					{"Name" : "f4_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "144", "DependentChan" : "477",
				"BlockSignal" : [
					{"Name" : "f4_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "144", "DependentChan" : "478",
				"BlockSignal" : [
					{"Name" : "f4_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "144", "DependentChan" : "479",
				"BlockSignal" : [
					{"Name" : "f4_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "144", "DependentChan" : "480",
				"BlockSignal" : [
					{"Name" : "f4_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "144", "DependentChan" : "481",
				"BlockSignal" : [
					{"Name" : "f4_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_0_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_1_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_1_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_2_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_2_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_3_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_3_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_4_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_4_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_5_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_5_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_6_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_6_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_7_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_7_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_0_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_0_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_1_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_1_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_2_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_2_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_3_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_3_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_4_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_4_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_5_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_5_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_6_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_6_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_7_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_7_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_0_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_0_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_1_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_1_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_2_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_2_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_3_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_3_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_4_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_4_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_5_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_5_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_6_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_6_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_7_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_7_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_0_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_0_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_1_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_1_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_2_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_2_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_3_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_3_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_4_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_4_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_5_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_5_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_6_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_6_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_7_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_7_3", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "286", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_0_0_U", "Parent" : "285"},
	{"ID" : "287", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_0_0_U", "Parent" : "285"},
	{"ID" : "288", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_1_0_U", "Parent" : "285"},
	{"ID" : "289", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_1_0_U", "Parent" : "285"},
	{"ID" : "290", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_2_0_U", "Parent" : "285"},
	{"ID" : "291", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_2_0_U", "Parent" : "285"},
	{"ID" : "292", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_3_0_U", "Parent" : "285"},
	{"ID" : "293", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_3_0_U", "Parent" : "285"},
	{"ID" : "294", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_4_0_U", "Parent" : "285"},
	{"ID" : "295", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_4_0_U", "Parent" : "285"},
	{"ID" : "296", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_5_0_U", "Parent" : "285"},
	{"ID" : "297", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_5_0_U", "Parent" : "285"},
	{"ID" : "298", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_6_0_U", "Parent" : "285"},
	{"ID" : "299", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_6_0_U", "Parent" : "285"},
	{"ID" : "300", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_7_0_U", "Parent" : "285"},
	{"ID" : "301", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_7_0_U", "Parent" : "285"},
	{"ID" : "302", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_0_1_U", "Parent" : "285"},
	{"ID" : "303", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_0_1_U", "Parent" : "285"},
	{"ID" : "304", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_1_1_U", "Parent" : "285"},
	{"ID" : "305", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_1_1_U", "Parent" : "285"},
	{"ID" : "306", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_2_1_U", "Parent" : "285"},
	{"ID" : "307", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_2_1_U", "Parent" : "285"},
	{"ID" : "308", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_3_1_U", "Parent" : "285"},
	{"ID" : "309", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_3_1_U", "Parent" : "285"},
	{"ID" : "310", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_4_1_U", "Parent" : "285"},
	{"ID" : "311", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_4_1_U", "Parent" : "285"},
	{"ID" : "312", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_5_1_U", "Parent" : "285"},
	{"ID" : "313", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_5_1_U", "Parent" : "285"},
	{"ID" : "314", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_6_1_U", "Parent" : "285"},
	{"ID" : "315", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_6_1_U", "Parent" : "285"},
	{"ID" : "316", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_7_1_U", "Parent" : "285"},
	{"ID" : "317", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_7_1_U", "Parent" : "285"},
	{"ID" : "318", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_0_2_U", "Parent" : "285"},
	{"ID" : "319", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_0_2_U", "Parent" : "285"},
	{"ID" : "320", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_1_2_U", "Parent" : "285"},
	{"ID" : "321", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_1_2_U", "Parent" : "285"},
	{"ID" : "322", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_2_2_U", "Parent" : "285"},
	{"ID" : "323", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_2_2_U", "Parent" : "285"},
	{"ID" : "324", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_3_2_U", "Parent" : "285"},
	{"ID" : "325", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_3_2_U", "Parent" : "285"},
	{"ID" : "326", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_4_2_U", "Parent" : "285"},
	{"ID" : "327", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_4_2_U", "Parent" : "285"},
	{"ID" : "328", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_5_2_U", "Parent" : "285"},
	{"ID" : "329", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_5_2_U", "Parent" : "285"},
	{"ID" : "330", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_6_2_U", "Parent" : "285"},
	{"ID" : "331", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_6_2_U", "Parent" : "285"},
	{"ID" : "332", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_7_2_U", "Parent" : "285"},
	{"ID" : "333", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_7_2_U", "Parent" : "285"},
	{"ID" : "334", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_0_3_U", "Parent" : "285"},
	{"ID" : "335", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_0_3_U", "Parent" : "285"},
	{"ID" : "336", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_1_3_U", "Parent" : "285"},
	{"ID" : "337", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_1_3_U", "Parent" : "285"},
	{"ID" : "338", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_2_3_U", "Parent" : "285"},
	{"ID" : "339", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_2_3_U", "Parent" : "285"},
	{"ID" : "340", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_3_3_U", "Parent" : "285"},
	{"ID" : "341", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_3_3_U", "Parent" : "285"},
	{"ID" : "342", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_4_3_U", "Parent" : "285"},
	{"ID" : "343", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_4_3_U", "Parent" : "285"},
	{"ID" : "344", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_5_3_U", "Parent" : "285"},
	{"ID" : "345", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_5_3_U", "Parent" : "285"},
	{"ID" : "346", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_6_3_U", "Parent" : "285"},
	{"ID" : "347", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_6_3_U", "Parent" : "285"},
	{"ID" : "348", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_7_3_U", "Parent" : "285"},
	{"ID" : "349", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_7_3_U", "Parent" : "285"},
	{"ID" : "350", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_0_U", "Parent" : "285"},
	{"ID" : "351", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_1_U", "Parent" : "285"},
	{"ID" : "352", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_2_U", "Parent" : "285"},
	{"ID" : "353", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_3_U", "Parent" : "285"},
	{"ID" : "354", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_4_U", "Parent" : "285"},
	{"ID" : "355", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_5_U", "Parent" : "285"},
	{"ID" : "356", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_6_U", "Parent" : "285"},
	{"ID" : "357", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_7_U", "Parent" : "285"},
	{"ID" : "358", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_0_U", "Parent" : "285"},
	{"ID" : "359", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_1_U", "Parent" : "285"},
	{"ID" : "360", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_2_U", "Parent" : "285"},
	{"ID" : "361", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_3_U", "Parent" : "285"},
	{"ID" : "362", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_4_U", "Parent" : "285"},
	{"ID" : "363", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_5_U", "Parent" : "285"},
	{"ID" : "364", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_6_U", "Parent" : "285"},
	{"ID" : "365", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_7_U", "Parent" : "285"},
	{"ID" : "366", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_0_U", "Parent" : "285"},
	{"ID" : "367", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_1_U", "Parent" : "285"},
	{"ID" : "368", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_2_U", "Parent" : "285"},
	{"ID" : "369", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_3_U", "Parent" : "285"},
	{"ID" : "370", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_4_U", "Parent" : "285"},
	{"ID" : "371", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_5_U", "Parent" : "285"},
	{"ID" : "372", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_6_U", "Parent" : "285"},
	{"ID" : "373", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_7_U", "Parent" : "285"},
	{"ID" : "374", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_0_U", "Parent" : "285"},
	{"ID" : "375", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_1_U", "Parent" : "285"},
	{"ID" : "376", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_2_U", "Parent" : "285"},
	{"ID" : "377", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_3_U", "Parent" : "285"},
	{"ID" : "378", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_4_U", "Parent" : "285"},
	{"ID" : "379", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_5_U", "Parent" : "285"},
	{"ID" : "380", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_6_U", "Parent" : "285"},
	{"ID" : "381", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_7_U", "Parent" : "285"},
	{"ID" : "382", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_0_U", "Parent" : "285"},
	{"ID" : "383", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_1_U", "Parent" : "285"},
	{"ID" : "384", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_2_U", "Parent" : "285"},
	{"ID" : "385", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_3_U", "Parent" : "285"},
	{"ID" : "386", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_4_U", "Parent" : "285"},
	{"ID" : "387", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_5_U", "Parent" : "285"},
	{"ID" : "388", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_6_U", "Parent" : "285"},
	{"ID" : "389", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_7_U", "Parent" : "285"},
	{"ID" : "390", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_0_U", "Parent" : "285"},
	{"ID" : "391", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_1_U", "Parent" : "285"},
	{"ID" : "392", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_2_U", "Parent" : "285"},
	{"ID" : "393", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_3_U", "Parent" : "285"},
	{"ID" : "394", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_4_U", "Parent" : "285"},
	{"ID" : "395", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_5_U", "Parent" : "285"},
	{"ID" : "396", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_6_U", "Parent" : "285"},
	{"ID" : "397", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_7_U", "Parent" : "285"},
	{"ID" : "398", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_0_U", "Parent" : "285"},
	{"ID" : "399", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_1_U", "Parent" : "285"},
	{"ID" : "400", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_2_U", "Parent" : "285"},
	{"ID" : "401", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_3_U", "Parent" : "285"},
	{"ID" : "402", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_4_U", "Parent" : "285"},
	{"ID" : "403", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_5_U", "Parent" : "285"},
	{"ID" : "404", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_6_U", "Parent" : "285"},
	{"ID" : "405", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_7_U", "Parent" : "285"},
	{"ID" : "406", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_0_U", "Parent" : "285"},
	{"ID" : "407", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_1_U", "Parent" : "285"},
	{"ID" : "408", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_2_U", "Parent" : "285"},
	{"ID" : "409", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_3_U", "Parent" : "285"},
	{"ID" : "410", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_4_U", "Parent" : "285"},
	{"ID" : "411", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_5_U", "Parent" : "285"},
	{"ID" : "412", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_6_U", "Parent" : "285"},
	{"ID" : "413", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_7_U", "Parent" : "285"},
	{"ID" : "414", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_0_U", "Parent" : "285"},
	{"ID" : "415", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_1_U", "Parent" : "285"},
	{"ID" : "416", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_2_U", "Parent" : "285"},
	{"ID" : "417", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_3_U", "Parent" : "285"},
	{"ID" : "418", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_4_U", "Parent" : "285"},
	{"ID" : "419", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_5_U", "Parent" : "285"},
	{"ID" : "420", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_6_U", "Parent" : "285"},
	{"ID" : "421", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_7_U", "Parent" : "285"},
	{"ID" : "422", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fadd_32ns_32bkb_U119", "Parent" : "285"},
	{"ID" : "423", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fmul_32ns_32cud_U120", "Parent" : "285"},
	{"ID" : "424", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_mux_727_32_1_1_U121", "Parent" : "285"},
	{"ID" : "425", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.detection_head_U0", "Parent" : "0", "Child" : ["426", "427", "428", "429", "430", "431", "432", "433"],
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
		"StartSource" : "285",
		"StartFifo" : "start_for_detectiibs_U",
		"Port" : [
			{"Name" : "out_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "f5_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "285", "DependentChan" : "482",
				"BlockSignal" : [
					{"Name" : "f5_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "285", "DependentChan" : "483",
				"BlockSignal" : [
					{"Name" : "f5_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "285", "DependentChan" : "484",
				"BlockSignal" : [
					{"Name" : "f5_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "285", "DependentChan" : "485",
				"BlockSignal" : [
					{"Name" : "f5_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "285", "DependentChan" : "486",
				"BlockSignal" : [
					{"Name" : "f5_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "285", "DependentChan" : "487",
				"BlockSignal" : [
					{"Name" : "f5_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "285", "DependentChan" : "488",
				"BlockSignal" : [
					{"Name" : "f5_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "285", "DependentChan" : "489",
				"BlockSignal" : [
					{"Name" : "f5_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "426", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U139", "Parent" : "425"},
	{"ID" : "427", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U140", "Parent" : "425"},
	{"ID" : "428", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U141", "Parent" : "425"},
	{"ID" : "429", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U142", "Parent" : "425"},
	{"ID" : "430", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fmul_32ns_32cud_U143", "Parent" : "425"},
	{"ID" : "431", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fdiv_32ns_32eOg_U144", "Parent" : "425"},
	{"ID" : "432", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fexp_32ns_32fYi_U145", "Parent" : "425"},
	{"ID" : "433", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_mux_164_32_1_1_U146", "Parent" : "425"},
	{"ID" : "434", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_0_local_channel_U", "Parent" : "0"},
	{"ID" : "435", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_1_local_channel_U", "Parent" : "0"},
	{"ID" : "436", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_2_local_channel_U", "Parent" : "0"},
	{"ID" : "437", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_3_local_channel_U", "Parent" : "0"},
	{"ID" : "438", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_4_local_channel_U", "Parent" : "0"},
	{"ID" : "439", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_5_local_channel_U", "Parent" : "0"},
	{"ID" : "440", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_6_local_channel_U", "Parent" : "0"},
	{"ID" : "441", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_7_local_channel_U", "Parent" : "0"},
	{"ID" : "442", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_0_local_channel_U", "Parent" : "0"},
	{"ID" : "443", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_1_local_channel_U", "Parent" : "0"},
	{"ID" : "444", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_2_local_channel_U", "Parent" : "0"},
	{"ID" : "445", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_3_local_channel_U", "Parent" : "0"},
	{"ID" : "446", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_4_local_channel_U", "Parent" : "0"},
	{"ID" : "447", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_5_local_channel_U", "Parent" : "0"},
	{"ID" : "448", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_6_local_channel_U", "Parent" : "0"},
	{"ID" : "449", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_7_local_channel_U", "Parent" : "0"},
	{"ID" : "450", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_0_local_channel_U", "Parent" : "0"},
	{"ID" : "451", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_1_local_channel_U", "Parent" : "0"},
	{"ID" : "452", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_2_local_channel_U", "Parent" : "0"},
	{"ID" : "453", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_3_local_channel_U", "Parent" : "0"},
	{"ID" : "454", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_4_local_channel_U", "Parent" : "0"},
	{"ID" : "455", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_5_local_channel_U", "Parent" : "0"},
	{"ID" : "456", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_6_local_channel_U", "Parent" : "0"},
	{"ID" : "457", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_7_local_channel_U", "Parent" : "0"},
	{"ID" : "458", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_0_local_channel_U", "Parent" : "0"},
	{"ID" : "459", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_1_local_channel_U", "Parent" : "0"},
	{"ID" : "460", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_2_local_channel_U", "Parent" : "0"},
	{"ID" : "461", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_3_local_channel_U", "Parent" : "0"},
	{"ID" : "462", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_4_local_channel_U", "Parent" : "0"},
	{"ID" : "463", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_5_local_channel_U", "Parent" : "0"},
	{"ID" : "464", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_6_local_channel_U", "Parent" : "0"},
	{"ID" : "465", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_7_local_channel_U", "Parent" : "0"},
	{"ID" : "466", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_0_local_channel_U", "Parent" : "0"},
	{"ID" : "467", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_1_local_channel_U", "Parent" : "0"},
	{"ID" : "468", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_2_local_channel_U", "Parent" : "0"},
	{"ID" : "469", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_3_local_channel_U", "Parent" : "0"},
	{"ID" : "470", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_4_local_channel_U", "Parent" : "0"},
	{"ID" : "471", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_5_local_channel_U", "Parent" : "0"},
	{"ID" : "472", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_6_local_channel_U", "Parent" : "0"},
	{"ID" : "473", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_7_local_channel_U", "Parent" : "0"},
	{"ID" : "474", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_0_local_channel_U", "Parent" : "0"},
	{"ID" : "475", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_1_local_channel_U", "Parent" : "0"},
	{"ID" : "476", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_2_local_channel_U", "Parent" : "0"},
	{"ID" : "477", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_3_local_channel_U", "Parent" : "0"},
	{"ID" : "478", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_4_local_channel_U", "Parent" : "0"},
	{"ID" : "479", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_5_local_channel_U", "Parent" : "0"},
	{"ID" : "480", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_6_local_channel_U", "Parent" : "0"},
	{"ID" : "481", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_7_local_channel_U", "Parent" : "0"},
	{"ID" : "482", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_0_local_channel_U", "Parent" : "0"},
	{"ID" : "483", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_1_local_channel_U", "Parent" : "0"},
	{"ID" : "484", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_2_local_channel_U", "Parent" : "0"},
	{"ID" : "485", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_3_local_channel_U", "Parent" : "0"},
	{"ID" : "486", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_4_local_channel_U", "Parent" : "0"},
	{"ID" : "487", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_5_local_channel_U", "Parent" : "0"},
	{"ID" : "488", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_6_local_channel_U", "Parent" : "0"},
	{"ID" : "489", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_7_local_channel_U", "Parent" : "0"},
	{"ID" : "490", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_maxpoolg8j_U", "Parent" : "0"},
	{"ID" : "491", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv2_U0_U", "Parent" : "0"},
	{"ID" : "492", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_maxpoolhbi_U", "Parent" : "0"},
	{"ID" : "493", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv3_U0_U", "Parent" : "0"},
	{"ID" : "494", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv4_U0_U", "Parent" : "0"},
	{"ID" : "495", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv5_U0_U", "Parent" : "0"},
	{"ID" : "496", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_detectiibs_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	topp {
		image_r {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 45}
		linbu_4_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_2_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_2_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_3_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_3_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_4_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_4_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_5_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_5_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_6_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_6_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_7_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_7_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_2_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_2_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_3_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_3_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_4_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_4_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_5_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_5_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_6_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_6_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_7_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_7_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_2_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_2_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_3_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_3_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_4_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_4_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_5_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_5_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_6_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_6_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_7_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_7_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_2_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_2_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_3_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_3_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_4_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_4_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_5_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_5_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_6_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_6_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_7_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_7_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_2_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_2_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_3_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_3_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_4_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_4_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_5_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_5_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_6_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_6_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_7_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_7_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_2_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_2_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_3_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_3_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_4_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_4_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_5_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_5_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_6_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_6_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_7_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_7_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_2_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_2_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_3_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_3_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_4_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_4_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_5_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_5_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_6_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_6_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_7_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_7_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_2_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_2_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_3_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_3_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_4_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_4_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_5_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_5_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_6_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_6_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_7_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_7_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_2_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_2_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_3_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_3_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_4_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_4_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_5_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_5_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_6_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_6_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_7_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_7_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_2_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_2_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_3_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_3_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_4_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_4_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_5_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_5_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_6_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_6_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_7_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_7_3 {Type IO LastRead -1 FirstWrite -1}}
	conv1 {
		in_r {Type I LastRead 4 FirstWrite -1}
		out_0 {Type O LastRead -1 FirstWrite 7}
		out_1 {Type O LastRead -1 FirstWrite 7}
		out_2 {Type O LastRead -1 FirstWrite 7}
		out_3 {Type O LastRead -1 FirstWrite 7}
		out_4 {Type O LastRead -1 FirstWrite 7}
		out_5 {Type O LastRead -1 FirstWrite 7}
		out_6 {Type O LastRead -1 FirstWrite 7}
		out_7 {Type O LastRead -1 FirstWrite 7}
		linbu_4_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_1_2 {Type IO LastRead -1 FirstWrite -1}}
	maxpool1 {
		out_0 {Type O LastRead -1 FirstWrite 3}
		out_1 {Type O LastRead -1 FirstWrite 3}
		out_2 {Type O LastRead -1 FirstWrite 3}
		out_3 {Type O LastRead -1 FirstWrite 3}
		out_4 {Type O LastRead -1 FirstWrite 3}
		out_5 {Type O LastRead -1 FirstWrite 3}
		out_6 {Type O LastRead -1 FirstWrite 3}
		out_7 {Type O LastRead -1 FirstWrite 3}
		f1_0 {Type I LastRead 32 FirstWrite -1}
		f1_1 {Type I LastRead 32 FirstWrite -1}
		f1_2 {Type I LastRead 32 FirstWrite -1}
		f1_3 {Type I LastRead 32 FirstWrite -1}
		f1_4 {Type I LastRead 32 FirstWrite -1}
		f1_5 {Type I LastRead 32 FirstWrite -1}
		f1_6 {Type I LastRead 32 FirstWrite -1}
		f1_7 {Type I LastRead 32 FirstWrite -1}}
	conv2 {
		out_0 {Type O LastRead -1 FirstWrite 6}
		out_1 {Type O LastRead -1 FirstWrite 6}
		out_2 {Type O LastRead -1 FirstWrite 6}
		out_3 {Type O LastRead -1 FirstWrite 6}
		out_4 {Type O LastRead -1 FirstWrite 6}
		out_5 {Type O LastRead -1 FirstWrite 6}
		out_6 {Type O LastRead -1 FirstWrite 6}
		out_7 {Type O LastRead -1 FirstWrite 6}
		p1_0 {Type I LastRead 3 FirstWrite -1}
		p1_1 {Type I LastRead 3 FirstWrite -1}
		p1_2 {Type I LastRead 3 FirstWrite -1}
		p1_3 {Type I LastRead 3 FirstWrite -1}
		p1_4 {Type I LastRead 3 FirstWrite -1}
		p1_5 {Type I LastRead 3 FirstWrite -1}
		p1_6 {Type I LastRead 3 FirstWrite -1}
		p1_7 {Type I LastRead 3 FirstWrite -1}
		linbu_5_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_7 {Type IO LastRead -1 FirstWrite -1}}
	maxpool2 {
		out_0 {Type O LastRead -1 FirstWrite 3}
		out_1 {Type O LastRead -1 FirstWrite 3}
		out_2 {Type O LastRead -1 FirstWrite 3}
		out_3 {Type O LastRead -1 FirstWrite 3}
		out_4 {Type O LastRead -1 FirstWrite 3}
		out_5 {Type O LastRead -1 FirstWrite 3}
		out_6 {Type O LastRead -1 FirstWrite 3}
		out_7 {Type O LastRead -1 FirstWrite 3}
		f2_0 {Type I LastRead 15 FirstWrite -1}
		f2_1 {Type I LastRead 15 FirstWrite -1}
		f2_2 {Type I LastRead 15 FirstWrite -1}
		f2_3 {Type I LastRead 15 FirstWrite -1}
		f2_4 {Type I LastRead 15 FirstWrite -1}
		f2_5 {Type I LastRead 15 FirstWrite -1}
		f2_6 {Type I LastRead 15 FirstWrite -1}
		f2_7 {Type I LastRead 15 FirstWrite -1}}
	conv3 {
		out_0 {Type O LastRead -1 FirstWrite 6}
		out_1 {Type O LastRead -1 FirstWrite 6}
		out_2 {Type O LastRead -1 FirstWrite 6}
		out_3 {Type O LastRead -1 FirstWrite 6}
		out_4 {Type O LastRead -1 FirstWrite 6}
		out_5 {Type O LastRead -1 FirstWrite 6}
		out_6 {Type O LastRead -1 FirstWrite 6}
		out_7 {Type O LastRead -1 FirstWrite 6}
		p2_0 {Type I LastRead 3 FirstWrite -1}
		p2_1 {Type I LastRead 3 FirstWrite -1}
		p2_2 {Type I LastRead 3 FirstWrite -1}
		p2_3 {Type I LastRead 3 FirstWrite -1}
		p2_4 {Type I LastRead 3 FirstWrite -1}
		p2_5 {Type I LastRead 3 FirstWrite -1}
		p2_6 {Type I LastRead 3 FirstWrite -1}
		p2_7 {Type I LastRead 3 FirstWrite -1}
		linbu_6_0_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_2_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_2_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_3_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_3_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_4_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_4_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_5_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_5_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_6_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_6_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_7_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_7_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_2_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_2_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_3_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_3_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_4_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_4_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_5_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_5_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_6_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_6_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_7_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_7_1 {Type IO LastRead -1 FirstWrite -1}}
	conv4 {
		out_0 {Type O LastRead -1 FirstWrite 8}
		out_1 {Type O LastRead -1 FirstWrite 8}
		out_2 {Type O LastRead -1 FirstWrite 8}
		out_3 {Type O LastRead -1 FirstWrite 8}
		out_4 {Type O LastRead -1 FirstWrite 8}
		out_5 {Type O LastRead -1 FirstWrite 8}
		out_6 {Type O LastRead -1 FirstWrite 8}
		out_7 {Type O LastRead -1 FirstWrite 8}
		f3_0 {Type I LastRead 5 FirstWrite -1}
		f3_1 {Type I LastRead 5 FirstWrite -1}
		f3_2 {Type I LastRead 5 FirstWrite -1}
		f3_3 {Type I LastRead 5 FirstWrite -1}
		f3_4 {Type I LastRead 5 FirstWrite -1}
		f3_5 {Type I LastRead 5 FirstWrite -1}
		f3_6 {Type I LastRead 5 FirstWrite -1}
		f3_7 {Type I LastRead 5 FirstWrite -1}
		linbu_7_0_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_2_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_2_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_3_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_3_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_4_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_4_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_5_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_5_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_6_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_6_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_7_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_7_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_2_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_2_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_3_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_3_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_4_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_4_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_5_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_5_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_6_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_6_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_7_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_7_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_2_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_2_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_3_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_3_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_4_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_4_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_5_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_5_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_6_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_6_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_7_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_7_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_2_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_2_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_3_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_3_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_4_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_4_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_5_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_5_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_6_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_6_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_7_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_7_3 {Type IO LastRead -1 FirstWrite -1}}
	conv5 {
		out_0 {Type O LastRead -1 FirstWrite 7}
		out_1 {Type O LastRead -1 FirstWrite 7}
		out_2 {Type O LastRead -1 FirstWrite 7}
		out_3 {Type O LastRead -1 FirstWrite 7}
		out_4 {Type O LastRead -1 FirstWrite 7}
		out_5 {Type O LastRead -1 FirstWrite 7}
		out_6 {Type O LastRead -1 FirstWrite 7}
		out_7 {Type O LastRead -1 FirstWrite 7}
		f4_0 {Type I LastRead 5 FirstWrite -1}
		f4_1 {Type I LastRead 5 FirstWrite -1}
		f4_2 {Type I LastRead 5 FirstWrite -1}
		f4_3 {Type I LastRead 5 FirstWrite -1}
		f4_4 {Type I LastRead 5 FirstWrite -1}
		f4_5 {Type I LastRead 5 FirstWrite -1}
		f4_6 {Type I LastRead 5 FirstWrite -1}
		f4_7 {Type I LastRead 5 FirstWrite -1}
		linbu_0_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_2_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_2_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_3_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_3_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_4_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_4_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_5_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_5_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_6_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_6_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_7_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_7_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_2_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_2_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_3_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_3_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_4_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_4_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_5_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_5_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_6_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_6_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_7_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_7_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_2_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_2_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_3_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_3_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_4_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_4_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_5_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_5_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_6_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_6_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_7_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_7_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_2_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_2_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_3_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_3_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_4_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_4_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_5_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_5_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_6_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_6_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_7_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_7_3 {Type IO LastRead -1 FirstWrite -1}}
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
	{"Name" : "Latency", "Min" : "146981", "Max" : "14730040"}
	, {"Name" : "Interval", "Min" : "45954", "Max" : "14727914"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	image_r { ap_memory {  { image_r_address0 mem_address 1 14 }  { image_r_ce0 mem_ce 1 1 }  { image_r_d0 mem_din 1 32 }  { image_r_q0 mem_dout 0 32 }  { image_r_we0 mem_we 1 1 }  { image_r_address1 MemPortADDR2 1 14 }  { image_r_ce1 MemPortCE2 1 1 }  { image_r_d1 mem_din 1 32 }  { image_r_q1 MemPortDOUT2 0 32 }  { image_r_we1 mem_we 1 1 } } }
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

# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 19 \
    name out_0 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0 \
    op interface \
    ports { out_0_din { O 32 vector } out_0_full_n { I 1 bit } out_0_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 20 \
    name out_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1 \
    op interface \
    ports { out_1_din { O 32 vector } out_1_full_n { I 1 bit } out_1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 21 \
    name out_2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_2 \
    op interface \
    ports { out_2_din { O 32 vector } out_2_full_n { I 1 bit } out_2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 22 \
    name out_3 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_3 \
    op interface \
    ports { out_3_din { O 32 vector } out_3_full_n { I 1 bit } out_3_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 23 \
    name out_4 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_4 \
    op interface \
    ports { out_4_din { O 32 vector } out_4_full_n { I 1 bit } out_4_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 24 \
    name out_5 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_5 \
    op interface \
    ports { out_5_din { O 32 vector } out_5_full_n { I 1 bit } out_5_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 25 \
    name out_6 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_6 \
    op interface \
    ports { out_6_din { O 32 vector } out_6_full_n { I 1 bit } out_6_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 26 \
    name out_7 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_7 \
    op interface \
    ports { out_7_din { O 32 vector } out_7_full_n { I 1 bit } out_7_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 27 \
    name f1_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_f1_0 \
    op interface \
    ports { f1_0_dout { I 32 vector } f1_0_empty_n { I 1 bit } f1_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 28 \
    name f1_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_f1_1 \
    op interface \
    ports { f1_1_dout { I 32 vector } f1_1_empty_n { I 1 bit } f1_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 29 \
    name f1_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_f1_2 \
    op interface \
    ports { f1_2_dout { I 32 vector } f1_2_empty_n { I 1 bit } f1_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 30 \
    name f1_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_f1_3 \
    op interface \
    ports { f1_3_dout { I 32 vector } f1_3_empty_n { I 1 bit } f1_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 31 \
    name f1_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_f1_4 \
    op interface \
    ports { f1_4_dout { I 32 vector } f1_4_empty_n { I 1 bit } f1_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 32 \
    name f1_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_f1_5 \
    op interface \
    ports { f1_5_dout { I 32 vector } f1_5_empty_n { I 1 bit } f1_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 33 \
    name f1_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_f1_6 \
    op interface \
    ports { f1_6_dout { I 32 vector } f1_6_empty_n { I 1 bit } f1_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 34 \
    name f1_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_f1_7 \
    op interface \
    ports { f1_7_dout { I 32 vector } f1_7_empty_n { I 1 bit } f1_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}



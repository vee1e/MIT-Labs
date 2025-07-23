read_libs /home/install/FOUNDRY/digital/90nm/dig/lib/slow.lib
read_hdl mod8.v
elaborate
read_sdc mod8_top.sdc
set_db syn_generic_effort medium
set_db syn_map_effort medium
set_db syn_opt_effort medium
syn_generic
syn_map
syn_opt
report_timing > mod8_timing.rep
report_area > mod8_area.rep
report_power > mod8_power.rep
write_hdl > mod8_net.v
write_sdc > mod8.sdc
gui_show

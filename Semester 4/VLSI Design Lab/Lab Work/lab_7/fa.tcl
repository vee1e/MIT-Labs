read_libs /home/install/FOUNDRY/digital/90nm/dig/lib/slow.lib
read_hdl fa.v
elaborate
read_sdc fa_top.sdc
set_db syn_generic_effort medium
set_db syn_map_effort medium
set_db syn_opt_effort medium
syn_generic
syn_map
syn_opt
report_timing > fa_timing.rep
report_area > fa_area.rep
report_power > fa_power.rep
write_hdl > fa_net.v
write_sdc > fa.sdc
gui_show

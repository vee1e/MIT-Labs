read_libs /home/install/FOUNDRY/digital/90nm/dig/lib/slow.lib
read_hdl qab.v
elaborate
read_sdc qab_top.sdc
set_db syn_generic_effort medium
set_db syn_map_effort medium
set_db syn_opt_effort medium
syn_generic
syn_map
syn_opt
report_timing > qab_timing.rep
report_area > qab_area.rep
report_power > qab_power.rep
write_hdl > qab_net.v
write_sdc > qab.sdc
gui_show

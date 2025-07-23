read_libs /home/install/FOUNDRY/digital/90nm/dig/lib/slow.lib
read_hdl msjk.v
elaborate
read_sdc msjk_top.sdc
set_db syn_generic_effort medium
set_db syn_map_effort medium
set_db syn_opt_effort medium
syn_generic
syn_map
syn_opt
report_timing > msjk_timing.rep
report_area > msjk_area.rep
report_power > msjk_power.rep
write_hdl > msjk_net.v
write_sdc > msjk.sdc
gui_show

read_libs /home/install/FOUNDRY/digital/90nm/dig/lib/slow.lib
read_hdl usr.v
elaborate
read_sdc usr_top.sdc
set_db syn_generic_effort medium
set_db syn_map_effort medium
set_db syn_opt_effort medium
syn_generic
syn_map
syn_opt
report_timing > usr_timing.rep
report_area > usr_area.rep
report_power > usr_power.rep
write_hdl > usr_net.v
write_sdc > usr.sdc
gui_show

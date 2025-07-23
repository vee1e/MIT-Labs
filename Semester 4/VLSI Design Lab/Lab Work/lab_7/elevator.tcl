read_libs /home/install/FOUNDRY/digital/90nm/dig/lib/slow.lib
read_hdl elevator.v
elaborate
read_sdc elevator_top.sdc
set_db syn_generic_effort medium
set_db syn_map_effort medium
set_db syn_opt_effort medium
syn_generic
syn_map
syn_opt
report_timing > elevator_timing.rep
report_area > elevator_area.rep
report_power > elevator_power.rep
write_hdl > elevator_net.v
write_sdc > elevator.sdc
gui_show

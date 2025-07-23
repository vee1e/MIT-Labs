read_libs /home/install/FOUNDRY/digital/90nm/dig/lib/slow.lib
read_hdl LineFollowerRobot.v
elaborate
read_sdc LineFollowerRobot_top.sdc
set_db syn_generic_effort medium
set_db syn_map_effort medium
set_db syn_opt_effort medium
syn_generic
syn_map
syn_opt
report_timing > LineFollowerRobot_timing.rep
report_area > LineFollowerRobot_area.rep
report_power > LineFollowerRobot_power.rep
write_hdl > LineFollowerRobot_net.v
write_sdc > LineFollowerRobot.sdc
gui_show

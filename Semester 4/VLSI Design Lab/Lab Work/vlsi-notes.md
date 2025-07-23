sdc:

create_clock -name "clk" -period 2.0 -waveform {0.0 1.0} [get_ports clk]
set_clock_transition 0.1 [get_clocks clk]
set_clock_gating_check -setup 0.0
set_wire_load_mode "enclosed"
set_clock_uncertainty -setup 0.01 [get_ports clk]
set_clock_uncertainty -hold 0.01 [get_ports clk]


tcl:

read_libs /home/install/FOUNDRY/digital/90nm/dig/lib/slow.lib
read_hdl <name>.v
elaborate
read_sdc <name>.sdc

set_db syn_generic_effort medium
set_db syn_map_effort medium
set_db syn_opt_effort medium

syn_generic
syn_map
syn_opt

report_timing > <name>.timing
report_area > <name>.area
report_power > <name>.power

write_hdl > <name>-net.v
write_sdc > <name>.sdc

gui_show

irun:

irun <name>.v <name>-tb.v -access +rwc -gui

physical design:

import design
auto assign
verilog -> select netlist

lef files -> select both lef files

power/ground net as Vdd/Vss

create analysis configuration

- library sets -> slow and fast
- max rc corner -> captable -> temp 125c -> qrc
- min rc corner -> captable -> temp 0c -> qrc
- max delay corner -> rc_max -> slow.lib -> max_delay
- min delay corner -> rc_min -> fast.lib -> min_delay
- constraints -> new CONST -> .sdc file
- analysis view -> new  -> worstcase max delay CONST
- analysis view -> new  -> bestcase min delay CONST
- setup analysis -> worstcase
- hold analysis -> bestcase
- save & close as default.view

mmmc view def file -> default.view


floorplan -> specify floorplan
power -> connect global nets -> Vdd and Vss
power -> power planning -> add ring -> Vdd and Vss -> 1.2 width and 0.4 spacing, 9 9 8 8 metal -> offset center
power -> power planning -> add stripe -> Vdd and Vss -> 0.6 width 0.4 spacing -> 100 4 sets -> metal 8
power -> power planning -> add stripe -> Vdd and Vss -> 0.6 width 0.4 spacing -> 100 4 sets -> metal 9
route -> special route -> Vdd and Vss -> metal 9
place -> physical cell -> add endcap -> fill1 both
timing -> report timing -> preplace
place -> place standard cell -> full placement -> enable ppo -> place io pins ->
timing -> report timing -> prects
clock -> ccopt tree debugger
timing -> report timing -> postcts
route -> nano route -> route -> enable timing and si driven
tools -> set mode -> on chip and cppr
route -> nano route -> route -> enable timing and si driven
timing -> debug timing  -> check type setup
timing -> debug timing  -> check type hold
file -> save design
file -> save netlist
file -> save gds/oasis


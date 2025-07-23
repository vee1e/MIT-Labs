# ####################################################################

#  Created by Genus(TM) Synthesis Solution 21.14-s082_1 on Sat Mar 01 21:09:10 IST 2025

# ####################################################################

set sdc_version 2.0

set_units -capacitance 1000fF
set_units -time 1000ps

# Set the current design
current_design qab

set_load -pin_load 0.15 [get_ports Q]
set_clock_gating_check -setup 0.0 
set_max_fanout 30.000 [current_design]
set_max_capacitance 30.0 [get_ports A]
set_max_capacitance 30.0 [get_ports B]
set_max_capacitance 30.0 [get_ports C]
set_max_capacitance 30.0 [get_ports Q]
set_input_transition 0.12 [get_ports A]
set_input_transition 0.12 [get_ports B]
set_input_transition 0.12 [get_ports C]
set_wire_load_mode "enclosed"

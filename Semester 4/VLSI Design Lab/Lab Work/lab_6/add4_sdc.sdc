# ####################################################################

#  Created by Genus(TM) Synthesis Solution 21.14-s082_1 on Sat Feb 22 23:14:28 IST 2025

# ####################################################################

set sdc_version 2.0

set_units -capacitance 1000fF
set_units -time 1000ps

# Set the current design
current_design add4

set_load -pin_load 0.15 [get_ports {Sum[3]}]
set_load -pin_load 0.15 [get_ports {Sum[2]}]
set_load -pin_load 0.15 [get_ports {Sum[1]}]
set_load -pin_load 0.15 [get_ports {Sum[0]}]
set_load -pin_load 0.15 [get_ports Cout]
set_clock_gating_check -setup 0.0 
set_max_fanout 30.000 [current_design]
set_max_capacitance 30.0 [get_ports {A[3]}]
set_max_capacitance 30.0 [get_ports {A[2]}]
set_max_capacitance 30.0 [get_ports {A[1]}]
set_max_capacitance 30.0 [get_ports {A[0]}]
set_max_capacitance 30.0 [get_ports {B[3]}]
set_max_capacitance 30.0 [get_ports {B[2]}]
set_max_capacitance 30.0 [get_ports {B[1]}]
set_max_capacitance 30.0 [get_ports {B[0]}]
set_max_capacitance 30.0 [get_ports Cin]
set_max_capacitance 30.0 [get_ports {Sum[3]}]
set_max_capacitance 30.0 [get_ports {Sum[2]}]
set_max_capacitance 30.0 [get_ports {Sum[1]}]
set_max_capacitance 30.0 [get_ports {Sum[0]}]
set_max_capacitance 30.0 [get_ports Cout]
set_input_transition 0.12 [get_ports {A[3]}]
set_input_transition 0.12 [get_ports {A[2]}]
set_input_transition 0.12 [get_ports {A[1]}]
set_input_transition 0.12 [get_ports {A[0]}]
set_input_transition 0.12 [get_ports {B[3]}]
set_input_transition 0.12 [get_ports {B[2]}]
set_input_transition 0.12 [get_ports {B[1]}]
set_input_transition 0.12 [get_ports {B[0]}]
set_input_transition 0.12 [get_ports Cin]
set_wire_load_mode "enclosed"

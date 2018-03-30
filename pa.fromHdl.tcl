
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name ProjectFinal -dir "X:/My Documents/EC311/Labs/ProjectFinal/planAhead_run_1" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "KitchenTimer.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {seven_alternate.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Debounce.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ClockDivider.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {binary_to_segment.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {KitchenTimer.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top KitchenTimer $srcset
add_files [list {KitchenTimer.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3

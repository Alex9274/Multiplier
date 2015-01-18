
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name Multiplicador_8_bits -dir "C:/Users/Alex/Desktop/2.5.1/planAhead_run_1" -part xc3s200ft256-5
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Alex/Desktop/2.5.1/TOP.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Alex/Desktop/2.5.1} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "TOP.ucf" [current_fileset -constrset]
add_files [list {TOP.ucf}] -fileset [get_property constrset [current_run]]
link_design

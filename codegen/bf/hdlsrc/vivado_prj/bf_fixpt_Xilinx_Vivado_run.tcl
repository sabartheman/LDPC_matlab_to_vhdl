# HDL Coder Downstream Integration Tcl Script

set myTool "Xilinx Vivado 2017.4"
set myProject "bf_fixpt_vivado"
set myProjectFile "bf_fixpt_vivado.xpr"
set myTopLevelEntity "bf_fixpt"

set Family "Artix7"
set Device "xc7a200tl"
set Package "fbg676"
set Speed "-2L"
set MapTimePathNumber "3"
set MapTimeAdvAnalysis "True"
set PARTimePathNumber "3"
set PARTimeAdvAnalysis "True"

# Open existing project
puts "### Open existing $myTool project \/home\/sky\/Documents\/MATLAB\/Low_density_parity_code\/codegen\/bf\/hdlsrc\/vivado_prj\/bf_fixpt_vivado.xpr"
open_project ${myProject}

# Running PostMapTiming
puts "### Running PostMapTiming in $myTool ..."
open_run synth_1
report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose -max_paths $MapTimePathNumber -nworst $MapTimePathNumber -name timing_post_map -file timing_post_map.rpt
source -quiet "/usr/local/MATLAB/R2018b/toolbox/hdlcoder/hdlcommon/+downstreamtools/extractVivadoTiming.tcl"
extracTimingReport ${myTopLevelEntity}_preroute.tvr
puts "### PostMapTiming Complete."

# Close project
puts "### Close $myTool project."
close_project


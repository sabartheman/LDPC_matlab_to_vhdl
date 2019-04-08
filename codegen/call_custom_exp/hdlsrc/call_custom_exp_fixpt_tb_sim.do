onbreak resume
onerror resume
vsim -novopt work.call_custom_exp_fixpt_tb

add wave sim:/call_custom_exp_fixpt_tb/u_call_custom_exp_fixpt/x
add wave sim:/call_custom_exp_fixpt_tb/u_call_custom_exp_fixpt/y
add wave sim:/call_custom_exp_fixpt_tb/y_ref
run -all

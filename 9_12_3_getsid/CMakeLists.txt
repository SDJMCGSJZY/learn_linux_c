project(9_12_3_getsid)
add_executable(9_12_3_getsid ./9_12_3_getsid)
set_target_properties(9_12_3_getsid PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
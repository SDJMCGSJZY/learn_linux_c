project(9_7_1_vfork)
add_executable(9_7_1_vfork ./9_7_1_vfork)
set_target_properties(9_7_1_vfork PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
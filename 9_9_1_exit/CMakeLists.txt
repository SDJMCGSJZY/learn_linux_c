project(9_9_1_exit)
add_executable(9_9_1_exit ./9_9_1_exit)
set_target_properties(9_9_1_exit PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
project(9_5_1_fork)
add_executable(9_5_1_fork ./9_5_1_fork)
set_target_properties(9_5_1_fork PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
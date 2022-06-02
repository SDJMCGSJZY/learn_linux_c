project(9_6_2_fork)
add_executable(9_6_2_fork ./9_6_2_fork)
set_target_properties(9_6_2_fork PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
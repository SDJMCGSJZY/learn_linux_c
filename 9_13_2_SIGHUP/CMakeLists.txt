project(9_13_2_SIGHUP)
add_executable(9_13_2_SIGHUP ./9_13_2_SIGHUP)
set_target_properties(9_13_2_SIGHUP PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
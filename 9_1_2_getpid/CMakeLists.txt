project(9_1_2_getpid)
add_executable(9_1_2_getpid ./9_1_2_getpid)

set_target_properties(9_1_2_getpid PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
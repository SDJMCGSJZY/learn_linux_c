project(9_1_1_atexit)
add_executable(9_1_1_atexit ./9_1_1_atexit)

set_target_properties(9_1_1_atexit PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
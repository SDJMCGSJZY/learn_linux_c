project(9_10_1_wait)
add_executable(9_10_1_wait ./9_10_1_wait)
set_target_properties(9_10_1_wait PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
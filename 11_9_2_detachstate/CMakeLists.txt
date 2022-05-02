project(11_9_2_detachstate)
add_executable(11_9_2_detachstate ./11_9_2_detachstate.c)

set_target_properties(11_9_2_detachstate PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
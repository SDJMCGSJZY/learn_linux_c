project(8_5_1_kill)
add_executable(8_5_1_kill ./8_5_1_kill.c)

set_target_properties(8_5_1_kill PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
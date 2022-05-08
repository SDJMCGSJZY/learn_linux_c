project(8_4_1_signal)
add_executable(8_4_1_signal ./8_4_1_signal.c)

set_target_properties(8_4_1_signal PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
project(8_8_2_strsignal)
add_executable(8_8_2_strsignal ./8_8_2_strsignal.c)

set_target_properties(8_8_2_strsignal PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
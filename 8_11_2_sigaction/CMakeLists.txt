project(8_11_2_sigaction)
add_executable(8_11_2_sigaction ./8_11_2_sigaction.c)

set_target_properties(8_11_2_sigaction PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
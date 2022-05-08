project(8_4_4_sigaction)
add_executable(8_4_4_sigaction ./8_4_4_sigaction.c)

set_target_properties(8_4_4_sigaction PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
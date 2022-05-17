project(8_10_1_sigsuspend)
add_executable(8_10_1_sigsuspend ./8_10_1_sigsuspend.c)

set_target_properties(8_10_1_sigsuspend PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
project(8_8_1_sys_siglist)
add_executable(8_8_1_sys_siglist ./8_8_1_sys_siglist.c)

set_target_properties(8_8_1_sys_siglist PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
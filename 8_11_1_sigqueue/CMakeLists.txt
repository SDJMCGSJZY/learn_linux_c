project(8_11_1_sigqueue)
add_executable(8_11_1_sigqueue ./8_11_1_sigqueue.c)

set_target_properties(8_11_1_sigqueue PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
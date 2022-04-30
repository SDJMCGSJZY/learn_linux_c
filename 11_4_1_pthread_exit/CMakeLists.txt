project(11_4_1_pthread_exit)
add_executable(11_4_1_pthread_exit ./11_4_1_pthread_exit.c)

set_target_properties(11_4_1_pthread_exit PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
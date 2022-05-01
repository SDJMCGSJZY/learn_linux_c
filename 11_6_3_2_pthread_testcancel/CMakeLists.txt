project(11_6_3_2_pthread_testcancel)
add_executable(11_6_3_2_pthread_testcancel ./11_6_3_2_pthread_testcancel.c)

set_target_properties(11_6_3_2_pthread_testcancel PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
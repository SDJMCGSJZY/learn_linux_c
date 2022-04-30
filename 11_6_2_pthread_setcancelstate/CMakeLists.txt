project(11_6_2_pthread_setcancelstate)
add_executable(11_6_2_pthread_setcancelstate ./11_6_2_pthread_setcancelstate.c)

set_target_properties(11_6_2_pthread_setcancelstate PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
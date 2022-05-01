project(11_6_3_pthread_setcanceltype)
add_executable(11_6_3_pthread_setcanceltype ./11_6_3_pthread_setcanceltype.c)

set_target_properties(11_6_3_pthread_setcanceltype PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
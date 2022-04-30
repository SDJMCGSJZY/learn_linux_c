project(11_5_1_pthread_join)
add_executable(11_5_1_pthread_join ./11_5_1_pthread_join.c)

set_target_properties(11_5_1_pthread_join PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
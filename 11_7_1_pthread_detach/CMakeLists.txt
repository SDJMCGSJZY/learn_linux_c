project(11_7_1_pthread_detach)
add_executable(11_7_1_pthread_detach ./11_7_1_pthread_detach.c)

set_target_properties(11_7_1_pthread_detach PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
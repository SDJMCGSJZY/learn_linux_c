project(11_6_1_pthread_cancel)
add_executable(11_6_1_pthread_cancel ./11_6_1_pthread_cancel.c)

set_target_properties(11_6_1_pthread_cancel PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
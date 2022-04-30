project(11_3_1_pthread_create)
add_executable(11_3_1_pthread_create ./11_3_1_pthread_create.c)

set_target_properties(11_3_1_pthread_create  PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
project(12_2_1_pthread_mutex_t)
add_executable(12_2_1_pthread_mutex_t ./12_2_1_pthread_mutex_t.c)

set_target_properties(12_2_1_pthread_mutex_t PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
project(12_2_3_pthread_mutex_destroy)
add_executable(12_2_3_pthread_mutex_destroy ./12_2_3_pthread_mutex_destroy.c)

set_target_properties(12_2_3_pthread_mutex_destroy PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
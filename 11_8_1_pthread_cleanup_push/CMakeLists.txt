project(11_8_1_pthread_cleanup_push)
add_executable(11_8_1_pthread_cleanup_push ./11_8_1_pthread_cleanup_push.c)

set_target_properties(11_8_1_pthread_cleanup_push PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
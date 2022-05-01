project(11_9_1_pthread_attr_getstack)
add_executable(11_9_1_pthread_attr_getstack ./11_9_1_pthread_attr_getstack.c)

set_target_properties(11_9_1_pthread_attr_getstack PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
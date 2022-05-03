project(12_5_1_pthread_rwlock_t)
add_executable(12_5_1_pthread_rwlock_t ./12_5_1_pthread_rwlock_t.c)

set_target_properties(12_5_1_pthread_rwlock_t PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
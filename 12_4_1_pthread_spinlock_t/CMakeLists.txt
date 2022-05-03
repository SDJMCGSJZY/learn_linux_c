project(12_4_1_pthread_spinlock_t)
add_executable(12_4_1_pthread_spinlock_t ./12_4_1_pthread_spinlock_t.c)

set_target_properties(12_4_1_pthread_spinlock_t PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
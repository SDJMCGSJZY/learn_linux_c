project(12_2_2_pthread_mutex_trylock)
add_executable(12_2_2_pthread_mutex_trylock ./12_2_2_pthread_mutex_trylock.c)

set_target_properties(12_2_2_pthread_mutex_trylock PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
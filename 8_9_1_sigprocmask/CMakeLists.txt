project(8_9_1_sigprocmask)
add_executable(8_9_1_sigprocmask ./8_9_1_sigprocmask.c)

set_target_properties(8_9_1_sigprocmask PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
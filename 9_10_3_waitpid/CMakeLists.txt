project(9_10_3_waitpid)
add_executable(9_10_3_waitpid ./9_10_3_waitpid)
set_target_properties(9_10_3_waitpid PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
project(9_10_2_waitpid)
add_executable(9_10_2_waitpid ./9_10_2_waitpid)
set_target_properties(9_10_2_waitpid PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
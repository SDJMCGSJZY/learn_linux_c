project(9_11_1_execve)
add_executable(9_11_1_execve ./9_11_1_execve)
set_target_properties(9_11_1_execve PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
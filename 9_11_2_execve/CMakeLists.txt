project(9_11_2_execve)
add_executable(9_11_2_execve ./9_11_2_execve)
set_target_properties(9_11_2_execve PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
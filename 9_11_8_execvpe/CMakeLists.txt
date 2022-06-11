project(9_11_8_execvpe)
add_executable(9_11_8_execvpe ./9_11_8_execvpe)
set_target_properties(9_11_8_execvpe PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
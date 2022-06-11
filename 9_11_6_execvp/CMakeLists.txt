project(9_11_6_execvp)
add_executable(9_11_6_execvp ./9_11_6_execvp)
set_target_properties(9_11_6_execvp PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
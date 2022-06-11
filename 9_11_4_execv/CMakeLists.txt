project(9_11_4_execv)
add_executable(9_11_4_execv ./9_11_4_execv)
set_target_properties(9_11_4_execv PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
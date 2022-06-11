project(9_11_7_execle)
add_executable(9_11_7_execle ./9_11_7_execle)
set_target_properties(9_11_7_execle PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
project(9_11_3_execl)
add_executable(9_11_3_execl ./9_11_3_execl)
set_target_properties(9_11_3_execl PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
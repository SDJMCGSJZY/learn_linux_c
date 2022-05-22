project(9_2_1_environ)
add_executable(9_2_1_environ ./9_2_1_environ)
set_target_properties(9_2_1_environ PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
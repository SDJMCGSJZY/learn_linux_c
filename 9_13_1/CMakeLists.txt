project(9_13_1)
add_executable(9_13_1 ./9_13_1)
set_target_properties(9_13_1 PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
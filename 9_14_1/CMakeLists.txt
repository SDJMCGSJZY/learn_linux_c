project(9_14_1)
add_executable(9_14_1 ./9_14_1)
set_target_properties(9_14_1 PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
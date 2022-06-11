project(9_14_2)
add_executable(9_14_2 ./9_14_2)
set_target_properties(9_14_2 PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
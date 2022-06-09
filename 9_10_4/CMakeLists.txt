project(9_10_4)
add_executable(9_10_4 ./9_10_4)
set_target_properties(9_10_4 PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
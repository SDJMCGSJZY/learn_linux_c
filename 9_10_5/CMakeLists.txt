project(9_10_5)
add_executable(9_10_5 ./9_10_5)
set_target_properties(9_10_5 PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
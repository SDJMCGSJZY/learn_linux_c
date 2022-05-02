project(12_3_2)
add_executable(12_3_2 ./12_3_2.c)

set_target_properties(12_3_2 PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
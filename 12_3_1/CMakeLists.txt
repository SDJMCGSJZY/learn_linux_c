project(12_3_1)
add_executable(12_3_1 ./12_3_1.c)

set_target_properties(12_3_1 PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
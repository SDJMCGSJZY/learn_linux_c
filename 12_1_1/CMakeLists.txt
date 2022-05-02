project(12_1_1)
add_executable(12_1_1 ./12_1_1.c)

set_target_properties(12_1_1 PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
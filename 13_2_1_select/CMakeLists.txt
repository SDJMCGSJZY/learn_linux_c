project(13_2_1_select)
add_executable(13_2_1_select ./13_2_1_select.c)

set_target_properties(13_2_1_select PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
project(temp_calculate)
add_executable(temp_calculate ./temp_calculate.c)

set_target_properties(temp_calculate PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
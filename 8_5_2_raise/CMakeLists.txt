project(8_5_2_raise)
add_executable(8_5_2_raise ./8_5_2_raise.c)

set_target_properties(8_5_2_raise PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
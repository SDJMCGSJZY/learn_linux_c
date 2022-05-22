project(8_12_1_abort)
add_executable(8_12_1_abort ./8_12_1_abort)

set_target_properties(8_12_1_abort PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
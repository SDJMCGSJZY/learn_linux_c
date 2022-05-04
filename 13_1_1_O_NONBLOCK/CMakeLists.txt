project(13_1_1_O_NONBLOCK)
add_executable(13_1_1_O_NONBLOCK ./13_1_1_O_NONBLOCK.c)

set_target_properties(13_1_1_O_NONBLOCK PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
project(13_2_3_poll)
add_executable(13_2_3_poll ./13_2_3_poll.c)

set_target_properties(13_2_3_poll PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
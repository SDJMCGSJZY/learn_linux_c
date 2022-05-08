project(8_6_2_alarm_pause)
add_executable(8_6_2_alarm_pause ./8_6_2_alarm_pause.c)

set_target_properties(8_6_2_alarm_pause PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
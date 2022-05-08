project(8_6_1_alarm)
add_executable(8_6_1_alarm ./8_6_1_alarm.c)

set_target_properties(8_6_1_alarm PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
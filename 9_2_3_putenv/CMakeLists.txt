project(9_2_3_putenv)
add_executable(9_2_3_putenv ./9_2_3_putenv)
set_target_properties(9_2_3_putenv PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
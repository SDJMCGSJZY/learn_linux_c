project(9_2_2_getenv)
add_executable(9_2_2_getenv ./9_2_2_getenv)
set_target_properties(9_2_2_getenv PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
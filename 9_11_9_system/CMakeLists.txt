project(9_11_9_system)
add_executable(9_11_9_system ./9_11_9_system)
set_target_properties(9_11_9_system PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
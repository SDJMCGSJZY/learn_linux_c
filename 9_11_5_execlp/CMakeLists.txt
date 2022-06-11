project(9_11_5_execlp)
add_executable(9_11_5_execlp ./9_11_5_execlp)
set_target_properties(9_11_5_execlp PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
project(9_12_1_getpgrp_getpgid)
add_executable(9_12_1_getpgrp_getpgid ./9_12_1_getpgrp_getpgid)
set_target_properties(9_12_1_getpgrp_getpgid PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
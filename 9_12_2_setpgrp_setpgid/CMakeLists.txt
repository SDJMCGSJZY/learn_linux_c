project(9_12_2_setpgrp_setpgid)
add_executable(9_12_2_setpgrp_setpgid ./9_12_2_setpgrp_setpgid)
set_target_properties(9_12_2_setpgrp_setpgid PROPERTIES COMPILE_FLAGS "-pthread" LINK_FLAGS "-pthread")
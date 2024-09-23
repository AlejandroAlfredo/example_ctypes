# build lib
add_library(dll_example SHARED "dllmain.c" "pch.c" "pch.h" "framework.h")
set_target_properties(dll_example PROPERTIES WIN32 ON)
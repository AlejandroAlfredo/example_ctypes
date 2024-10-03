# build lib
project("example_c")
set(CMAKE_C_STANDARD 17)
add_library(example_c SHARED "main.c" "pch.h" "framework.h")
set_target_properties(example_c PROPERTIES WIN32 ON)
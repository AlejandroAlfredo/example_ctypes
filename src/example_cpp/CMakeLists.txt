# build lib
project("example_cpp")
set(CMAKE_CXX_STANDARD 17)
add_library(example_cpp SHARED "main.cpp" "pch.h" "framework.h")
set_target_properties(example_cpp PROPERTIES WIN32 ON)
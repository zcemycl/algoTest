cmake_minimum_required(VERSION 3.12)
project(pycudemo)
find_package(CUDA REQUIRED)

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)
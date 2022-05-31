cmake_minimum_required(VERSION 3.4)
project(example)

find_package(pybind11 REQUIRED)
pybind11_add_module(example src/example.cpp)

target_compile_definitions(example
    PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})
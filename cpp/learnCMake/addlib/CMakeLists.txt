cmake_minimum_required(VERSION 3.14.0)
project(ADDLIB)
add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Adder)
target_include_directories(${PROJECT_NAME} PUBLIC Adder)
target_link_directories(${PROJECT_NAME} PRIVATE Adder)
target_link_libraries(${PROJECT_NAME} adder)
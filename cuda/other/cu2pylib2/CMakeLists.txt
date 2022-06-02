cmake_minimum_required(VERSION 3.12)
project(pybind11cuda)
find_package(CUDA REQUIRED)
set(Python_ADDITIONAL_VERSIONS 3.7)

# [[find_package(PythonLibs 3.7 EXACT REQUIRED)]]
#[[set(PythonLibs /home/yui/anaconda3/lib/libpython3.7m.so.1.0)]]
find_package(PythonInterp 3.7 REQUIRED)
find_package(PythonLibs 3.7 REQUIRED)
#[[find_package(Python 3.7 COMPONENTS Interpreter Development)]]

include_directories(
    ${PYTHON_INCLUDE_DIRS}
    /home/yui/anaconda3/lib/python3.7/site-packages/pybind11/include
    )

link_directories(
    /usr/local/cuda/lib64
    )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(src)

add_subdirectory(src)
add_subdirectory(tst)
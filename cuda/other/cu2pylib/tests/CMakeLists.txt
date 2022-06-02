find_package(CUDA REQUIRED)
cuda_add_executable(tst_cudalib testDriver.cpp)
target_link_libraries(tst_cudalib cudalib)
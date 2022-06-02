cuda_add_library(gpu_library SHARED main.cu)

target_link_libraries(gpu_library
  ${PYTHON_LIBRARIES}
  cudart)

set_target_properties(gpu_library PROPERTIES PREFIX "")
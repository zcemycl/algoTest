set(BINARY ${CMAKE_PROJECT_NAME})

# Add SQLite CMake modules
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)
set(SOURCES ${SOURCES})
add_executable(${BINARY}_run ${SOURCES})
add_library(${BINARY}_lib STATIC ${SOURCES})

find_package(SQLite3 REQUIRED)
target_link_libraries(${BINARY}_run SQLite::SQLite3)
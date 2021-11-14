set(BINARY ${CMAKE_PROJECT_NAME}_tst)
# Add SQLite CMake modules
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(SOURCES ${TEST_SOURCES})

add_executable(${BINARY} ${TEST_SOURCES})

add_test(NAME ${BINARY} COMMAND ${BINARY})

find_package(SQLite3 REQUIRED)
target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib 
    gtest SQLite::SQLite3)

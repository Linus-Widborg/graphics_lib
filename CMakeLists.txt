cmake_minimum_required(VERSION 3.6)
project(graphics_lib)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/Point.cpp src/draw_graphics.cpp)
add_executable(graphics_lib main.cpp ${SOURCE_FILES})

################################
# GTest
################################
add_subdirectory(lib/googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

################################
# Unit Tests
################################
add_executable(runUnitTests test/testGraphicsLibrary.cpp ${SOURCE_FILES})
target_link_libraries(runUnitTests gtest gtest_main)
add_test(runUnitTests runUnitTests)
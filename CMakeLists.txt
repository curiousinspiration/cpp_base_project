cmake_minimum_required(VERSION 3.1)
project(calculator)
set(CMAKE_BUILD_TYPE Release)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
set(CMAKE_CXX_FLAGS "-Wall -std=c++0x -O0 -g3")

# Project Headers
include_directories(include)

# Project Sources
file(GLOB_RECURSE SOURCES "src/*.cpp")
add_library(calculator STATIC ${SOURCES})

# Third Party
include_directories(${GLOG_INCLUDE_DIR})
include_directories(${GTEST_INCLUDE_DIR})

link_directories(${GLOG_LIB_DIR})
link_directories(${GTEST_LIB_DIR})

set(LIBS
    ${LIBS}
    glog
    gtest
    calculator
)

link_directories(build)

# tests
file(GLOB_RECURSE TEST_SOURCES "tests/*.cpp")
add_executable(tests ${TEST_SOURCES})
target_link_libraries(tests ${LIBS})

# tools
add_executable(sphere_calculator tools/sphere_calculator/main.cpp)
target_link_libraries(sphere_calculator ${LIBS})

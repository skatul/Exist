cmake_minimum_required(VERSION 3.15)
project(Exist VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Library
add_library(exist
    src/exist/Temporal.cpp
    src/exist/Math.cpp
)

target_include_directories(exist
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# Examples
add_executable(basic_usage examples/basic_usage.cpp)
target_link_libraries(basic_usage PRIVATE exist)

# Tests
enable_testing()
add_subdirectory(tests)

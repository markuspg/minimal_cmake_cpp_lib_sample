cmake_minimum_required(VERSION 3.7.2 FATAL_ERROR)

enable_testing()

project(minimal_cmake_cpp_lib_sample
    VERSION 1.0.0
    LANGUAGES CXX)

find_package(Boost 1.62.0 REQUIRED COMPONENTS unit_test_framework)

add_subdirectory(src)
add_subdirectory(tests)

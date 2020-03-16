cmake_minimum_required(VERSION 3.7.2 FATAL_ERROR)

add_library(${PROJECT_NAME}
   multiply.cpp)
target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR})

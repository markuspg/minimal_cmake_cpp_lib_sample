cmake_minimum_required(VERSION 3.7.2 FATAL_ERROR)

add_executable(${PROJECT_NAME}_test
    multiply.cpp)
target_link_libraries(${PROJECT_NAME}_test
    ${PROJECT_NAME})

add_test(test_multiply
    ${PROJECT_NAME}_test)

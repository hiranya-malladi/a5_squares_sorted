cmake_minimum_required(VERSION 3.10)

project(a5_squares_sorted)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)
include_directories(tests)

add_executable(a5_squares_sorted
    src/main.cpp
    src/squares.cpp
)

add_executable(my_test
    src/squares.cpp
    tests/test.cpp
)

enable_testing()

add_test(NAME my_test COMMAND my_test)
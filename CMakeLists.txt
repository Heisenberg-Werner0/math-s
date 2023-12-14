cmake_minimum_required(VERSION 3.27)
project(math_s)

set(CMAKE_CXX_STANDARD 20)

add_executable(math_s
        example/example.cpp
        src/fraction.cpp
)

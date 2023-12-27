cmake_minimum_required(VERSION 3.27)
project(math_s)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(math_s
        example/main-example.cpp
        src/number/fraction.cpp
        src/number/integer.cpp

)

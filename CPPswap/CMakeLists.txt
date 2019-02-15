cmake_minimum_required(VERSION 3.13)
project(CPPswap)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CPPswap
        gtest_lite.h
        memtrace.cpp
        memtrace.h
        swap.cpp
        swap.h
        swap_test.cpp)

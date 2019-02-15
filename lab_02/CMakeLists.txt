cmake_minimum_required(VERSION 3.13)
project(string2_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(string2_cpp
        gtest_lite.h
        memtrace.cpp
        memtrace.h
        string2.cpp
        string2.h
        string2_main.cpp
)

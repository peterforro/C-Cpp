cmake_minimum_required(VERSION 3.13)
project(string1 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(string1
        gtest_lite.h
        memtrace.c
        memtrace.h
        string1.c
        string1.h
        string1_main.c)

cmake_minimum_required(VERSION 3.13)
project(notOO)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(notOO
        nem_oo_teszt.cpp
        nem_oo.cpp)

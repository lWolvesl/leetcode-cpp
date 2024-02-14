cmake_minimum_required(VERSION 3.22.1)
project(leecode-c)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 99)

add_executable(leecode-c main.cpp)

target_include_directories(leecode-c PRIVATE dataStruct/LinkedList)

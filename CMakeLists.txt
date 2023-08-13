cmake_minimum_required(VERSION 3.22.1)
project(leecode-c)

set(CMAKE_CXX_STANDARD 11)

add_executable(leecode-c main.cpp
        dataStruct/Heap/Heap.h)

target_include_directories(leecode-c PRIVATE dataStruct/LinkedList)

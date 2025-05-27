cmake_minimum_required(VERSION 3.22.1)
project(leecode-cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(leecode-cpp main.cpp)

target_include_directories(leecode-cpp PRIVATE dataStruct/LinkedList)

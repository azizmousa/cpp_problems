cmake_minimum_required(VERSION 3.1)

set(CMAKE_C_COMPILER C:/MinGW/bin/gcc.exe)
set(CMAKE_CXX_COMPILER C:/MinGW/bin/g++.exe)

project(problemsToSolve VERSION 0.0.1)

set(CMAKE_CXX_FLAGS "-Wall -O2 -g")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

add_executable(run src/deque.cpp)
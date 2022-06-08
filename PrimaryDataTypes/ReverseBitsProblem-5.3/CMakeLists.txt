cmake_minimum_required(VERSION 3.5)

project(competitive-programming-problems LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(reverse_bits main.cpp reverse_bits.cpp swap_bits.cpp)
target_include_directories(reverse_bits PRIVATE /)

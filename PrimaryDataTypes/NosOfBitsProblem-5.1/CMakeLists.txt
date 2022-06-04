cmake_minimum_required(VERSION 3.5)

project(competitive-programming-problems LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(parity_check main.cpp brute-force-bit-method.cpp)
target_include_directories(parity_check PUBLIC /)

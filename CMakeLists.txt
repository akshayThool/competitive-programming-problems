cmake_minimum_required(VERSION 3.5)

project(competitive-programming-problems LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(parity_check PrimaryDataTypes/NosOfBitsProblem-5.1/main.cpp PrimaryDataTypes/NosOfBitsProblem-5.1/brute-force-bit-method.cpp)
target_include_directories(parity_check PRIVATE PrimaryDataTypes/NosOfBitsProblem-5.1/)

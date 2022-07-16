cmake_minimum_required(VERSION 3.5)

project(competitive-programming-problems LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(removingDuplicates main.cpp RemoveDupes.cpp)
target_include_directories(removingDuplicates PUBLIC /)

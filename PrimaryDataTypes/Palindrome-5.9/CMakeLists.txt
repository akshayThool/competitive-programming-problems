cmake_minimum_required(VERSION 3.5)

project(competitive-programming-problems LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(digitPalin main.cpp palindrome.cpp reverseString.cpp)
target_include_directories(digitPalin PUBLIC /)

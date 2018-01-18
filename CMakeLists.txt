cmake_minimum_required(VERSION 2.8)

SET(CMAKE_C_COMPILER C:\MinGW\bin\gcc)
SET(CMAKE_CXX_COMPILER C:\MinGW\bin\g++)

project(Palindrome)

set(CMAKE_CXX_FLAGS "-pedantic -Wall")

add_library (functions functions.cc)

add_executable(Palindrome main.cc)

cmake_minimum_required(VERSION 2.8)

project(Palindrome)

enable_testing()

set(CMAKE_CXX_FLAGS "-pedantic -Wall")

add_executable(Palindrome
   main.cc
   functions.cc
)

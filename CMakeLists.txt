cmake_minimum_required(VERSION 3.15)
project(Craps)

set(CMAKE_CXX_STANDARD 14)

add_executable(Craps main.cpp Die.cpp Die.h CheckForWin.cpp CheckHeader.h)
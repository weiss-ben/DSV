cmake_minimum_required(VERSION 3.21)
project(DSV)

set(CMAKE_CXX_STANDARD 14)

add_executable(DSV main.cpp ValueList.cpp ValueList.h Test.cpp Test.h DataValue.cpp DataValue.h)

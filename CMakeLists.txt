cmake_minimum_required(VERSION 3.20)
project(Project01)

set(CMAKE_CXX_STANDARD 23)

include_directories(.)

add_executable(Project01
        CreditCard.cpp
        CreditCard.h
        main.cpp)

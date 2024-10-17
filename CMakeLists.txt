cmake_minimum_required(VERSION 3.29)
project(TD_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(td1/ex1)
include_directories(td1/ex2)
include_directories(td2)

add_executable(TD_cpp
    td1/ex1/main.cpp
    td1/ex1/main.h
    td1/ex1/my_class.cpp
    td1/ex1/my_class.h
    td1/ex2/complex2d.cpp
    td1/ex2/complex2d.h
    td1/ex2/main.cpp
    td2/ex2.h
    td2/main.cpp
    td2/search.cpp
    td2/search.h)

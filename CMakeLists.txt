cmake_minimum_required(VERSION 3.10)
project(DSA_Practice)

set(CMAKE_CXX_STANDARD 17)

# Car example
add_executable(class_example OOP/class_example.cpp
        OOP/constructors.cpp
        OOP/constructors.h
        "Linked_list again practice/first.h"
        Pointers/pointer2.cpp
        Pointers/ptrfunc.cpp
        Arrays/selection.cpp)

# Student example
add_executable(student_example OOP/student_example.cpp)

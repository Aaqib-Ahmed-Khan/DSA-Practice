cmake_minimum_required(VERSION 3.10)
project(DSA_Practice)

set(CMAKE_CXX_STANDARD 17)

# Car example
add_executable(class_example
        OOP/class_example.cpp
        OOP/constructors.cpp
        OOP/constructors.h
        "Linked_list again practice/first.h"
        Pointers/pointer2.cpp
        Pointers/ptrfunc.cpp
        Arrays/selection.cpp
        Vectors/vector2.cpp
        Vectors/vector3.cpp
        Linked_List/insertion.cpp
)

# Student example
add_executable(student_example OOP/student_example.cpp)

# Reverse linked list example
add_executable(reverse_list Linked_List/reverse_list.cpp)
add_executable(Practice_2.0 binary_search/binary_search.cpp)
add_executable(Arrays shell_sort/shell_sort.cpp)

add_executable(Arrays shell_sort_q1/shell_sort_q1.cpp)
add_executable(Arrays Q_linked list/Q_linked list.cpp)

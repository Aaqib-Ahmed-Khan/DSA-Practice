cmake_minimum_required(VERSION 4.0)
project(DSA_Practice)

set(CMAKE_CXX_STANDARD 14)

add_executable(DSA_Practice
        Algorithm_Analysis/Asymptotic_Notation.cpp
        Arrays/arrays.cpp
        Arrays/Fibonacci_series.cpp
        Arrays/insertion_sort.cpp
        Arrays/linear_search.cpp
        Arrays/Mastering_arrays.cpp
        Arrays/max.cpp
        Arrays/Maxheap.cpp
        Arrays/missing_number_in_array.cpp
        Arrays/reverse_array.cpp
        Arrays/rotation.cpp
        Leetcode_practice/question1.cpp
        Leetcode_practice/question2.cpp
        Linked_List/DLL.cpp
        Linked_List/insertion.cpp
        Linked_List/sll.cpp
        OOP/class.cpp
        Pointers/pointer.cpp
        Pointers/ptr_qs.cpp
        Stack/Stackusing_arrays.cpp
        TowerofHanoi/tofHanoi.cpp
        "Vectors/bubble  _sort.cpp"
        Vectors/bubble_sort.cpp
        Vectors/builtin_sort.cpp
        Vectors/loop_in_vector.cpp
        Vectors/vectors.cpp
        boilerplate.cpp
        main.cpp
        radixsort.cpp)

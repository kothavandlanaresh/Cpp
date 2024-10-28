cmake_minimum_required(VERSION 3.29)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP
    CPP_Notes/01_inlie_extern_friend.cpp
    CPP_Notes/02_Class_Objec_Initilisation.cpp
    "CPP_Notes/03_compiletime_and _runtime.cpp"
    CPP_Notes/04_ad&_ptr_rref&&.cpp
    CPP_Notes/11_const.cpp
    CPP_Notes/11a_constexpr_teaser.cpp
    CPP_Notes/12_scope.cpp
    CPP_Notes/13_raw_arrays.cpp
    CPP_Notes/13a_iota_raw_arrays.cpp
    CPP_Notes/14_loops.cpp
    CPP_Notes/15_continue_and_break.cpp
    CPP_Notes/16_functions.cpp
    CPP_Notes/17_recursive_functions.cpp
    CPP_Notes/18_address&.cpp
    CPP_Notes/18a_address&.cpp
    CPP_Notes/21_pass_by_value_reference.cpp
    CPP_Notes/25_new_and_delete.cpp
    CPP_Notes/26_pointer_array_arithmetic.cpp
    CPP_Notes/28_paassing_arrays_to_functions.cpp
    CPP_Notes/6_hello.cpp
    CPP_Notes/7_string_usage.cpp)

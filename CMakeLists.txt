cmake_minimum_required(VERSION 3.20)
project(abstract_02_class)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(abstract_02_class
        Main.cpp
        Person.cpp
        Person.h
        Teacher.cpp
        Teacher.h
        Student.cpp
        Student.h)

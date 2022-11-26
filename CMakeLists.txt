cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(lab1 LANGUAGES CXX)
set(SOURCES main.cpp processing.cpp lab3_a.cpp head.hpp)
add_executable(lab3 ${SOURCES})

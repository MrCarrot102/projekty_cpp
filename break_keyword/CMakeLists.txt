cmake_minimum_required(VERSION 3.5)

project(break_keyword LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(break_keyword main.cpp)

install(TARGETS break_keyword
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

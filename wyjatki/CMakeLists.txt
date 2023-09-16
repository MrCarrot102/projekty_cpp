cmake_minimum_required(VERSION 3.5)

project(wyjatki LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(wyjatki main.cpp)

install(TARGETS wyjatki
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

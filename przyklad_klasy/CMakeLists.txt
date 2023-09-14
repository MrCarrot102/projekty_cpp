cmake_minimum_required(VERSION 3.5)

project(przyklad_klasy LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(przyklad_klasy main.cpp)

install(TARGETS przyklad_klasy
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

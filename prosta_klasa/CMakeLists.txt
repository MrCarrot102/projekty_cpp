cmake_minimum_required(VERSION 3.5)

project(prosta_klasa LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(prosta_klasa main.cpp)

install(TARGETS prosta_klasa
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

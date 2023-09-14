cmake_minimum_required(VERSION 3.5)

project(randomowy_kod LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(randomowy_kod main.cpp)

install(TARGETS randomowy_kod
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

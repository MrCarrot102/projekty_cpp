cmake_minimum_required(VERSION 3.5)

project(przeladowanie_kontruktora LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(przeladowanie_kontruktora main.cpp)

install(TARGETS przeladowanie_kontruktora
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

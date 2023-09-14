cmake_minimum_required(VERSION 3.5)

project(kontruktor_i_dekonstruktor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(kontruktor_i_dekonstruktor main.cpp)

install(TARGETS kontruktor_i_dekonstruktor
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

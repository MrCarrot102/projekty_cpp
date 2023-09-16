cmake_minimum_required(VERSION 3.5)

project(piramida_pascala LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(piramida_pascala main.cpp)

install(TARGETS piramida_pascala
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

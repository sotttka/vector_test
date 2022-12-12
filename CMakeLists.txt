cmake_minimum_required(VERSION 3.16)
project(Vector)

set(CMAKE_CXX_STANDARD 14)

add_executable(Vector main.cpp src/Vector.cpp src/Vector.h src/Vector2.cpp src/Vector2.h)

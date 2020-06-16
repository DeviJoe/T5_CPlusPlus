cmake_minimum_required(VERSION 3.15)
project(Task5)

set(CMAKE_CXX_STANDARD 20)

add_executable(Task5 main.cpp AbstractFigure.cpp AbstractFigure.h Round.cpp Round.h Triangle.cpp Triangle.h Rectangular.cpp Rectangular.h Distanceble.cpp Distanceble.h)
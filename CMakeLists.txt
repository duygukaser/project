cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Spaceship.h
        Spaceship.cpp
        Event.h
        EventManager.h
        Event.cpp)

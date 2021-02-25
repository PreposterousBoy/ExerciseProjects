cmake_minimum_required(VERSION 3.17)
project(btDownload)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(btDownload
        btfunctor.cpp
        btfunctor.h
        btparse.cpp
        btparse.h)

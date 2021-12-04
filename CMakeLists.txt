cmake_minimum_required(VERSION 3.21)
project(GerlinskiKurtzMap)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release)

include_directories(.)
include_directories(src)

add_executable(GerlinskiKurtzMap
        src/main.cpp)

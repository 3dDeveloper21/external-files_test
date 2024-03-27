cmake_minimum_required(VERSION 3.27)
project(ExternalFiles)

set(CMAKE_CXX_STANDARD 17)

add_executable(ExternalFiles main.cpp utils/greet.cpp utils/addNumbers.cpp)

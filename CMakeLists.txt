cmake_minimum_required(VERSION 3.19)
project(test)

set(CMAKE_CXX_STANDARD 14)
message(STATUS "start running cmake...")

add_executable(test main.cpp Prisma.cpp Prisma.h cmake-build-debug/params.h files/File_input.cpp files/File_input.h files/File_output.cpp files/File_output.h)
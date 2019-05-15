cmake_minimum_required(VERSION 3.13)
project(c_test)

set(CMAKE_CXX_STANDARD 14)

add_executable(c_test
        vcs.c
        length.c
        develop.c
        test.c)
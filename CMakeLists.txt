cmake_minimum_required(VERSION 3.13)
project(c-upup)

set(CMAKE_CXX_STANDARD 14)

#想要运行谁就在这个文件中添加，和Makefile没关系

add_executable(c-upup
         src/ExpressionEvaluation/ExpressionEvaluation2.c)
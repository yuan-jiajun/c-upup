cmake_minimum_required(VERSION 3.13)
project(c_test)

set(CMAKE_CXX_STANDARD 14)

#想要运行谁就在这个文件中添加，和Makefile没关系
add_executable(c_test
#        src/file.c
#        src/snprintf_test.c
        tests/average/averageV2.0.c)
#        src/develop.c
        #src/free.c
        #tests/free_function_test/free.c tests/pointarray_test/pointarray_test.c)
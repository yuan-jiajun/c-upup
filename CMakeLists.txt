cmake_minimum_required(VERSION 3.13)
project(c_test C)

set(CMAKE_C_STANDARD 11)

# set(DPDK_LIB F://workspace//c//dpdk-master//lib)

# include_directories(${DPDK_LIB}\\librte_eal\\common\\include\\)
# include_directories(${DPDK_LIB}\\librte_eal\\common\\include\\arch\\x86)
# include_directories(${DPDK_LIB}\\librte_ether)
# include_directories(${DPDK_LIB}\\librte_ring)
# include_directories(${DPDK_LIB}\\librte_mbuf)
# include_directories(${DPDK_LIB}\\librte_timer)


add_executable(c_test
        src/develop.c
        src/length.c
        src/struct.c
        src/test.c
        src/vcs.c)
cmake_minimum_required(VERSION 3.10)

project(Exercise2)

set (CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_COMPILER "/opt/Homebrew/bin/g++-11")

# Remember only one sc_main() function should exist.
# Choose "nand_main.cpp" here to test your NAND implementation.
# Choose "exor_main.cpp" here to test your XOR implementation.

add_executable(exercise2
    # nand_main.cpp
    exor_main.cpp
)

target_include_directories(exercise2
    PRIVATE $ENV{SYSTEMC_HOME}/include/
)

find_library(SYSTEMC_LIBRARY 
    NAMES systemc
    PATHS /opt/systemc/lib-macosxarm/
)

target_link_libraries(exercise2
    PRIVATE ${SYSTEMC_LIBRARY}
)

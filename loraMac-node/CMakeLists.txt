cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(lora)

# Set the output folder where your program will be created
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Radio library
add_library(radioLib "")

# Board library
add_library(boardLib "")

# System library
# add_library(systemLib "")

# MAC library
add_library(macLib "")

add_executable(pingpong app/PingPong/main.c)
target_link_libraries(pingpong radioLib boardLib)

# add_executable(classA app/loramac/classA/main.c)
# target_link_libraries(classA macLib radioLib boardLib systemLib)

# include_directories(radio)
include(radio/CMakeLists.txt)
include(boards/CMakeLists.txt)
include(mac/CMakeLists.txt)

# include(boards/sim0/CMakeLists.txt)
# include(boards/namote72/CMakeLists.txt)

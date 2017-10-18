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

# System library
add_library(systemLib "")

add_executable(pingpong app/PingPong/main.c)
target_link_libraries(pingpong radioLib boardLib systemLib)


# Build for SIM0 if board not set
if(NOT BOARD_TYPE)
  MESSAGE(STATUS "BOARD_TYPE not defined, default is SIM0")
  set(BOARD_TYPE "SIM0")
endif(NOT BOARD_TYPE)

# add_executable(classA app/loramac/classA/main.c)
# target_link_libraries(classA macLib radioLib boardLib systemLib)

# include_directories(radio)
include(radio/CMakeLists.txt)
include(boards/CMakeLists.txt)
include(mac/CMakeLists.txt)
include(system/CMakeLists.txt)

# include(boards/sim0/CMakeLists.txt)
# include(boards/namote72/CMakeLists.txt)

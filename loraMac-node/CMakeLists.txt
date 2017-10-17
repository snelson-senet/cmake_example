cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(loramac)

# Set the output folder where your program will be created
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_library(radioLib "")

add_library(sxsimLib "")

add_library(sim0BoardLib "")

add_library(classALib app/loramac/classA/main.c)

add_executable(sim_pingpong app/PingPong/main.c)
target_link_libraries(sim_pingpong radioLib sxsimLib sim0BoardLib)

# include_directories(radio)
include(radio/CMakeLists.txt)
include(radio/sxsim/CMakeLists.txt)
include(boards/sim0/CMakeLists.txt)




# target_link_libraries(pingpong radioLib)
# target_link_libraries(classA radioLib)

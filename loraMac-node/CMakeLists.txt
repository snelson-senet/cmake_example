cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(pingpong)

# Set the output folder where your program will be created
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(radio)

include_directories(radio)

add_executable(pingpong app/PingPong/main.c)

target_link_libraries(pingpong radio)

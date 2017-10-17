cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(classADemo)

#Set the output folder wher your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(mac)
add_subdirectory(radio)

include_directories(mac radio)

add_executable(classADemo src/main.cpp)

target_link_libraries(classADemo loramac)
target_link_libraries(classADemo radio)

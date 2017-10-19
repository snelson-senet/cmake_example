cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(lora)

# Defaults
set(DEFAULT_BOARD_TYPE "NAMOTE72")
set(DEFAULT_REGION "US915")

# Setup default platform
if(NOT BOARD_TYPE)
  MESSAGE(WARNING "BOARD_TYPE not defined, defaulting to ${DEFAULT_BOARD_TYPE}")
  set(BOARD_TYPE ${DEFAULT_BOARD_TYPE})
endif(NOT BOARD_TYPE)

# Configure LoRaWAN Region
if(NOT LORAWAN_REGION)
   MESSAGE(WARNING "BOARD_TYPE not defined, defaulting to ${DEFAULT_REGION}")
   set(LORAWAN_REGION ${DEFAULT_REGION})
endif (NOT LORAWAN_REGION)

# Add LoRaWAN stack region compiler flag
if(LORAWAN_REGION STREQUAL "US915")
  add_definitions(-DREGION_US915 )
elseif(LORAWAN_REGION STREQUAL "US915_HYBRID")
  add_definitions(-DREGION_US915_HYBRID)
elseif(LORAWAN_REGION STREQUAL "EU868")
  add_definitions(-DREGION_EU868)
else(LORAWAN_REGION STREQUAL "US915")
  MESSAGE(FATAL "Unknown LORAWAN_REGION= ${LORAWAN_REGION}")
endif(LORAWAN_REGION STREQUAL "US915")

MESSAGE(STATUS "LORAWAN_REGION=${LORAWAN_REGION}")

# Set the output folder where your program will be created
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Radio library
add_library(radioLib "")

# Board library
add_library(boardLib "")

# MAC library
add_library(macLib "")

# System library
add_library(systemLib "")

add_executable(pingpong app/PingPong/main.c)
target_link_libraries(pingpong radioLib boardLib systemLib)
target_compile_definitions(pingpong PUBLIC -DUSE_MODEM_LORA)


# add_executable(classA app/loramac/classA/main.c)
# target_link_libraries(classA macLib radioLib boardLib systemLib)

# include_directories(radio)
include(radio/CMakeLists.txt)
include(boards/CMakeLists.txt)
include(mac/CMakeLists.txt)
include(system/CMakeLists.txt)

# include(boards/sim0/CMakeLists.txt)
# include(boards/namote72/CMakeLists.txt)

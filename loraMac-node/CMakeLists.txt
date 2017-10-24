cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(lora)

include(helpers.cmake)

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

# Peripheral library
add_library(periphLib "")
include(peripherals/CMakeLists.txt)

# Radio library
add_library(radioLib "")
include(radio/CMakeLists.txt)

# Board library
add_library(boardLib "")
include(boards/CMakeLists.txt)

# MAC library
add_library(macLib "")
include(mac/CMakeLists.txt)

# System library
add_library(systemLib "")
include(system/CMakeLists.txt)

# LoRaMac Class A
add_executable(classA "")
include(app/loramac/classA/CMakeLists.txt)
add_custom_command(TARGET classA
  POST_BUILD
  COMMAND $(CMAKE_OBJCOPY} ARGS -O binary ${CMAKE_BINARY_DIR}/classA ${CMAKE_BINARY_DIR}/classA.bin))

# LoRaMac Class B
add_executable(classB "")
include(app/loramac/classB/CMakeLists.txt)

# LoRaMac Class C
add_executable(classC "")
include(app/loramac/classC/CMakeLists.txt)

# LoRa modem ping pong
add_executable(pingpong app/PingPong/main.c)
target_link_libraries(pingpong radioLib boardLib systemLib)
target_compile_definitions(pingpong PUBLIC -DUSE_MODEM_LORA)

# Simple LED blinky hello world test
add_executable(blinky app/blinky/main.c)
target_link_libraries(blinky boardLib systemLib)

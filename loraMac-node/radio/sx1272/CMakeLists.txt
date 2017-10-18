
project(sx1272Lib)

MESSAGE(STATUS "Using SX1272 Radio")

target_sources(radioLib
  PUBLIC
  "${CMAKE_CURRENT_LIST_DIR}/sx1272.c"
  "${CMAKE_CURRENT_LIST_DIR}/sx1272.h"
)

target_include_directories(radioLib PUBLIC ${CMAKE_CURRENT_LIST_DIR})

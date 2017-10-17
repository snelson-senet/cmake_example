

target_sources(radioLib
  PUBLIC
  "${CMAKE_CURRENT_LIST_DIR}/radio.c"
  "${CMAKE_CURRENT_LIST_DIR}/radio.h"
)

include_directories(${CMAKE_CURRENT_LIST_DIR})

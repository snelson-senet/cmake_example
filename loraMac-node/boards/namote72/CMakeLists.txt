project(namote72)

MESSAGE(STATUS "BoardType=NAMOTE72")

target_sources(boardLib
  PUBLIC
  "${CMAKE_CURRENT_LIST_DIR}/board.c"
  "${CMAKE_CURRENT_LIST_DIR}/board.h"
)

target_include_directories(boardLib PUBLIC ${CMAKE_CURRENT_LIST_DIR})

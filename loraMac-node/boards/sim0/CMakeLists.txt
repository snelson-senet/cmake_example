
target_sources(boardLib
  PUBLIC
  "${CMAKE_CURRENT_LIST_DIR}/board.c"
  "${CMAKE_CURRENT_LIST_DIR}/board.h"
  "${CMAKE_CURRENT_LIST_DIR}/rtc-board.c"
  "${CMAKE_CURRENT_LIST_DIR}/rtc-board.h"
  "${CMAKE_CURRENT_LIST_DIR}/sxsim-board.c"
  "${CMAKE_CURRENT_LIST_DIR}/sxsim-board.h"
)

target_include_directories(boardLib PUBLIC ${CMAKE_CURRENT_LIST_DIR})

project(namote72)

file(GLOB SOURCES ${CMAKE_CURRENT_LIST_DIR}/*.c
  ${CMAKE_CURRENT_LIST_DIR}/*.h
  ${CMAKE_CURRENT_LIST_DIR}/cmsis/*.*)

message(STATUS "namote board sources: ${SOURCES}")

target_sources(boardLib PUBLIC ${SOURCES})

#  "${CMAKE_CURRENT_LIST_DIR}/board.c"
#  "${CMAKE_CURRENT_LIST_DIR}/board.h"
#  "${CMAKE_CURRENT_LIST_DIR}/rtc-board.c"
#  "${CMAKE_CURRENT_LIST_DIR}/rtc-board.h"
#  "${CMAKE_CURRENT_LIST_DIR}/sx1272-board.c"
#  "${CMAKE_CURRENT_LIST_DIR}/sx1272-board.h"
#  "${CMAKE_CURRENT_LIST_DIR}/gpio-board.h"
#  "${CMAKE_CURRENT_LIST_DIR}/gpio-board.c"
#  "${CMAKE_CURRENT_LIST_DIR}/adc-board.h"
#  "${CMAKE_CURRENT_LIST_DIR}/adc-board.c"
#  "${CMAKE_CURRENT_LIST_DIR}/i2c-board.h"
#  "${CMAKE_CURRENT_LIST_DIR}/i2c-board.c"
#  "${CMAKE_CURRENT_LIST_DIR}/spi-board.h"
#  "${CMAKE_CURRENT_LIST_DIR}/spi-board.c"
# )

target_include_directories(boardLib PUBLIC ${CMAKE_CURRENT_LIST_DIR} )
target_include_directories(boardLib PUBLIC ${CMAKE_CURRENT_LIST_DIR}/cmsis )

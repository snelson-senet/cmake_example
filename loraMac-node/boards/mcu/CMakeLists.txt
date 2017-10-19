project(stm32)

file(GLOB SOURCES ${CMAKE_CURRENT_LIST_DIR}/stm32/STM32L1xx_HAL_Driver/Src/*.c)
target_sources(boardLib PRIVATE ${SOURCES})
target_sources(boardLib
  PUBLIC
  "${CMAKE_CURRENT_LIST_DIR}/stm32/utilities.h"
  "${CMAKE_CURRENT_LIST_DIR}/stm32/utilities.c")

target_include_directories(boardLib PUBLIC ${CMAKE_CURRENT_LIST_DIR}/stm32)
target_include_directories(boardLib PUBLIC ${CMAKE_CURRENT_LIST_DIR}/stm32/cmsis)
target_include_directories(boardLib PUBLIC ${CMAKE_CURRENT_LIST_DIR}/stm32/STM32L1xx_HAL_Driver/Inc)

project(namote72)

enable_language(ASM)

file(GLOB SOURCES ${CMAKE_CURRENT_LIST_DIR}/*.c
  ${CMAKE_CURRENT_LIST_DIR}/*.h
  ${CMAKE_CURRENT_LIST_DIR}/cmsis/*.*
  ${CMAKE_CURRENT_LIST_DIR}/cmsis/arm-gcc/startup_stm32l152xc.s)

target_sources(boardLib PUBLIC ${SOURCES})

target_include_directories(boardLib PUBLIC ${CMAKE_CURRENT_LIST_DIR} )
target_include_directories(boardLib PUBLIC ${CMAKE_CURRENT_LIST_DIR}/cmsis)



file(GLOB SOURCES ${CMAKE_CURRENT_LIST_DIR}/*.c ${CMAKE_CURRENT_LIST_DIR}/*.h )
target_sources(systemLib PUBLIC ${SOURCES})

# target_sources(systemLib
#  PUBLIC
#  "${CMAKE_CURRENT_LIST_DIR}/timer.c"
#  "${CMAKE_CURRENT_LIST_DIR}/timer.h"
#  "${CMAKE_CURRENT_LIST_DIR}/delay.h"
#  "${CMAKE_CURRENT_LIST_DIR}/delay.c"
#  "${CMAKE_CURRENT_LIST_DIR}/gpio.h"
#  "${CMAKE_CURRENT_LIST_DIR}/gpio.c"
#)

target_include_directories(systemLib PUBLIC "${CMAKE_CURRENT_LIST_DIR}")
target_link_libraries(systemLib boardLib)
target_link_libraries(systemLib m)

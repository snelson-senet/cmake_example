project(loramac)

target_sources(macLib
  PUBLIC
  "${CMAKE_CURRENT_LIST_DIR}/LoRaMac.c"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaMac.h"
)

target_include_directories(macLib PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(macLib boardLib)

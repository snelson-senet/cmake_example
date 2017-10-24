project(plib)
# Peripheral library

if(${BOARD_TYPE} STREQUAL "NAMOTE72")
  target_sources(periphLib PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/mpl3115.c
    ${CMAKE_CURRENT_LIST_DIR}/mpl3115.h
    ${CMAKE_CURRENT_LIST_DIR}/sx9500.c
    ${CMAKE_CURRENT_LIST_DIR}/sx9500.h
    ${CMAKE_CURRENT_LIST_DIR}/mma8451.c
    ${CMAKE_CURRENT_LIST_DIR}/mma8451.h )
endif(${BOARD_TYPE} STREQUAL "NAMOTE72")

target_link_libraries(periphLib boardLib)
target_include_directories(periphLib PUBLIC ${CMAKE_CURRENT_LIST_DIR})

project(classB_board)

if(${BOARD_TYPE} STREQUAL "NAMOTE72")
   target_sources(classB PUBLIC ${CMAKE_CURRENT_LIST_DIR}/NAMote72/main.c
                         ${CMAKE_CURRENT_LIST_DIR}/NAMote72/Commissioning.h)
endif(${BOARD_TYPE} STREQUAL "NAMOTE72")

target_link_libraries(classB macLib radioLib boardLib systemLib periphLib)

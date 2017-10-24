project(classA_board)

if(${BOARD_TYPE} STREQUAL "NAMOTE72")
   target_sources(classA PUBLIC ${CMAKE_CURRENT_LIST_DIR}/NAMote72/main.c
                         ${CMAKE_CURRENT_LIST_DIR}/NAMote72/Commissioning.h)
endif(${BOARD_TYPE} STREQUAL "NAMOTE72")

target_link_libraries(classA macLib radioLib boardLib systemLib periphLib)

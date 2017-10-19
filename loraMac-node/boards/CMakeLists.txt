
if(${BOARD_TYPE} STREQUAL "SIM0")
   include(${CMAKE_CURRENT_LIST_DIR}/sim0/CMakeLists.txt)
elseif(${BOARD_TYPE} STREQUAL "NAMOTE72")
   include(${CMAKE_CURRENT_LIST_DIR}/namote72/CMakeLists.txt)
else (${BOARD_TYPE} STREQUAL "SIM0")
   MESSAGE(FATAL_ERROR "Unknown BOARD_TYPE=${RADIO_STRING}")
endif(${BOARD_TYPE} STREQUAL "SIM0")

target_link_libraries(boardLib radioLib)
target_link_libraries(boardLib systemLib)

include(${CMAKE_CURRENT_LIST_DIR}/mcu/CMakeLists.txt)

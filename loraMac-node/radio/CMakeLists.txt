target_sources(radioLib
  PUBLIC
  "${CMAKE_CURRENT_LIST_DIR}/radio.h"
)

target_include_directories(radioLib PUBLIC "${CMAKE_CURRENT_LIST_DIR}")
target_link_libraries(radioLib boardLib)

if(${BOARD_TYPE} STREQUAL "SIM0")
   include(${CMAKE_CURRENT_LIST_DIR}/sxsim/CMakeLists.txt)
elseif(${BOARD_TYPE} STREQUAL "NAMOTE72")
   include(${CMAKE_CURRENT_LIST_DIR}/sx1272/CMakeLists.txt)
else(${BOARD_TYPE} STREQUAL "SIM0")
   MESSAGE(FATAL_ERROR "Unknown BOARD_TYPE=${BOARD_TYPE}")
endif(${BOARD_TYPE} STREQUAL "SIM0")

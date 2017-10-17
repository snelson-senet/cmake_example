target_sources(radioLib
  PUBLIC
  "${CMAKE_CURRENT_LIST_DIR}/radio.c"
  "${CMAKE_CURRENT_LIST_DIR}/radio.h"
)

target_include_directories(radioLib PUBLIC "${CMAKE_CURRENT_LIST_DIR}")
target_link_libraries(radioLib boardLib)

if(${RADIO_STRING} STREQUAL "SX1272")
   include(${CMAKE_CURRENT_LIST_DIR}/sx1272/CMakeLists.txt)
elseif(${RADIO_STRING} STREQUAL "SIMRADIO")
   include(${CMAKE_CURRENT_LIST_DIR}/sxsim/CMakeLists.txt)
else (${RADIO_STRING} STREQUAL "SX1272")
   MESSAGE(FATAL_ERROR "Unknown RADIO_STRING=${RADIO_STRING}")
endif(${RADIO_STRING} STREQUAL "SX1272")

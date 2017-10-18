project(sxsim)

MESSAGE(STATUS "Using SXSIM Radio Library")

target_sources(radioLib
  PUBLIC
  "${CMAKE_CURRENT_LIST_DIR}/sxsim.c"
  "${CMAKE_CURRENT_LIST_DIR}/sxsim.h"
)

target_include_directories(radioLib PUBLIC "${CMAKE_CURRENT_LIST_DIR}")

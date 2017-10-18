

target_sources(systemLib
  PUBLIC
  "${CMAKE_CURRENT_LIST_DIR}/timer.c"
  "${CMAKE_CURRENT_LIST_DIR}/timer.h"
)

target_include_directories(systemLib PUBLIC "${CMAKE_CURRENT_LIST_DIR}")
target_link_libraries(systemLib boardLib)
target_link_libraries(systemLib m)

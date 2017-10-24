project(loramac)

file(GLOB SOURCES ${CMAKE_CURRENT_LIST_DIR}/*.c ${CMAKE_CURRENT_LIST_DIR}/*.h
      ${CMAKE_CURRENT_LIST_DIR}/region/*.c ${CMAKE_CURRENT_LIST_DIR}/region/*.h )
target_sources(macLib PUBLIC ${SOURCES})

MESSAGE("macLib sources: ${SOURCES}")


target_include_directories(macLib PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_include_directories(macLib PUBLIC ${CMAKE_CURRENT_LIST_DIR}/region)
target_link_libraries(macLib boardLib)
target_link_libraries(macLib systemLib)

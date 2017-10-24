

file(GLOB SOURCES ${CMAKE_CURRENT_LIST_DIR}/*.c
                  ${CMAKE_CURRENT_LIST_DIR}/*.h
                  ${CMAKE_CURRENT_LIST_DIR}/crypto/*.*)
target_sources(systemLib PUBLIC ${SOURCES})

target_include_directories(systemLib PUBLIC "${CMAKE_CURRENT_LIST_DIR}")
target_include_directories(systemLib PUBLIC "${CMAKE_CURRENT_LIST_DIR}/crypto")
target_link_libraries(systemLib boardLib)
target_link_libraries(systemLib m)

set(TARGET mhook_example)

file(GLOB SOURCES *.cpp *.h)
 
include_directories(${CMAKE_SOURCE_DIR}/mhook/mhook-lib )
add_executable(${TARGET} ${SOURCES})

target_link_libraries(${TARGET} mhook ws2_32)
add_dependencies(${TARGET} mhook)

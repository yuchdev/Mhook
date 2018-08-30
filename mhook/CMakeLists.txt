set(TARGET mhook)

file(GLOB SOURCES disasm-lib/*.c disasm-lib/*.h mhook-lib/mhook.cpp mhook-lib/mhook.h) 
include_directories(disasm-lib)
 
add_library(${TARGET} ${SOURCES})

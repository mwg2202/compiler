
cmake_minimum_required(VERSION 3.7)
project(FlightCompiler VERSION 0.0.1)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(CMAKE_CXX_STANDARD 11)

add_definitions( -DANTLR4CPP_STATIC)

set(ANTLR4_WITH_STATIC_CRT OFF)

include(ExternalAntlr4Cpp)
include_directories(${ANTLR4_INCLUDE_DIRS})

set(ANTLR_EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR}/src/antlr-4.8-complete.jar)
find_package(ANTLR REQUIRED)

antlr_target(Flight ${CMAKE_CURRENT_SOURCE_DIR}/src/Flight.g4 LISTENER VISITOR)

include_directories(${ANTLR_Flight_OUTPUT_DIR})
add_executable(${PROJECT_NAME} src/main.cxx src/MyListener.cxx ${ANTLR_Flight_CXX_OUTPUTS})
target_link_libraries(${PROJECT_NAME} antlr4_static)

install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION bin
)
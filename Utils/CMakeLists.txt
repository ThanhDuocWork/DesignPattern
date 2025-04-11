cmake_minimum_required(VERSION 3.0)
project(Utils)

set(
    SOURCES
    Logger/src/Logger.cpp
)

add_library(Utils SHARED ${SOURCES})
add_definitions(-std=c++17)

target_include_directories(
    Utils PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/Logger/inc
)

target_link_libraries(Utils PUBLIC )

install(TARGETS Utils DESTINATION ${CMAKE_SOURCE_DIR})
cmake_minimum_required(VERSION 3.0)
project(Utils)

set(SOURCES
    Logger/src/Logger.cpp
)

add_library(Utils STATIC ${SOURCES})

target_include_directories(Utils
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Logger/inc
        ${CMAKE_CURRENT_SOURCE_DIR}/Parameter/inc
)

target_compile_features(Utils PUBLIC cxx_std_17)

target_compile_definitions(Utils PUBLIC _STD_LOG_)

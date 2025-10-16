cmake_minimum_required(VERSION 3.0)
project(factoryMachine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    src/Amazon.cpp
    src/Lazada.cpp
    src/Shoppe.cpp
    src/tableFactory.cpp
)

add_library(factoryMachine STATIC ${SOURCES})

target_include_directories(factoryMachine
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/inc
)

target_link_libraries(factoryMachine PUBLIC Utils)

cmake_minimum_required(VERSION 3.0)
project(stateMachine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    src/StateCancel.cpp
    src/StateDelivered.cpp
    src/StatePlace.cpp
    src/StateShipped.cpp
    src/tableState.cpp
)

add_library(stateMachine STATIC ${SOURCES})

target_include_directories(stateMachine
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/inc
        ${CMAKE_SOURCE_DIR}/Utils/Parameter/inc
)

target_link_libraries(stateMachine PUBLIC Utils)

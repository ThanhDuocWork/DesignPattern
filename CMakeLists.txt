cmake_minimum_required(VERSION 3.0)
project(DesignPatternDemo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(Utils)
add_subdirectory(factoryMachine)
add_subdirectory(stateMachine)

set(SOURCES
    main.cpp
)

add_executable(main ${SOURCES})

target_link_libraries(main
    PRIVATE
        Utils
        factoryMachine
        stateMachine
)

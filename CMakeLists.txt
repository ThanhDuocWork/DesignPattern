
cmake_minimum_required(VERSION 3.0)
project(main)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add lib Utils
add_subdirectory(Utils)
add_subdirectory(factoryMachine)
add_subdirectory(stateMachine)

# add path include
include_directories(
    ./inc/Adapter
    ./inc/StateMachine
    ./Utils/Logger/inc
)
# Source project
set(
    SOURCES
    main.cpp
)

# Create executable
add_executable(main ${SOURCES})

# Linking lib Utils
target_link_libraries(main PUBLIC Utils)
# Linking lib
target_link_libraries(main PUBLIC    
    Utils
    factoryMachine
    stateMachine
)
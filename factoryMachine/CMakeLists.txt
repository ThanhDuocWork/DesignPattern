cmake_minimum_required(VERSION 3.0)
project(factoryMachine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Source project
set(
    SOURCES
    src/Amazon.cpp
    src/Lazada.cpp
    src/Shoppe.cpp
)

# add lib Utils
# add_subdirectory(Utils)

# add path include
include_directories(
    ./inc
)

# Create executable
# add_executable(project ${SOURCES})

add_library(factoryMachine SHARED
    ${SOURCES}
)
# Linking lib Utils
target_link_libraries(factoryMachine PUBLIC Utils)

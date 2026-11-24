cmake_minimum_required(VERSION 3.20)

project(OutclawsExpeditions)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# reusable library, contains class code
# add more classes to this as more get developed
# do NOT include main.cpp in library
add_library(expedition_core
    source/classExpeditionTimer.cpp)

# indicates library's headers are in /source; PUBLIC indicates targets linked against expedition_core inherit /source
target_include_directories(expedition_core PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/source)
    
add_executable(OutclawsExpeditions
    source/main.cpp
)

target_link_libraries(OutclawsExpeditions PRIVATE
    expedition_core)

# Testing
enable_testing()

add_executable(expeditionTests
    tests/testTimer.cpp)

# links test executable to main library
target_link_libraries(expeditionTests PRIVATE
    expedition_core)

add_test(NAME ExpeditionTests COMMAND expeditionTests)
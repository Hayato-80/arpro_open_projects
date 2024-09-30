cmake_minimum_required(VERSION 3.5)

project(arpro_open_projects LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(rps src/rps.cpp)
add_executable(sticks src/sticks.cpp)
add_executable(battleship src/main.cpp include/player.h include/cell.h src/player.cpp)

#target_include_directories(battleship include)

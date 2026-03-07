cmake_minimum_required(VERSION 3.15)
project(VMVisualizer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(raylib 2.0 REQUIRED)

add_executable(vm_visualizer
    src/main.cpp
)

target_include_directories(vm_visualizer PRIVATE include)
target_link_libraries(vm_visualizer PRIVATE raylib)
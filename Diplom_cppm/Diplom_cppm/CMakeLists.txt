cmake_minimum_required(VERSION 3.10.0)
project(Diplom_cppm)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(DynLibDiplom SHARED Transport.cpp Camel.cpp Camel_Fast.cpp
Kentavr.cpp Boots.cpp Plane.cpp Eagle.cpp Broomstick.cpp)
add_executable(Diplom_cppm Diplom_cppm.cpp Request.h Request.cpp)
target_link_libraries(Diplom_cppm DynLibDiplom)
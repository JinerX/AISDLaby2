cmake_minimum_required(VERSION 3.10.0)
project(Sorting VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


include_directories(${PROJECT_SOURCE_DIR}/include)


file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_executable(ex1 main.cpp ${SRC_FILES})


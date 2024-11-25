cmake_minimum_required(VERSION 3.10)

set(APP "Application")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
file(GLOB SOURCES "source/*.cc")

project(${APP} CXX)
include_directories("include")
add_subdirectory("${CMAKE_SOURCE_DIR}/../core" "${CMAKE_BINARY_DIR}/core" SYSTEM)
add_executable(${APP} ${SOURCES})
target_link_libraries(${APP} KIQ_CORE)
cmake_minimum_required(VERSION 3.10)

set(APP "KIQ_CORE")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
file(GLOB SOURCES "source/*.cc")

project(${APP} CXX)
add_library(${APP} STATIC ${SOURCES})
# include_directories("include")
target_include_directories(${APP} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

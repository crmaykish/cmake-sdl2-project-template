cmake_minimum_required(VERSION 3.16.3)
project(project_template_name)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})
file(COPY config DESTINATION ${CMAKE_BINARY_DIR})

include_directories(include)

add_subdirectory(src)

cmake_minimum_required(VERSION 3.5)

add_definitions(-Wall -Wextra)

project(memhandling LANGUAGES C CXX)

add_library(toolkit SHARED toolkit.cpp)
# This has to be private to be only used while compiling the library
target_compile_definitions(toolkit PRIVATE -DTOOLKIT_LIB)

add_executable(application app.cpp)
target_link_libraries(application toolkit)

cmake_minimum_required(VERSION 3.5)

add_definitions(-Wall -Wextra)

project(libraries LANGUAGES C CXX)

add_library(cfact SHARED library.c)
target_compile_definitions(cfact PRIVATE -DLIBRARY_LIB)


add_library(cppfact SHARED library.cpp)
target_compile_definitions(cppfact PRIVATE -DLIBRARY_LIB)


add_library(tk SHARED toolkit.cpp wrapper.cpp)
target_compile_definitions(tk PRIVATE -DTOOLKIT_LIB)



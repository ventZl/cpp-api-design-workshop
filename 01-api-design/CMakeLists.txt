cmake_minimum_required(VERSION 3.5)

add_definitions(-Wall -Wextra -Werror)

project(good_api LANGUAGES C CXX)

add_library(api SHARED api.cpp)

add_executable(apiuser user.cpp)

target_link_libraries(apiuser api)

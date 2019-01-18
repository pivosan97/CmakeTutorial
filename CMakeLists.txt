cmake_minimum_required(VERSION 2.6)

project(Tutorial)

# The version number
set(APP_VERSION "1.0.0")
add_definitions(-DAPP_VERSION="${APP_VERSION}")

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src)

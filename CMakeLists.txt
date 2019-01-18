cmake_minimum_required(VERSION 2.6)
project(Tutorial)

# The version number
set(APP_VERSION \"1.0\")

# Header file with configurations
configure_file("${PROJECT_SOURCE_DIR}/TutorialConfig.h.in" "${PROJECT_BINARY_DIR}/TutorialConfig.h")
include_directories("${PROJECT_BINARY_DIR}")

add_executable(run_hello hello.cpp)
add_executable(run_version version.cpp)

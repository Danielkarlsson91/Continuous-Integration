cmake_minimum_required(VERSION 3.22.1)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_compile_options(-Wall -Wextra -Wpedantic)

project(greeting VERSION 1.0
                        DESCRIPTION "Stack"
                        LANGUAGES CXX)

#include FetchContent to be able to download GoogleTest code.
include(FetchContent)

# Declare git repo and tag to fetch:
FetchContent_Declare(
   googletest
   GIT_REPOSITORY https://github.com/google/googletest.git
   GIT_TAG v1.14.0
)

#Download or check that googletest is downloaded:
FetchContent_MakeAvailable(googletest)

add_executable(test_greeting test_greeting.cpp)
target_link_libraries(test_greeting PRIVATE gtest_main)

add_custom_target(run_test test_greeting)
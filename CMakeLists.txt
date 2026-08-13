cmake_minimum_required(VERSION 3.16)
project(dsa_cpp LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)

if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -g)
endif()

include_directories(include)

# GoogleTest Setup
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
include(GoogleTest)

# Build all implementations in src/ into a static library
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.c")

add_library(dsa_lib STATIC ${SOURCES})
target_include_directories(dsa_lib PUBLIC include)

# Search test files and link them to dsa_lib + GoogleTest
file(GLOB_RECURSE TEST_SOURCES "tests/*.cpp")

foreach(TEST_FILE ${TEST_SOURCES})
    get_filename_component(TEST_NAME ${TEST_FILE} NAME_WE)

    add_executable(${TEST_NAME} ${TEST_FILE})
    
    # Link against GoogleTest main runner and dsa_lib
    target_link_libraries(${TEST_NAME} PRIVATE gtest_main dsa_lib)
    
    target_include_directories(${TEST_NAME} PRIVATE include)

    gtest_discover_tests(${TEST_NAME})
endforeach()

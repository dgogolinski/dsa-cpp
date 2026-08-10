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

# Automatic solution search
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.c")

foreach(SOURCE_FILE ${SOURCES})
    get_filename_component(DIR_NAME ${SOURCE_FILE} DIRECTORY)
    get_filename_component(DIR_BARE ${DIR_NAME} NAME)
    get_filename_component(EXT ${SOURCE_FILE} LAST_EXT) # .cpp lub .c

    string(SUBSTRING ${EXT} 1 -1 EXT_CLEAN)

    set(TARGET_NAME "${DIR_BARE}_${EXT_CLEAN}")

    add_executable(${TARGET_NAME}${SOURCE_FILE})
endforeach()

# Specify the minimum version of CMake that can run this script
cmake_minimum_required(VERSION 3.12)

# Project name and version
project(cpp20forprogrammers VERSION 1.0)


if (${CMAKE_SYSTEM_NAME} STREQUAL "Haiku")
    find_package(fmt)
    set(CPP_LIBS "fmt::fmt")
else()
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
    set(CPP_LIBS ${CONAN_LIBS})
endif()

# Request C++ 20 standard features
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# for Vim ALE
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

add_subdirectory(chap6)
add_subdirectory(chap7)
add_subdirectory(chap8)

add_custom_target (
    copy-compile-commands ALL
    ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_BINARY_DIR}/compile_commands.json
        ${CMAKE_CURRENT_LIST_DIR}
)

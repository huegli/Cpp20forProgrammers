# Specify the minimum version of CMake that can run this script
cmake_minimum_required(VERSION 3.12)

# Project name and version
project(cpp20-pointers VERSION 1.0)

if (${CMAKE_SYSTEM_NAME} STREQUAL "Haiku")
    find_package(fmt)
    set(POINTERS_LIBS "fmt::fmt")
else()
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
    set(POINTERS_LIBS ${CONAN_LIBS})
endif()

# Request C++ 20 standard features
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# for Vim ALE
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

# Define targets
set(TLIST 01 02 03 06 10)

# iterate through all targets
foreach(T IN ITEMS ${TLIST})
    set(TNAME "fig07_${T}")
    add_executable(${TNAME}
        "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp")
    target_link_libraries(${TNAME} ${POINTERS_LIBS})
    set_target_properties(${TNAME}
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
endforeach()

# Specify the minimum version of CMake that can run this script
cmake_minimum_required(VERSION 3.12)

# Project name and version
project(cpp20-arrays VERSION 1.0)

if (${CMAKE_SYSTEM_NAME} STREQUAL "Haiku")
    find_package(fmt)
    set(ARRAYS_LIBS "fmt::fmt")
else()
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
    set(ARRAYS_LIBS ${CONAN_LIBS})
endif()

# Request C++ 20 standard features
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# for Vim ALE
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

# iterate through all targets
foreach(T IN ITEMS 01 02 03 04 05 06 07 08 09 10 11 12 13 14)
    set(TNAME "fig06_${T}")
    add_executable(${TNAME}
        "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp")
    target_link_libraries(${TNAME} ${ARRAYS_LIBS})
    set_target_properties(${TNAME}
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
endforeach()

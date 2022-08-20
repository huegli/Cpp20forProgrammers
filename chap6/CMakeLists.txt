# Specify the minimum version of CMake that can run this script
cmake_minimum_required(VERSION 3.12)

# Project name and version
project(cpp20-arrays VERSION 1.0)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

# find_package(fmt)

# Request C++ 20 standard features
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(fig06_01 
    "${CMAKE_CURRENT_SOURCE_DIR}/src/fig06_01.cpp")
target_link_libraries(fig06_01 ${CONAN_LIBS})
set_target_properties(fig06_01
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable(fig06_02 
    "${CMAKE_CURRENT_SOURCE_DIR}/src/fig06_02.cpp")
target_link_libraries(fig06_02 ${CONAN_LIBS})
set_target_properties(fig06_02
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable(fig06_03 
        "${CMAKE_CURRENT_SOURCE_DIR}/src/fig06_03.cpp")
target_link_libraries(fig06_03 ${CONAN_LIBS})
set_target_properties(fig06_03
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable(fig06_04 
        "${CMAKE_CURRENT_SOURCE_DIR}/src/fig06_04.cpp")
    target_link_libraries(fig06_04 ${CONAN_LIBS})
set_target_properties(fig06_04
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable(fig06_05 
        "${CMAKE_CURRENT_SOURCE_DIR}/src/fig06_05.cpp")
    target_link_libraries(fig06_05 ${CONAN_LIBS})
set_target_properties(fig06_05
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable(fig06_06 
        "${CMAKE_CURRENT_SOURCE_DIR}/src/fig06_06.cpp")
    target_link_libraries(fig06_06 ${CONAN_LIBS})
set_target_properties(fig06_06
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable(fig06_07 
        "${CMAKE_CURRENT_SOURCE_DIR}/src/fig06_07.cpp")
    target_link_libraries(fig06_07 ${CONAN_LIBS})
set_target_properties(fig06_07
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable(fig06_08 
        "${CMAKE_CURRENT_SOURCE_DIR}/src/fig06_08.cpp")
    target_link_libraries(fig06_08 ${CONAN_LIBS})
set_target_properties(fig06_08
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable(fig06_09 
        "${CMAKE_CURRENT_SOURCE_DIR}/src/fig06_09.cpp")
    target_link_libraries(fig06_09 ${CONAN_LIBS})
set_target_properties(fig06_09
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable(fig06_10 
        "${CMAKE_CURRENT_SOURCE_DIR}/src/fig06_10.cpp")
    target_link_libraries(fig06_10 ${CONAN_LIBS})
set_target_properties(fig06_10
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable(fig06_11 
        "${CMAKE_CURRENT_SOURCE_DIR}/src/fig06_11.cpp")
    target_link_libraries(fig06_11 ${CONAN_LIBS})
set_target_properties(fig06_11
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable(fig06_12 
        "${CMAKE_CURRENT_SOURCE_DIR}/src/fig06_12.cpp")
    target_link_libraries(fig06_12 ${CONAN_LIBS})
set_target_properties(fig06_12
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

# add_executable(fig06_13 
#         "${CMAKE_CURRENT_SOURCE_DIR}/src/fig06_13.cpp")
#     target_link_libraries(fig06_13 ${CONAN_LIBS})
# set_target_properties(fig06_13
#     PROPERTIES
#     RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable(fig06_14
        "${CMAKE_CURRENT_SOURCE_DIR}/src/fig06_14.cpp")
    target_link_libraries(fig06_14 ${CONAN_LIBS})
set_target_properties(fig06_14
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

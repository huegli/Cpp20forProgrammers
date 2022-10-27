# Define targets
set(TLIST 01 02 03 04 05 06 07 08 09 10 11 12 13 14)
# Example 15 (views) doesn't yet work with clang++ on MacOS
if (NOT (${CMAKE_SYSTEM_NAME} STREQUAL "Darwin"))
    list(APPEND TLIST 15)
endif()
list(APPEND TLIST 16 17 18)

# iterate through all targets
foreach(T IN ITEMS ${TLIST})
    set(TNAME "fig08_${T}")
    add_executable(${TNAME}
        "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp")
	target_link_libraries(${TNAME} ${CPP_LIBS})
endforeach()

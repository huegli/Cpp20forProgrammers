# Define targets
set(TLIST 01 02 03 04 05 06 07 08 09 10 11 12)
# Example 13 (views) doesn't yet work with clang++ on MacOS
if (NOT (${CMAKE_SYSTEM_NAME} STREQUAL "Darwin"))
    list(APPEND TLIST 13)
endif()
list(APPEND TLIST 14)

# iterate through all targets
foreach(T IN ITEMS ${TLIST})
    set(TNAME "fig06_${T}")
    add_executable(${TNAME}
        "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp")
	target_link_libraries(${TNAME} ${CPP_LIBS})
endforeach()

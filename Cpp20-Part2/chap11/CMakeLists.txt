# Define targets
set(TLIST 01 02 03)

# iterate through all targets
foreach(T IN ITEMS ${TLIST})
    set(TNAME "fig11_${T}")
    if (${T} STREQUAL "03")
        add_executable(${TNAME}
            "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/MyArray.cpp")
    else()
        add_executable(${TNAME}
            "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp")
    endif()
	target_link_libraries(${TNAME} fmt::fmt)
endforeach()

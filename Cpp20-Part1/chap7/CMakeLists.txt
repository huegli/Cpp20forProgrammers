# Define targets
set(TLIST 01 02 03 06 10 11 12 13 14)

# iterate through all targets
foreach(T IN ITEMS ${TLIST})
    set(TNAME "fig07_${T}")
    add_executable(${TNAME}
        "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp")
	target_link_libraries(${TNAME} ${CPP_LIBS})
endforeach()

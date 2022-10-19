# Define targets
set(TLIST 01 04 06)

# iterate through all targets
foreach(T IN ITEMS ${TLIST})
    set(TNAME "fig09_${T}")
    add_executable(${TNAME}
        "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp")
	target_link_libraries(${TNAME} ${CPP_LIBS})
endforeach()

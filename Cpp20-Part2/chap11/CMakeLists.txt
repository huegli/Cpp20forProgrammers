# Define targets
set(TLIST 01 02)

# iterate through all targets
foreach(T IN ITEMS ${TLIST})
    set(TNAME "fig11_${T}")
    add_executable(${TNAME}
        "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp")
	target_link_libraries(${TNAME} fmt::fmt)
endforeach()

# Define targets
set(TLIST 03 06 07 10)

# iterate through all targets
foreach(T IN ITEMS ${TLIST})
    set(TNAME "fig10_${T}")
    if (${T} STREQUAL "03") 
        add_executable(${TNAME}
            "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/SalariedEmployee.cpp")
    elseif (${T} STREQUAL "06" OR
     ${T} STREQUAL "07")
             add_executable(${TNAME}
            "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/SalariedEmployee.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/SalariedCommissionEmployee.cpp")
    elseif (${T} STREQUAL "10")
             add_executable(${TNAME}
            "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/SalariedEmployee-10.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/SalariedCommissionEmployee-10.cpp")
     else()
            add_executable(${TNAME}
                "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp")
    endif()
	target_link_libraries(${TNAME} fmt::fmt)
endforeach()

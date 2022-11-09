# Define targets
set(TLIST 03 06 07 10 17 25 33 40 45 47)

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
    elseif (${T} STREQUAL "17")
             add_executable(${TNAME}
            "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/Employee.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/SalariedEmployee-13.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/CommissionEmployee.cpp")
    elseif (${T} STREQUAL "25")
             add_executable(${TNAME}
            "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/Employee-19.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/SalariedEmployee-21.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/CommissionEmployee-23.cpp")
    elseif (${T} STREQUAL "33")
             add_executable(${TNAME}
            "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/Employee-27.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/Salaried.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/Commission.cpp")
    elseif (${T} STREQUAL "40")
             add_executable(${TNAME}
            "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/Employee-38.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/Salaried-34.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/Commission-36.cpp")
    elseif (${T} STREQUAL "45")
             add_executable(${TNAME}
            "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/Derived.cpp")
    else()
            add_executable(${TNAME}
                "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp")
    endif()
	target_link_libraries(${TNAME} fmt::fmt)
endforeach()

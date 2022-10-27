# Define targets
set(TLIST 01 04 06 09 12 15 18 21 27 28 29 32 35 36 37)

# iterate through all targets
foreach(T IN ITEMS ${TLIST})
    set(TNAME "fig09_${T}")
    if (${T} STREQUAL "09") 
        add_executable(${TNAME}
            "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/src/Time.cpp")
    elseif (${T} STREQUAL "12") 
            add_executable(${TNAME}
                "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
                "${CMAKE_CURRENT_SOURCE_DIR}/src/Time-11.cpp")
    elseif (${T} STREQUAL "15") 
            add_executable(${TNAME}
                "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
                "${CMAKE_CURRENT_SOURCE_DIR}/src/CreateAndDestroy.cpp")
    elseif (${T} STREQUAL "18") 
            add_executable(${TNAME}
                "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
                "${CMAKE_CURRENT_SOURCE_DIR}/src/Time-17.cpp")
    elseif (${T} STREQUAL "21")
            add_executable(${TNAME}
                "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
                "${CMAKE_CURRENT_SOURCE_DIR}/src/Date.cpp")
    elseif (${T} STREQUAL "27")
            add_executable(${TNAME}
                "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
                "${CMAKE_CURRENT_SOURCE_DIR}/src/Date-23.cpp"
                "${CMAKE_CURRENT_SOURCE_DIR}/src/Employee.cpp")
    elseif (${T} STREQUAL "32")
            add_executable(${TNAME}
                "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
                "${CMAKE_CURRENT_SOURCE_DIR}/src/Time-30.cpp")
    elseif (${T} STREQUAL "35")
            add_executable(${TNAME}
                "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
                "${CMAKE_CURRENT_SOURCE_DIR}/src/Employee-33.cpp")
     else()
            add_executable(${TNAME}
                "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp")
    endif()
	target_link_libraries(${TNAME} ${CPP_LIBS})
endforeach()

project(rawDataExampleLib)

add_library(${PROJECT_NAME} STATIC)
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_sources(${PROJECT_NAME}
    PRIVATE
    core/lib.cpp
    PUBLIC
    core/lib.hpp

)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
    PRIVATE
    CmndLib
    # pigpio findet kein pigpio.h
    # pigpio::pigpio findet keine library
    rt
    pthread
)

target_include_directories(
    ${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        $<TARGET_PROPERTY:CmndLib,INTERFACE_INCLUDE_DIRECTORIES>
    PUBLIC 
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

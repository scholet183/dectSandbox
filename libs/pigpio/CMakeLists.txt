project(pigpio)

add_library(${PROJECT_NAME} SHARED IMPORTED)
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_target_properties(pigpio PROPERTIES
    IMPORTED_LOCATION "/opt/pigpio/libpigpio.so"
    INTERFACE_INCLUDE_DIRECTORIES "/opt/pigpio"
)

#file(GLOB PIGPIO_SOURCES "/opt/pigpio/*.c")
#file(GLOB PIGPIO_HEADERS "/opt/pigpio/*.h")
#
#target_sources(${PROJECT_NAME}
#    PRIVATE
#        ${PIGPIO_SOURCES}
#    PUBLIC
#        ${PIGPIO_HEADERS}
#)
#
#target_link_libraries(${PROJECT_NAME}
#    PUBLIC
#    rt
#    pthread
#)
#
#target_include_directories(
#    ${PROJECT_NAME}
#    PRIVATE
#        ${CMAKE_CURRENT_SOURCE_DIR}
#    PUBLIC 
#        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
#        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
#        /opt/pigpio
#)
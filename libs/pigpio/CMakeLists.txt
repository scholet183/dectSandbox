project(pigpio)

add_library(${PROJECT_NAME} STATIC)
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

file(GLOB PIGPIO_SOURCES "/opt/pigpio/*.c")
file(GLOB PIGPIO_HEADERS "/opt/pigpio/*.h")

target_sources(${PROJECT_NAME}
    PRIVATE
        ${PIGPIO_SOURCES}
    PUBLIC
        ${PIGPIO_HEADERS}
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
    -L/opt/pigpio
    rt
    pthread
)

target_include_directories(
    ${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
    PUBLIC 
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
        /opt/pigpio
)
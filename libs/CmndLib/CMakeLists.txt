project(CmndLib)

add_library(${PROJECT_NAME} STATIC)
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

file(GLOB SOURCES "src/*.c")
file(GLOB PRIVATE_HEADERS "include/*.h")
file(GLOB HEADERS "*.h")

target_sources(${PROJECT_NAME}
    PRIVATE
    ${SOURCES}
    ${PRIVATE_HEADERS}
    PUBLIC
    ${HEADERS}
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
)

target_include_directories(
    ${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/include
    PUBLIC 
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
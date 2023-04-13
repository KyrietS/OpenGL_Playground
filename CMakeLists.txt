cmake_minimum_required(VERSION 3.25)
project (OpenGL_Playground)

set(BINARY_NAME "playground")

file(GLOB SOURCES 
    src/*.cpp
    src/*.hpp
)

add_executable(${BINARY_NAME}
    ${SOURCES}
)

set_target_properties(${BINARY_NAME} PROPERTIES
    CXX_STANDARD 20
)

add_subdirectory(lib/glfw)
add_subdirectory(lib/glad/)

target_link_libraries(playground glfw)
target_link_libraries(playground glad)

# Set hello as startup project in Visual Studio
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${BINARY_NAME})
cmake_minimum_required(VERSION 3.25)
project (OpenGL_Playground)

set(PLAYGROUND "playground")

file(GLOB SOURCES 
    src/*.cpp
    src/*.hpp
)

add_executable(${PLAYGROUND}
    ${SOURCES}
)

set_target_properties(${PLAYGROUND} PROPERTIES
    CXX_STANDARD 20
)

# Libraries
add_subdirectory(lib/glfw)
add_subdirectory(lib/glad)
target_link_libraries(${PLAYGROUND} glfw glad)

# Set hello as startup project in Visual Studio
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PLAYGROUND})
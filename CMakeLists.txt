cmake_minimum_required(VERSION 2.6)
project(MYENGINE)

add_definitions(-DSDL_MAIN_HANDLED)

include_directories(
contrib/msvc-windows-x86/include
src
)

link_directories(
  ${PROJECT_SOURCE_DIR}/contrib/msvc-windows-x86/lib
)

add_library(rend
  src/rend/Exception.cpp
  src/rend/Context.cpp
  src/rend/Texture.cpp
  src/rend/RenderTexture.cpp
  src/rend/Shader.cpp
  src/rend/Buffer.cpp
  src/rend/Mesh.cpp
  src/rend/Util.cpp
)

target_link_libraries(rend glew32 opengl32)

add_library (myengine
src/myengine/Component.cpp
src/myengine/Component.h
src/myengine/Entity.cpp
src/myengine/Entity.h
src/myengine/Exception.cpp
src/myengine/Exception.h
src/myengine/myengine.h
src/myengine/Renderer.cpp
src/myengine/Renderer.h
src/myengine/Core.h
src/myengine/Core.cpp
)

target_link_libraries(myengine SDL2 rend)


add_executable(demo
src/demo/main.cpp
)

target_link_libraries(demo myengine)

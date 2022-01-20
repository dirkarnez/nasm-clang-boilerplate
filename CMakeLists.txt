cmake_minimum_required(VERSION 3.18)

# uncomment these 2 lines if using clang
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -target x86_64-pc-windows-gnu")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -target x86_64-pc-windows-gnu")

project(nasm-clang-boilerplate)

SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")

add_executable(${PROJECT_NAME}
    "src/cpp/main.cpp"
    "src/asm/factorial.obj"
)
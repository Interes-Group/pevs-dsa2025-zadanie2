cmake_minimum_required(VERSION 3.30)
project(zadanie2
        VERSION "1.0.0"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

add_subdirectory(src)
target_include_directories(zadanie2 PRIVATE ${CMAKE_SOURCE_DIR}/include)

install(TARGETS zadanie2)
cmake_minimum_required(VERSION 3.10)
project(calculator C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_library(calculator src/lib/calculator.c)

add_executable(main src/main.c)
target_link_libraries(main calculator)

cmake_minimum_required(VERSION 3.10)
project(calculator_project C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(calculator src/main.c src/lib/calculator.c)

enable_testing()

add_test(NAME test_add COMMAND calculator 1 2)
add_test(NAME test_subtract COMMAND calculator 5 3)
add_test(NAME test_multiply COMMAND calculator 4 6)
add_test(NAME test_divide COMMAND calculator 20 5)
add_test(NAME test_square COMMAND calculator square 5)

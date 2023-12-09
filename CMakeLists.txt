cmake_minimum_required(VERSION  3.12)
project(workflow)
add_executable(workflow main.cpp)

if(MSVC)
  target_compile_options(${TARGET_NAME} PRIVATE /W4 /WX)
else()
  target_compile_options(${TARGET_NAME} PRIVATE -Wall -Wextra -Wshadow -Wconversion -Wpedantic -Werror)
endif()
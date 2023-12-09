cmake_minimum_required(VERSION  3.12)

set(ProjName "workflow")

project(${ProjName})
add_executable(${ProjName} main.cpp)

if(MSVC)
  target_compile_options(${ProjName} PRIVATE /W4 /WX)
else()
  target_compile_options(${ProjName} PRIVATE -Wall -Wextra -Wshadow -Wconversion -Wpedantic -Werror)
endif()
cmake_minimum_required(VERSION  3.12)

set(ProjName "workflow")

project(${ProjName})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(core)
add_subdirectory(app)
add_subdirectory(test)

if(MSVC)
  target_compile_options(${ProjName} PRIVATE /W4 /WX)
else()
  target_compile_options(${ProjName} PRIVATE -Wall -Wextra -Wshadow -Wconversion -Wpedantic -Werror)
endif()
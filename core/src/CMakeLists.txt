include_directories(../include)

set(ProjName core)

add_library(${ProjName} Foo.cpp)

target_link_libraries(${ProjName} PUBLIC gcov)
if(MSVC)
  target_compile_options(${ProjName} PRIVATE /W4 /WX /EnableCodeCoverage)
else()
  target_compile_options(${ProjName} PRIVATE -Wall -Wextra -Wshadow -Wconversion -Wpedantic -Werror -fprofile-arcs -ftest-coverage)
endif()
add_executable(${ProjName} main.cpp)

target_link_libraries(${ProjName} PUBLIC core)
target_include_directories(${ProjName} PUBLIC
                          "${PROJECT_SOURCE_DIR}/core/include"
                          )

if(MSVC)
    target_compile_options(${ProjName} PRIVATE /W4 /WX)
else()
    target_compile_options(${ProjName} PRIVATE -Wall -Wextra -Wshadow -Wconversion -Wpedantic -Werror)
endif()
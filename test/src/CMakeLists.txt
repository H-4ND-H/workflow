set(ProjName test)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../)

foreach( OUTPUTCONFIG ${CMAKE_CONFIGURATION_TYPES} )
    string( TOUPPER ${OUTPUTCONFIG} OUTPUTCONFIG )
    set( CMAKE_RUNTIME_OUTPUT_DIRECTORY_${OUTPUTCONFIG}  ../ )
    set( CMAKE_LIBRARY_OUTPUT_DIRECTORY_${OUTPUTCONFIG}  ../ )
    set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_${OUTPUTCONFIG}  ../ )
endforeach( OUTPUTCONFIG CMAKE_CONFIGURATION_TYPES )

include_directories(../include)
add_executable(${ProjName} testMain.cpp Foo.cpp)

target_link_libraries(${ProjName} PUBLIC core)
target_include_directories(${ProjName} PUBLIC
                          "${PROJECT_SOURCE_DIR}/core/include"
                          )

                          
if(MSVC)
    target_compile_options(${ProjName} PRIVATE /W4 /WX)
else()
    target_compile_options(${ProjName} PRIVATE -Wall -Wextra -Wshadow -Wconversion -Wpedantic -Werror)
endif()
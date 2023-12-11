set(ProjName test)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../)
include_directories(../include)
add_executable(${ProjName} testMain.cpp Foo.cpp)

target_link_libraries(${ProjName} PUBLIC core)
target_include_directories(${ProjName} PUBLIC
                          "${PROJECT_SOURCE_DIR}/core/include"
                          )


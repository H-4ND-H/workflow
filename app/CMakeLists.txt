add_executable(${ProjName} main.cpp)

target_link_libraries(${ProjName} PUBLIC core)
target_include_directories(${ProjName} PUBLIC
                          "${PROJECT_SOURCE_DIR}/core/include"
                          )


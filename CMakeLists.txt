#PRIMER: Learn how to implement modularity :)


project(simplecalculator)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type" FORCE)
endif()

add_executable(simplecalc)
target_link_libraries(simplecalc m)
target_sources(simplecalc PRIVATE src/main.c src/operations.c src/history.c)

target_include_directories(simplecalc PRIVATE ${PROJECT_SOURCE_DIR}/include)

target_compile_options(simplecalc PRIVATE
  $<$<CONFIG:Debug>:-g -O0>
)

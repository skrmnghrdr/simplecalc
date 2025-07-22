#PRIMER: Learn how to implement modularity :)


project(simplecalculator)

add_executable(simplecalc)

target_sources(simplecalc PRIVATE src/main.c src/operations.c src/history.c)

target_include_directories(simplecalc PRIVATE ${PROJECT_SOURCE_DIR}/include)


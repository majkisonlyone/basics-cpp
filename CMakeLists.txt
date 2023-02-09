cmake_minimum_required(VERSION 3.1)
project(projekt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB src_files ${PROJECT_SOURCE_DIR}/src/*.cpp)
list(REMOVE_ITEM src_files ${PROJECT_SOURCE_DIR}/src/main.cpp)

file(GLOB test_files ${PROJECT_SOURCE_DIR}/test/*.cpp)

add_library(projekt_lib ${src_files})
add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/src/main.cpp)

target_link_libraries(${PROJECT_NAME} projekt_lib)

add_subdirectory(${PROJECT_SOURCE_DIR}/ext/googletest)

enable_testing()

add_executable(
    projekt_test
    ${test_files}
)

target_link_libraries(
    projekt_test
    projekt_lib
    gtest_main
)

include(GoogleTest)

add_test(UnitTest projekt_test)

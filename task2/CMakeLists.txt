cmake_minimum_required(VERSION 3.20)

project(test_list)

find_package(Catch2 3 REQUIRED)

add_executable(custom-main-tests test.cpp)
target_link_libraries(custom-main-tests PRIVATE Catch2::Catch2)
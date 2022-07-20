cmake_minimum_required(VERSION 3.14)
project(SampleApp)
# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 17)
set(COMPILE_OPTIONS "-Wall")

add_executable(${CMAKE_PROJECT_NAME})

target_compile_options(${CMAKE_PROJECT_NAME} PRIVATE ${COMPILE_OPTIONS})
target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_sources(${CMAKE_PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/samples/main.cpp)
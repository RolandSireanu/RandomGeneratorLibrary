cmake_minimum_required(VERSION 3.14)
set(EXECUTABLE_NAME sample)
set(CMAKE_CXX_STANDARD 17)
set(COMPILE_OPTIONS "-Wall")

add_executable(${EXECUTABLE_NAME})

set_target_properties( ${EXECUTABLE_NAME}
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../bin"
)

target_compile_options(${EXECUTABLE_NAME} PRIVATE ${COMPILE_OPTIONS})
target_include_directories(${EXECUTABLE_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_sources(${EXECUTABLE_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
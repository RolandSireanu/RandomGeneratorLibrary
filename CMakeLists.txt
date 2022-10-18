cmake_minimum_required(VERSION 3.14)
project(BetterRand)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/RandomGenerator.h DESTINATION include)

option(BUILD_SAMPLE "Enable samples build" OFF)

if(BUILD_SAMPLE)
    add_subdirectory(samples)
endif()
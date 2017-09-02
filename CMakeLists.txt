cmake_minimum_required(VERSION 3.0)
project(nhjam)

include_directories(src)
aux_source_directory(src SRCS)
add_definitions(-D_CRT_SECURE_NO_WARNINGS)
add_executable(nhjam ${SRCS})

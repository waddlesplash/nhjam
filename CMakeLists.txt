cmake_minimum_required(VERSION 3.0)
project(nhjam)

if(NOT MSVC)
	add_definitions(-Wall -Wextra -pedantic)
else()
	add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

add_definitions(-DOPT_HEADER_CACHE_EXT -DOPT_JAMFILE_CACHE_EXT -DOPT_JAM_TARGETS_VARIABLE_EXT)
include_directories(src)
aux_source_directory(src SRCS)
add_executable(nhjam ${SRCS})

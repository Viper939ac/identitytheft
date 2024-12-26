cmake_minimum_required(VERSION 3.10)

project(identitytheft)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if (WIN32)
    add_executable(identitytheft main.cpp)
elseif (APPLE)
    add_executable(identitytheft main.cpp)
elseif (UNIX)
    add_executable(identitytheft main.cpp)
endif()
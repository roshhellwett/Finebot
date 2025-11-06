cmake_minimum_required(VERSION 4.0)
project(Finebot)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.github)
include_directories(.github/workflows)
include_directories(.idea)

add_executable(Finebot
        .github/workflows/cmake-single-platform.yml
        .idea/.gitignore
        .idea/workspace.xml
        LICENSE
        main.cpp
        README.md)

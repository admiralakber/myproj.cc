# EZMake myproj.cc/CMakeLists.txt

cmake_minimum_required(VERSION 3.4.3 FATAL_ERROR)
project(myproj.cc VERSION 0.0.0)
set(PROJECT_DESCRIPTION "ezproj example")

#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)
include(ezmake/EZMake)
include(CTest)

option(myproj.cc_WITH_TESTING "Build tests/examples" ON)
option(myproj.cc_NO_INSTALL "Skip installation process" OFF)

ez_proj_init()

#add_subdirectory(${PROJECT_SOURCE_DIR}/extern)
add_subdirectory(${PROJECT_SOURCE_DIR}/src/lib)
add_subdirectory(${PROJECT_SOURCE_DIR}/src/bin)

ez_proj_export()

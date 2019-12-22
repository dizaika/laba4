cmake_minimum_required(VERSION 2.8)

project(lab3_2)
#set( project_sources
#main.cpp
#student.cpp
#)
file(GLOB HEADERS *.hpp *.h)
file(GLOB SOURCES *.cpp)
#add_library(lab3_2 SHARED ${HEADERS} ${SOURCES})
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

cmake_minimum_required(VERSION 3.8)
project(Pointers)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp Order.cpp.cpp Order.cpp.h)
set(SOURCE_FILES TestOrder.cpp Order.cpp Order.h)

add_executable(Pointers ${SOURCE_FILES})
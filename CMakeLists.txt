cmake_minimum_required(VERSION 3.16.2)
project(math CXX)
file(GLOB SOURCE *.cpp)
add_executable(main.exe ${SOURCE})

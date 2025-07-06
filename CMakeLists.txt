
project(pitft)
cmake_minimum_required(VERSION 3.25)
find_library(cairo NAMES cairo REQUIRED)
add_executable(app main.c)
target_link_libraries(app PRIVATE ${cairo})

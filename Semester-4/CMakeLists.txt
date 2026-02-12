cmake_minimum_required(VERSION 3.31.6)
include_directories(".")
file(GLOB src "./**.c")
project(Semester-4)
mkprogsglob(src)

target_link_libraries(Kadane m)

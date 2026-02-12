cmake_minimum_required(VERSION 3.31.6)
project(Semester-4)

file(GLOB src "./**.c")
list(REMOVE_ITEM src "Extern1.c")
list(REMOVE_ITEM src "Extern2.c")
mkprogsglob(src)

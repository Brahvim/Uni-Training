cmake_minimum_required(VERSION 3.31.6)
project(Uni-C-Assignments)

set(CMAKE_EXPORT_COMPILE_COMMANDS true)
set(CMAKE_C_STANDARD 23)

macro(msg p_message)
  message("[msg] " ${p_message})
endmacro(msg)

macro(mkprogsglob p_glob)
  foreach(f IN LISTS ${p_glob})
    get_filename_component(b ${f} NAME_WE)
    add_executable(${b} ${f})
  endforeach()
endmacro(mkprogsglob)

macro(mkprogsdir p_directory)
  file(GLOB src "$dir/**.c")
  mkprogsglob(src)
  msg(src)
endmacro(mkprogsdir)

subdirs(#
        "3" #
        "4" #
)

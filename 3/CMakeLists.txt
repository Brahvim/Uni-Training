cmake_minimum_required(VERSION 3.31.6)
project(Semester-3)

# # file(GLOB src "./**.c")
# # mkprogsglob(src)

# # list(REMOVE_ITEM src "Extern1.c")
# # list(REMOVE_ITEM src "Extern2.c")
# # add_executable(Extern "Extern1.c" "Extern2.c")

subdirs(sdb)
add_executable(RtlL RtlL.c)                       ########
add_executable(Files Files.c)                     ########
add_executable(CommaOp CommaOp.c)                 ########
add_executable(Formats Formats.c)                 ########
add_executable(Pointers Pointers.c)               ########
add_executable(Recursion Recursion.c)             ########
add_executable(LeftShift LeftShift.c)             ########
add_executable(TargetSum TargetSum.c)             ########
add_executable(BitwiseCond BitwiseCond.c)         ########
add_executable(StaticCheat StaticCheat.c)         ########
add_executable(IndianCoins IndianCoins.c)         ########
add_executable(Extern Extern1.c Extern2.c)        ########
add_executable(ScopeProblem ScopeProblem.c)       ########
add_executable(RegisterAddr RegisterAddr.c)       ########
add_executable(BitwiseLoop2 BitwiseLoop2.c)       ########
add_executable(SecondLargest SecondLargest.c)     ########
add_executable(CountOccurences CountOccurences.c) ########

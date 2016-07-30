cmake_minimum_required(VERSION 2.8)
project (gnutella)

add_subdirectory(src)
add_subdirectory(test)
enable_testing()
add_test(NAME MyIntTest COMMAND Test)



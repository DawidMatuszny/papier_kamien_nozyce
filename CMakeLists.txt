cmake_minimum_required(VERSION 3.11)
project(Zoo)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 14)
add_compile_options(-Wall -Wextra)

add_executable(Zoo main.cpp Player.cpp Player.h HumanPlayer.cpp HumanPlayer.h MonkeyPlayer.cpp MonkeyPlayer.h GameManager.cpp GameManager.h DonkeyPlayer.cpp DonkeyPlayer.h ElephantPlayer.cpp ElephantPlayer.h)

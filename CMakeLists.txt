cmake_minimum_required(VERSION 3.8)
project(ex1)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Game.cpp Game.h Player.h Point.cpp Point.h Logic.h ReversiLogic.cpp ReversiLogic.h LocalPlayer.cpp LocalPlayer.h Drawer.h ConsoleDrawer.cpp ConsoleDrawer.h)
add_executable(ex1 ${SOURCE_FILES} Board.cpp Board.h)
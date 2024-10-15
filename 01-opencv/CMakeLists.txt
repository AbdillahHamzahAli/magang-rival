#==============================
cmake_minimum_required(VERSION 3.0)

project( 01-opencv )

find_package( OpenCV REQUIRED )

add_executable( game src/game-opencv.cpp )

target_link_libraries( game ${OpenCV_LIBS} )


#==============================

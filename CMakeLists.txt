cmake_minimum_required(VERSION 2.8) 
PROJECT (mycv)
find_package(OpenCV REQUIRED )
set( NAME_SRC
    src/main.cpp  
    src/ImageReader.cpp
    src/OpenCVImageReader.cpp  
)

set( NAME_HEADERS       
     include/ImageReader.h
     include/OpenCVImageReader.h
)

INCLUDE_DIRECTORIES( ${CMAKE_CURRENT_SOURCE_DIR}/include )

add_executable( opencvTest ${NAME_SRC} ${NAME_HEADERS} )

target_link_libraries( opencvTest ${OpenCV_LIBS} )


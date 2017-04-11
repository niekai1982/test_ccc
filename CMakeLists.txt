cmake_minimum_required(VERSION 3.3)

#set(CMAKE_C_COMPILER "C:/Program Files (x86)/Dev-Cpp/MinGW64/bin/gcc.exe")
#set(CMAKE_C_FLAGS "-g -Wall -I C:\\mingw\\include -L C:\\mingw\\lib")
#set(CMAKE_CXX_COMPILER "C:/Program Files (x86)/Dev-Cpp/MinGW64/bin/g++.exe")
#set(CMAKE_CXX_FLAGS "-g -Wall  -I C:\\mingw\\include -L C:\\mingw\\lib")

project(test_ccc)
MESSAGE(STATUS "START")
#MESSAGE(STATUS "test")

#if(NOT DEFINED OpenCV_PREFIX)
#    set(OpenCV_PREFIX ${CMAKE_INSTALL_PREFIX})
#endif()


#SET(OPENCV_DIR "E:/opencv-build/install")
#MESSAGE(STATUS "${OPENCV_DIR}")

#FIND_PACKAGE(OpenCV, REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -msse -msse2 -msse3")

INCLUDE_DIRECTORIES("E:/opencv-build/install/include")
INCLUDE_DIRECTORIES("C:/Python27/include")
INCLUDE_DIRECTORIES("C:/Python27/Lib/site-packages/numpy/core/include/numpy")

set(SOURCE_FILES main.cpp)

SET(LIB_PATH "C:/Python27/libs/")
#set(target_libs
#        "e:/opencv-build/install/x64/mingw/libopencv_core320.dll.a"
#        "E:/opencv-build/install/x64/mingw/libopencv_highgui320.dll.a"
#        "E:/opencv-build/install/x64/mingw/libopencv_imgpro320.dll.a"
#        )


#MESSAGE(STATUS, ${LIB_PATH})
#LINK_LIBRARIES(${LIB_PATH})

##MESSAGE(STATUS, $(LIBPATH))
#FIND_LIBRARY(python27 C:/Python27/libs/python27.lib)
##IF(NOT python27)
##    MESSAGE(FATAL_ERROR "python27 not found")
##ENDIF()
##target_link_libraries(test_ccc libpython27.a)
add_executable(test_ccc ${SOURCE_FILES})
target_link_libraries(test_ccc C:/Python27/libs/python27.lib)
target_link_libraries(test_ccc E:/opencv-build/install/x64/mingw/lib/libopencv_core320.dll.a)
target_link_libraries(test_ccc E:/opencv-build/install/x64/mingw/lib/libopencv_highgui320.dll.a)
target_link_libraries(test_ccc E:/opencv-build/install/x64/mingw/lib/libopencv_imgproc320.dll.a)
target_link_libraries(test_ccc E:/opencv-build/install/x64/mingw/lib/libopencv_imgcodecs320.dll.a)


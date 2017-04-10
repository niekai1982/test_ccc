cmake_minimum_required(VERSION 3.3)

#set(CMAKE_C_COMPILER "C:/Program Files (x86)/Dev-Cpp/MinGW64/bin/gcc.exe")
#set(CMAKE_C_FLAGS "-g -Wall -I C:\\mingw\\include -L C:\\mingw\\lib")
#set(CMAKE_CXX_COMPILER "C:/Program Files (x86)/Dev-Cpp/MinGW64/bin/g++.exe")
#set(CMAKE_CXX_FLAGS "-g -Wall  -I C:\\mingw\\include -L C:\\mingw\\lib")

project(test_ccc)

set(SOURCE_FILES main.cpp)
add_executable(test_ccc ${SOURCE_FILES})

MESSAGE("test")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -msse -msse2 -msse3")

INCLUDE_DIRECTORIES("C:/Python27/include")
INCLUDE_DIRECTORIES("C:/Python27/Lib/site-packages/numpy/core/include/numpy")

SET(LIB_PATH "C:/Python27/libs/")
#MESSAGE(STATUS, ${LIB_PATH})
#LINK_LIBRARIES(${LIB_PATH})

##MESSAGE(STATUS, $(LIBPATH))
#FIND_LIBRARY(python27 C:/Python27/libs/python27.lib)
##IF(NOT python27)
##    MESSAGE(FATAL_ERROR "python27 not found")
##ENDIF()
##target_link_libraries(test_ccc libpython27.a)
target_link_libraries(test_ccc C:/Python27/libs/python27.lib)


cmake_minimum_required(VERSION 2.8)
project(ch5)
set(CMAKE_BUILD_TYPE "Release")
# 添加c++ 11标准支持
set(CMAKE_CXX_FLAGS "-std=c++14 -O3")

# Eigen
include_directories("/usr/local/include/eigen3")

# 寻找OpenCV库
find_package(OpenCV REQUIRED)
find_package(FMT REQUIRED)

# 添加头文件
include_directories(${OpenCV_INCLUDE_DIRS})

add_subdirectory(imageBasics)
add_subdirectory(stereo)
add_subdirectory(rgbd)

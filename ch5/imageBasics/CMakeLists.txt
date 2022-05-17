project(imageBasics)

add_executable(imageBasics imageBasics.cpp)
# 链接OpenCV库
target_link_libraries(imageBasics ${OpenCV_LIBS}
fmt::fmt
)

add_executable(undistortImage undistortImage.cpp)
# 链接OpenCV库
target_link_libraries(undistortImage ${OpenCV_LIBS}
fmt::fmt
)

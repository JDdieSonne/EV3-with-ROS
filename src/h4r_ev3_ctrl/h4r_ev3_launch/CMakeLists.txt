cmake_minimum_required(VERSION 2.8.3)
project(h4r_ev3_launch)
find_package(catkin REQUIRED)
catkin_package()

install(
DIRECTORY config launch
DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

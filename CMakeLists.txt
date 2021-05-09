cmake_minimum_required(VERSION 3.18)

set(VCPKG_FEATURE_FLAGS "versions")

project(mytemplate C CXX)

add_subdirectory(mahi-gui)

add_executable(main main.cpp)
target_link_libraries(main mahi::gui)

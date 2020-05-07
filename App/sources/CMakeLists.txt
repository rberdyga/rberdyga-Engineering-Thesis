cmake_minimum_required(VERSION 3.10)
project(dicom_view)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "/home/rafal/Qt/5.12.6/gcc_64/lib/cmake")

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Quick REQUIRED)

add_executable(dicom_view main.cpp mainwindow.cpp mainwindow.h mainwindow.ui)

target_link_libraries(dicom_view Qt5::Core)
target_link_libraries(dicom_view Qt5::Widgets)
target_link_libraries(dicom_view Qt5::Quick)

set_property(TARGET dicom_view PROPERTY CXX_STANDARD 11)



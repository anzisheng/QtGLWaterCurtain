cmake_minimum_required(VERSION 3.20)
project(QtGLWaterCurtain LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH "F:/Qt/6.8.3/msvc2022_64")

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

# 启用自动工具
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)      # 重要：启用 UI 编译
set(CMAKE_AUTORCC ON)

# 添加源文件和 UI 文件
qt_add_executable(${PROJECT_NAME}
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui          # 添加 UI 文件
)

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)

set_target_properties(${PROJECT_NAME} PROPERTIES WIN32_EXECUTABLE TRUE)
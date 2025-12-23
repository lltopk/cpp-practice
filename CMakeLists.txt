cmake_minimum_required(VERSION 3.10.0)
project(cpp-practice VERSION 0.1.0 LANGUAGES C CXX)

# add_executable(cpp-practice src/main.cpp src/sum.cpp src/other.cpp)

#通过 aux_source_directory 收集指定目录下的所有源文件
# aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SOURCES)
# add_executable(my_app ${SOURCES})

##通过 file(GLOB) 正则匹配目录中的源文件。
file(GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(my_app ${SOURCES})

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 17)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

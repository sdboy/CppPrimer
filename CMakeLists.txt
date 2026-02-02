cmake_minimum_required(VERSION 3.10.0)
project(CppPrimer VERSION 0.1.0 LANGUAGES C CXX)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 辅助函数：自动收集源文件
function(collect_sources target_name root_dir)
    file(GLOB_RECURSE SOURCES 
        "${root_dir}/*.cpp"
        "${root_dir}/*.cc"
        "${root_dir}/*.cxx"
    )
    file(GLOB_RECURSE HEADERS 
        "${root_dir}/*.h"
        "${root_dir}/*.hpp"
        "${root_dir}/*.hxx"
    )
    
    add_library(${target_name} STATIC ${SOURCES} ${HEADERS})
    
    # 设置包含目录
    target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
    target_include_directories(${target_name} PUBLIC ${root_dir})
    
    message(STATUS "Added library ${target_name} with ${SOURCES}")
endfunction()
# 创建工具库
collect_sources(tools tools)
# 创建exercises库
collect_sources(exercises exercises)
# 创建primer库
collect_sources(primer primer)
# 链接依赖：exercises依赖tools
target_link_libraries(exercises PUBLIC tools)
# 链接依赖：primer依赖tools
target_link_libraries(primer PUBLIC tools)
# 主程序
add_executable(${PROJECT_NAME} main.cpp)
# 链接所有库（tools会通过exercises和primer自动传递）
target_link_libraries(${PROJECT_NAME} 
    exercises
    primer
)
# 如果需要，可以设置输出的调试信息更友好
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

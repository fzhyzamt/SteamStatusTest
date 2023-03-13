cmake_minimum_required(VERSION 3.24)
project(SteamStatusTest)

set(CMAKE_CXX_STANDARD 23)

# 头文件目录
include_directories(/include)

# 链接器搜索目录
link_directories(lib)

add_executable(SteamStatusTest main.cpp)

# 添加lib
target_link_libraries(SteamStatusTest lib\\steam_api64.lib)
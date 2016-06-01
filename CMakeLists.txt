cmake_minimum_required(VERSION 2.8)
add_executable(Kitty main.cpp)
find_package(Boost COMPONENTS system filesystem REQUIRED)

target_link_libraries(Kitty
    ${Boost_FILESYSTEM_LIBRARY}
    ${Boost_SYSTEM_LIBRARY}
)

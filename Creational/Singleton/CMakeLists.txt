cmake_minimum_required(VERSION 3.22.1)
project (singleton)

enable_testing()

include_directories(include)

find_package(GTest REQUIRED)

add_executable(singleton main.cpp src/singleton.cpp)
target_link_libraries(singleton)

add_executable(singletonTest src/singleton.cpp test/singletonTest.cpp)
target_link_libraries(singletonTest GTest::gtest)

add_test(NAME singletonTest COMMAND "./singletonTest")
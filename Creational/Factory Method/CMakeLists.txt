cmake_minimum_required(VERSION 3.22.1)
project (factory)

enable_testing()

include_directories(include)

find_package(GTest REQUIRED)

add_executable(factory main.cpp src/factory.cpp)
target_link_libraries(factory)

add_executable(factoryTest src/factory.cpp test/factoryTest.cpp)
target_link_libraries(factoryTest GTest::gtest)

add_test(NAME factoryTest COMMAND "./factoryTest")
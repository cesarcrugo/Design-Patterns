#include <gtest/gtest.h>
#include <factory.hpp>

class FactoryTest : public ::testing::Test
{

};

int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

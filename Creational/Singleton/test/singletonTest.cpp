#include <gtest/gtest.h>
#include <singleton.hpp>

class SingletonTest : public ::testing::Test
{

};

TEST_F(SingletonTest, Singleton)
{
    auto s = Singleton::getInstance();
    EXPECT_EQ(s->greet(), "Hello World from Singleton...");
}

int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

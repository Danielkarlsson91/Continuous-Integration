#include<gtest/gtest.h>

class stackFixture: public testing::Test
{
protected:
    Stack stack;
    void SetUp(void) override
    {
        EXPECT_EQ(Q, stack.available());
        EXPECT_TRUE(stack.push(10));
        EXPECT_TRUE(stack.push(20));
        EXPECT_EQ(2, stack.available());

    }

    void TearDown(void) override{}
};

TEST_F(stackFixture, PushPop)
{
    
}
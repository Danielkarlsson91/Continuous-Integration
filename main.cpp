
#include <cstdio>
#include <iostream>
#include <gtest/gtest.h>
#include <stack.h>

TEST(stackSuite, emptyOnCreate)
{
    Stack stack;
    EXPECT_EQ(0, stack.available());
}

TEST(stackSuite, emptyPop)
{
    Stack stack;
    stack.clear();
    EXPECT_EQ(0, stack.available());
}

TEST(stackSuite, emptyPop)
{
    int value;
    Stack stack;

    EXPECT_FALSE(stack.pop(value));
}

TEST(stackSuite, pushFull)
{
    Stack stack;
    EXPECT_TRUE(stack.push(10));

    EXPECT_EQ(1, stack.available());
}

TEST(stackSuite, pop)
{
    int value;
    Stack stack;

    EXPECT_TRUE(stack.push(10));
    EXPECT_EQ(1, stack.available());

    EXPECT_TRUE(stack.pop(value));
    EXPECT_EQ(10, value);
    EXPECT_EQ(0, stack.available());

}


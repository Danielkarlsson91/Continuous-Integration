#include "Greeting.h"
#include <gtest/gtest.h>

TEST(test, test1)
{
    EXPECT_EQ("Hello, Bob", greet("Bob"));
}

TEST(test, test_empty)
{
    EXPECT_EQ("Hello, my friend.", greet(""));
}

TEST(test, test_shout)
{
    EXPECT_EQ("HELLO JERRY!", greet("JERRY"));
}

TEST(test, test_names)
{
    EXPECT_EQ("Hello, Jill and Jane.", greet("Jill, Jane"));
}

TEST(test, test_three_names)
{
    EXPECT_EQ("Hello, Amy, Brian, and Charlotte.", greet("Amy, Brian, Charlotte"));
}

TEST(test, test_mixed)
{
    EXPECT_EQ("Hello, Amy and Charlotte. AND HELLO BRIAN!", greet("Amy, BRIAN, Charlotte"));
}
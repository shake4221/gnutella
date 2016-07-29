#include "gtest/gtest.h"
#include "hello.h"

namespace {

class HelloTest : public ::testing::Test{};

TEST_F(HelloTest, return_true)
{
    EXPECT_EQ(true, return_true());
    EXPECT_EQ(false, return_true());
}


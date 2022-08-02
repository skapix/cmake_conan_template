#include "gtest/gtest.h"

#include "util.h"

namespace {

TEST(FactorialTest, Simple) {
  EXPECT_EQ(1, Factorial(-1));
  EXPECT_EQ(1, Factorial(0));
  EXPECT_EQ(1, Factorial(1));
  EXPECT_EQ(2, Factorial(2));
  EXPECT_EQ(120, Factorial(5));
}

}  // namespace

#include "src/lib/solution.h"
#include "gtest/gtest.h"
using namespace std;

TEST(FactorialTest, HandleFactorial) {
  Solution solution;
  int inputs = 5;
  EXPECT_EQ(solution.Factorial(inputs), 120);
  EXPECT_EQ(solution.FactorialRecursive(inputs), 120);
}

TEST(FactorialTest, HandlesOne) {
  Solution solution;
  int inputs = 1;
  EXPECT_EQ(solution.Factorial(inputs), 1);
  EXPECT_EQ(solution.FactorialRecursive(inputs), 1);
}

TEST(FactorialTest, HandlesZero) {
  Solution solution;
  int  inputs = 0;
  EXPECT_EQ(solution.Factorial(inputs), 1);
  EXPECT_EQ(solution.FactorialRecursive(inputs), 1);
}

TEST(FactorialTest, HandlesNegativeNumber) {
  Solution solution;
  int inputs = -8;
  EXPECT_EQ(solution.Factorial(inputs), -1);
  EXPECT_EQ(solution.FactorialRecursive(inputs), -1);
}

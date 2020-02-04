#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(HelloWorldShould, FactorialRecursive) {
  Solution solution;
  int in1 = 5;
  int in2 = 0;
  int in3 = -2;
  auto actual1 = solution.FactorialRecursive(in1);
  auto expected1 = 120;
  EXPECT_EQ(expected1, actual1);
  auto actual2 = solution.FactorialRecursive(in2);
  auto expected2 = 1;
  EXPECT_EQ(expected2, actual2);
  auto actual3 = solution.FactorialRecursive(in3);
  auto expected3 = -1 ;
  EXPECT_EQ(expected3, actual3);
}

TEST(HelloWorldShould, Factorialiterative) {
  Solution solution;
  int in1 = 5;
  int in2 = 0;
  int in3 = -2;
  auto actual1 = solution.FactorialIterative(in1);
  auto expected1 = 120;
  EXPECT_EQ(expected1, actual1);
  auto actual2 = solution.FactorialIterative(in2);
  auto expected2 = 1;
  EXPECT_EQ(expected2, actual2);
  auto actual3 = solution.FactorialIterative(in3);
  auto expected3 = -1 ;
  EXPECT_EQ(expected3, actual3);
}


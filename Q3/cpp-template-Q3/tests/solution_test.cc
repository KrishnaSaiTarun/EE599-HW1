#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(HelloWorldShould, MedainofVec) {
  Solution solution;
  std::vector<float> in1 = {1,2,3};
  std::vector<float> in2 = {};
  std::vector<float> in3 = {1,2,3,4};

  auto actual1 = solution.FindMedian(in1);
  auto expected1 = 2;
  auto actual2 = solution.FindMedian(in2);
  auto expected2 = -1;
  auto actual3 = solution.FindMedian(in3);
  auto expected3 = 2.5;
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);

}
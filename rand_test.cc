#include <algorithm>
#include <gtest/gtest.h>
#include <vector>
#include <numeric>
#include "rand.h"

namespace {
TEST(rand, uniform) {
  auto xs = std::vector<double>(1000);
  std::generate(xs.begin(), xs.end(), [](){return fmath::uniform::uniform();});

  auto sum = std::accumulate(xs.begin(), xs.end(), 0.0);
  ASSERT_TRUE(sum < 1000);
  ASSERT_TRUE(sum > 500);

  for (auto& x : xs) {
    ASSERT_FALSE(x < 0.0);
    ASSERT_FALSE(x > 1.0);
  }
}
}
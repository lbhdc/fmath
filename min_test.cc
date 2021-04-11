#include <gtest/gtest.h>
#include "min.h"

namespace {
TEST(floats, floor) {
  ASSERT_EQ(fmath::floor(1.1f), 1.0f);
  ASSERT_EQ(fmath::floor(1.1), 1.0);
}

TEST(lib, min) {
  ASSERT_EQ(fmath::min(1, 2), 1);
  ASSERT_EQ(fmath::min(2, 1), 1);
  ASSERT_EQ(fmath::min(1, 1), 1);
}
}
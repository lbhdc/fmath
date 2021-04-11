#include <gtest/gtest.h>
#include "max.h"

namespace {
TEST(floats, ceil) {
  ASSERT_EQ(fmath::ceil(1.1f), 2.0f);
  ASSERT_EQ(fmath::ceil(1.1), 2.0);
}

TEST(lib, max) {
  ASSERT_EQ(fmath::max(1, 2), 2);
  ASSERT_EQ(fmath::max(2, 1), 2);
  ASSERT_EQ(fmath::max(1, 1), 1);
}
}
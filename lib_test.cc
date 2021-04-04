#include <gtest/gtest.h>
#include "lib.h"

namespace {
TEST(lib, abs) {
  ASSERT_EQ(fmath::abs(-1), 1);
}

TEST(lib, is_pow2) {
  ASSERT_TRUE(fmath::is_pow2(2));
  ASSERT_FALSE(fmath::is_pow2(3));
}

TEST(lib, max) {
  ASSERT_EQ(fmath::max(1, 2), 2);
  ASSERT_EQ(fmath::max(2, 1), 2);
  ASSERT_EQ(fmath::max(1, 1), 1);
}

TEST(lib, min) {
  ASSERT_EQ(fmath::min(1, 2), 1);
  ASSERT_EQ(fmath::min(2, 1), 1);
  ASSERT_EQ(fmath::min(1, 1), 1);
}

TEST(lib, same_signs) {
  ASSERT_TRUE(fmath::same_signs(1, 1));
  ASSERT_TRUE(fmath::same_signs(-1, -1));
}

TEST(lib, sign) {
  ASSERT_EQ(fmath::sign(1), 0);
  ASSERT_EQ(fmath::sign(-1), -1);
}
}
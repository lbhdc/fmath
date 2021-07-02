#include <gtest/gtest.h>
#include "numeric.h"

namespace {
TEST(lib, is_pow2) {
  ASSERT_FALSE(fmath::is_pow2(0));
  ASSERT_TRUE(fmath::is_pow2(2));
  ASSERT_FALSE(fmath::is_pow2(3));
}

TEST(floats, neg) {
  ASSERT_EQ(fmath::neg(1.0f), -1.0f);
}

TEST(floats, newton_raphson) {
  ASSERT_EQ(fmath::newton_raphson(1.0f, 1.0f), 1.0f);
  ASSERT_EQ(fmath::newton_raphson(2.0f, 4.0f), 2.25f);
}
}
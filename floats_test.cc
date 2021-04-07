#include <gtest/gtest.h>
#include "floats.h"

namespace {
TEST(floats, type_conversion) {
  auto have = 1.0f;
  auto got = fmath::as_float(fmath::as_int(have));
  EXPECT_EQ(have, got);
}

TEST(floats, ceil) {
  ASSERT_EQ(fmath::ceil(1.1f), 2.0f);
}

TEST(floats, exp2) {
  ASSERT_EQ(fmath::exp2(1.0f), 2.0f);
}

TEST(floats, floor) {
  ASSERT_EQ(fmath::floor(1.1f), 1.0f);
}

TEST(floats, log2) {
  ASSERT_EQ(fmath::log2(1.0f), 0.0f);
}

TEST(floats, neg) {
  ASSERT_EQ(fmath::neg(1.0f), -1.0f);
}

TEST(floats, pow) {
  ASSERT_EQ(fmath::pow(2.0f, 2.0f), 4.0f);
  ASSERT_EQ(fmath::pow(4.0f, 0.5f), 2.0f);
}

TEST(floats, round) {
  ASSERT_EQ(fmath::round(1.4f), 1.0f);
}

TEST(floats, rsqrt) {
  ASSERT_EQ(fmath::roundp(fmath::rsqrt(25.0f), 1), 0.2f);
  ASSERT_EQ(fmath::roundp(fmath::rsqrt_lomont(25.0f), 1), 0.2f);
  ASSERT_EQ(fmath::roundp(fmath::rsqrt_quake(25.0f), 1), 0.2f);
}

TEST(floats, sqrt) {
  ASSERT_EQ(fmath::sqrt(4.0f), 2.0f);
}
}
#include <gtest/gtest.h>
#include "pow.h"

namespace {
TEST(floats, pow) {
  ASSERT_EQ(fmath::pow(2.0f, 2.0f), 4.0f);
  ASSERT_EQ(fmath::pow(4.0f, 0.5f), 2.0f);
}
}
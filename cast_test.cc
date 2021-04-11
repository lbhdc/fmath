#include <gtest/gtest.h>
#include "cast.h"

namespace {
TEST(floats, type_conversion) {
  auto have = 1.0f;
  auto got = fmath::as_float(fmath::as_int(have));
  EXPECT_EQ(have, got);
}
}
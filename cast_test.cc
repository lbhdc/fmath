#include <gtest/gtest.h>
#include "cast.h"

namespace {
TEST(floats, type_conversion) {
  // 32bit
  auto have1 = 1.0f;
  auto got1 = fmath::as_float(fmath::as_int(have1));
  EXPECT_EQ(have1, got1);

  // 64bit
  auto have2 = 1.0;
  auto got2 = fmath::as_float(fmath::as_int(have2));
  EXPECT_EQ(have2, got2);
}
}
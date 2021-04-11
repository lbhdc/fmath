#include <gtest/gtest.h>
#include "min.h"

namespace {
TEST(lib, min) {
  ASSERT_EQ(fmath::min(1, 2), 1);
  ASSERT_EQ(fmath::min(2, 1), 1);
  ASSERT_EQ(fmath::min(1, 1), 1);
}
}
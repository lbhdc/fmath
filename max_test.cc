#include <gtest/gtest.h>
#include "max.h"

namespace {
TEST(lib, max) {
  ASSERT_EQ(fmath::max(1, 2), 2);
  ASSERT_EQ(fmath::max(2, 1), 2);
  ASSERT_EQ(fmath::max(1, 1), 1);
}
}
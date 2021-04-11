#include <gtest/gtest.h>
#include "numeric.h"

namespace {
TEST(lib, is_pow2) {
  ASSERT_TRUE(fmath::is_pow2(2));
  ASSERT_FALSE(fmath::is_pow2(3));
}
}
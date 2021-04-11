#include <gtest/gtest.h>
#include "exp.h"

namespace {
TEST(floats, exp2) {
  ASSERT_EQ(fmath::exp2(1.0f), 2.0f);
}
}
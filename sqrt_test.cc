#include <gtest/gtest.h>
#include "sqrt.h"

namespace {
TEST(floats, sqrt) {
  ASSERT_EQ(fmath::sqrt(4.0f), 2.0f);
}
}
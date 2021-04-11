#include <gtest/gtest.h>
#include "round.h"

namespace {
TEST(floats, round) {
  ASSERT_EQ(fmath::round(1.4f), 1.0f);
}
}
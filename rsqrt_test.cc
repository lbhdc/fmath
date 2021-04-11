#include <gtest/gtest.h>
#include "round.h"
#include "rsqrt.h"

namespace {
TEST(floats, rsqrt) {
  ASSERT_EQ(fmath::roundp(fmath::rsqrt(25.0f), 1), 0.2f);
  ASSERT_EQ(fmath::roundp(fmath::rsqrt_lomont(25.0f), 1), 0.2f);
  ASSERT_EQ(fmath::roundp(fmath::rsqrt_quake(25.0f), 1), 0.2f);
}
}

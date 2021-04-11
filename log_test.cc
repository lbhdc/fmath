#include <gtest/gtest.h>
#include "log.h"

namespace {
TEST(floats, log2) {
  ASSERT_EQ(fmath::log2(1.0f), 0.0f);
}
}
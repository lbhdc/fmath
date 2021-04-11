#include <gtest/gtest.h>
#include "abs.h"

namespace {
TEST(lib, abs) {
  ASSERT_EQ(fmath::abs(-1), 1);
}
}
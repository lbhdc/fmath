#include <gtest/gtest.h>
#include "div.h"

namespace {
TEST(div, merge) {
  auto res = fmath::div(4, 2);
  ASSERT_EQ(res, 2);
}
}
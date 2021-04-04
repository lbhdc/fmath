#include <gtest/gtest.h>
#include "bits.h"

namespace {
TEST(bits, reverse) {
  ASSERT_EQ(fmath::reverse_bits(0b00000000000000001111111111111111), 0b11111111111111110000000000000000);
}
}
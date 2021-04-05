#include <gtest/gtest.h>
#include "bits.h"

namespace {
TEST(bits, merge) {
  auto a = 0b00000000000000000000000000000000;
  auto b = 0b11111111111111111111111111111111;
  auto mask = fmath::bitmask<unsigned int>(16);
  ASSERT_EQ(fmath::merge(a, b, mask), mask);

}

TEST(bits, reverse) {
  ASSERT_EQ(fmath::reverse_bits(0b00000000000000001111111111111111), 0b11111111111111110000000000000000);
}
}
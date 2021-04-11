#include <cstdint>
#include <gtest/gtest.h>
#include "bits.h"

namespace {
TEST(bits, merge) {
  auto a = 0b00000000000000000000000000000000U;
  auto b = 0b11111111111111111111111111111111U;
  auto mask = fmath::bitmask<uint64_t>(16);
  ASSERT_EQ(fmath::merge(a, b, mask), mask);

}

TEST(bits, reverse) {
  ASSERT_EQ(fmath::reverse_bits(0b00000000000000001111111111111111), 0b11111111111111110000000000000000);
}

TEST(bits, swap) {
  uint64_t a = 0;
  uint64_t b = 1;
  fmath::swap(a, b);
  ASSERT_EQ(a, 1);
  ASSERT_EQ(b, 0);
}
}
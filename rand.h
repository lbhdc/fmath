#ifndef FMATH_RAND_H
#define FMATH_RAND_H

#include <cstdint>
#include "magic.h"

namespace fmath {
namespace xorshf {
static uint64_t x = 123456789;
static uint64_t y = 362436069;
static uint64_t z = 521288629;

inline uint64_t xorshf96() noexcept {
  uint64_t t;
  x ^= x << 16;
  x ^= x >> 5;
  x ^= x << 1;
  t = x;
  x = y;
  y = z;
  z = t ^ x ^ y;
  return z;
}
} // xorshf

namespace uniform {
static uint64_t s[2] = {0x41, 0x29837592};

static constexpr uint64_t rotl(const uint64_t x, int k) noexcept {
  return (x << k) | (x >> (64 - k));
}

inline double uniform() noexcept {
  const auto s0 = s[0];
  auto s1 = s[1];
  const auto result = s0 + s1;

  s1 ^= s0;
  s[0] = rotl(s0, 55) ^ s1 ^ (s1 << 14);
  s[1] = rotl(s1, 36);

  return static_cast<double>(result) * magic::normal_ratio;
}
} // unfiorm
} // fmath
#endif //FMATH_RAND_H

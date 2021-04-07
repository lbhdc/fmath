#ifndef FMATH_LIB_H
#define FMATH_LIB_H

#include <climits>
#include "lib.h"

namespace fmath {
constexpr bool is_pow2(int v) noexcept {
  return v && !(v & (v - 1));
}

constexpr int max(int a, int b) noexcept {
  return a - ((a - b) & ((a - b) >> (sizeof(int) * CHAR_BIT - 1)));
}

constexpr int min(int a, int b) noexcept {
  return b + ((a - b) & ((a - b) >> (sizeof(int) * CHAR_BIT - 1)));
}

constexpr bool same_signs(int a, int b) noexcept {
  return (a ^ b) >= 0;
}

constexpr int sign(int v) noexcept {
  return v >> (sizeof(int) * CHAR_BIT - 1);
}

constexpr int abs(int v) noexcept {
  const int mask = sign(v);
  return (v + mask) ^ mask;
}
}

#endif //FMATH_LIB_H

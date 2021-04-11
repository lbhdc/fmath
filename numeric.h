#ifndef FMATH_NUMERIC_H
#define FMATH_NUMERIC_H

#include "cast.h"
#include "concept.h"
#include "magic.h"

namespace fmath {
constexpr bool even(int v) {
  return (v & 1) == 0;
}

template<Number T>
constexpr bool is_pow2(T v) noexcept {
  return v && !(v & (v - 1));
}

inline float neg(float f) noexcept {
  return as_float(as_int(f) ^ magic::negative_zero_f);
}

constexpr float newton_raphson(float x, float y) noexcept {
  return (y * y + x) / (2 * y);
}
}

#endif //FMATH_NUMERIC_H

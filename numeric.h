#ifndef FMATH_NUMERIC_H
#define FMATH_NUMERIC_H

#include "concept.h"

namespace fmath {
constexpr bool even(int v) {
  return (v & 1) == 0;
}

template<Number T>
constexpr bool is_pow2(T v) noexcept {
  return v && !(v & (v - 1));
}
}

#endif //FMATH_NUMERIC_H

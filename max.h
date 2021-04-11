#ifndef FMATH_MAX_H
#define FMATH_MAX_H

#include <climits>
#include "concept.h"
#include "min.h"
#include "numeric.h"

namespace fmath {
constexpr float ceil(float v) noexcept {
  return -(floor(-v));
}

constexpr double ceil(double v) noexcept {
  return -(floor(-v));
}

template<Number T>
constexpr T max(T a, T b) noexcept {
return a - ((a - b) & ((a - b) >> (sizeof(T) * CHAR_BIT - 1)));
}
}

#endif //FMATH_MAX_H

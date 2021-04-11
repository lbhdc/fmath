#ifndef FMATH_MIN_H
#define FMATH_MIN_H

#include <climits>
#include "concept.h"

namespace fmath {
constexpr float floor(float v) noexcept {
  return static_cast<float>(static_cast<int>(v) - (v < static_cast<float>(static_cast<int>(v))));
}

constexpr double floor(double v) noexcept {
  return static_cast<double>(static_cast<long>(v) - (v < static_cast<double>(static_cast<long>(v))));
}

template<Number T>
constexpr T min(T a, T b) noexcept {
return b + ((a - b) & ((a - b) >> (sizeof(T) * CHAR_BIT - 1)));
}
}

#endif //FMATH_MIN_H

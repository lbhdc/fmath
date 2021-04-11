#ifndef FMATH_ROUND_H
#define FMATH_ROUND_H

#include "min.h"
#include "pow.h"

namespace fmath {
constexpr float round(float v) noexcept {
  return floor(v + 0.5f);
}

inline float roundp(float f, float precision) noexcept {
  auto pow10 = pow(10, precision);
  return round(f * pow10) / pow10;
}
}

#endif //FMATH_ROUND_H

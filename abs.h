#ifndef FMATH_ABS_H
#define FMATH_ABS_H

#include "concept.h"
#include "sign.h"

namespace fmath {
template<Number T>
constexpr T abs(T v) noexcept {
  const T mask = sign(v);
  return (v + mask) ^ mask;
}
}

#endif //FMATH_ABS_H

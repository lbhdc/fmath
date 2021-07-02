#ifndef FMATH_SQRT_H
#define FMATH_SQRT_H

#include "cast.h"
#include "magic.h"

namespace fmath {
constexpr float sqrt(float f) noexcept {
  return as_float((as_int(f) >> 1) + (magic::one_f >> 1));
}
}

#endif //FMATH_SQRT_H

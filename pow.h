#ifndef FMATH_POW_H
#define FMATH_POW_H

#include "cast.h"
#include "magic.h"

namespace fmath {
inline float pow(float x, float p) noexcept {
  return as_float(static_cast<unsigned int>(static_cast<int>(
    p * (static_cast<float>(as_int(x) - magic::one_f)))) + magic::one_f);
}
}

#endif //FMATH_POW_H

#ifndef FMATH_EXP_H
#define FMATH_EXP_H

#include "cast.h"
#include "magic.h"

namespace fmath {
constexpr float exp2(float f) noexcept {
  return as_float(static_cast<unsigned int>(f * magic::scale_up) + magic::one_f);
}
}

#endif //FMATH_EXP_H

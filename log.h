#ifndef FMATH_LOG_H
#define FMATH_LOG_H

#include "cast.h"
#include "concept.h"
#include "magic.h"

namespace fmath {
template<Number T>
inline T log2(T f) noexcept {
  return as_float(as_int(f) - magic::one_f) * magic::scale_down;
}
}

#endif //FMATH_LOG_H

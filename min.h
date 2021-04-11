#ifndef FMATH_MIN_H
#define FMATH_MIN_H

#include <climits>
#include "concept.h"

namespace fmath {
template<Number T>
constexpr T min(T a, T b) noexcept {
return b + ((a - b) & ((a - b) >> (sizeof(T) * CHAR_BIT - 1)));
}
}

#endif //FMATH_MIN_H

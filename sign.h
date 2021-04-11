#ifndef FMATH_SIGN_H
#define FMATH_SIGN_H

#include <climits>
#include "concept.h"

namespace fmath {

template<Number T>
constexpr bool same_signs(T a, T b) noexcept {
return (a ^ b) >= 0;
}

template<Number T>
constexpr T sign(T v) noexcept {
return v >> (sizeof(T) * CHAR_BIT - 1);
}
}
#endif //FMATH_SIGN_H

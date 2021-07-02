#ifndef FMATH_DIV_H
#define FMATH_DIV_H

#include "abs.h"
#include "sign.h"

namespace fmath {
constexpr int div(int num, int denom) noexcept {
  int s = sign(num) ^ sign(denom);
  num = abs(num);
  denom = abs(denom);

  int quotient = 0;
  while (num >= denom) {
    num -= denom;
    ++quotient;
  }

  // TODO: handle sign
  return quotient;
}
}

#endif //FMATH_DIV_H

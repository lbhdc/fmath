#ifndef FMATH_DIV_H
#define FMATH_DIV_H

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

  return s * quotient;
}
}

#endif //FMATH_DIV_H

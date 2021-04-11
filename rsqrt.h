#ifndef FMATH_RSQRT_H
#define FMATH_RSQRT_H

#include "cast.h"
#include "magic.h"

namespace fmath {
inline float rsqrt(float x) noexcept {
  auto xhalf = 0.5f * x;
  x = as_float(magic::lomont_magic_num - (as_int(x) >> 1));
  return x * (1.5f - xhalf * x * x);
}

inline float rsqrt_lomont(float x) noexcept {
  auto xhalf = 0.5f * x;
  int i = *reinterpret_cast<int *>(&x);
  i = magic::lomont_magic_num - (i >> 1);
  x = *reinterpret_cast<float *>(&i);
  x = x*(1.5f-xhalf*x*x);
  return x;
}

inline float rsqrt_quake(float num) noexcept {
  const float threehalfs = 1.5f;
  float x2 = num * 0.5f;
  float y = num;
  int i = *reinterpret_cast<int *>(&y);
  i = magic::quake_magic_num - (i >> 1);
  y = *reinterpret_cast<float *>(&i);
  y = y * (threehalfs - (x2 * y * y));
  return y;
}
}

#endif //FMATH_RSQRT_H

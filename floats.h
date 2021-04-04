#ifndef FMATH_FLOATS_H
#define FMATH_FLOATS_H

#include <cmath>
#include "magic.h"

namespace fmath {
inline float as_float(unsigned int i) {
  return *reinterpret_cast<float *>(&i);
}

inline unsigned int as_int(float f) {
  return *reinterpret_cast<unsigned int *>(&f);
}

inline float exp2(float f) {
  return as_float(static_cast<unsigned int>(f * magic::scale_up) + magic::one_f);
}

inline float log2(float f) {
  return as_float(as_int(f) - magic::one_f) * magic::scale_down;
}

inline float neg(float f) {
  return as_float(as_int(f) ^ magic::negative_zero_f);
}

inline float newton_raphson(float x, float y) {
  return (y * y + x) / (2 * y);
}

inline float pow(float x, float p) {
  return as_float(int(p * (as_int(x) - magic::one_f)) + magic::one_f);
}

float roundp(float f, int precision) {
  auto pow10 = static_cast<float>(std::pow(10, precision));
  return std::round(f * pow10) / pow10;
}

inline float rsqrt(float x) {
  auto xhalf = 0.5f * x;
  x = as_float(magic::lomont_magic_num - (as_int(x) >> 1));
  x = x * (1.5f - xhalf * x * x);
  return x;
}

inline float rsqrt_lomont(float x) {
  auto xhalf = 0.5f * x;
  int i = *(int *)&x;
  i = magic::lomont_magic_num - (i >> 1);
  x = *(float *)&i;
  x = x*(1.5f-xhalf*x*x);
  return x;
}

inline float rsqrt_quake(float num) {
  const float threehalfs = 1.5f;
  float x2 = num * 0.5f;
  float y = num;
  int i = *(int *) &y;
  i = magic::quake_magic_num - (i >> 1);
  y = *(float *) &i;
  y = y * (threehalfs - (x2 * y * y));
  return y;
}

inline float sqrt(float f) {
  return as_float((as_int(f) >> 1) + (magic::one_f >> 1));
}
}
#endif //FMATH_FLOATS_H

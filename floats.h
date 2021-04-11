#ifndef FMATH_FLOATS_H
#define FMATH_FLOATS_H

#include <cstdint>
#include "magic.h"

namespace fmath {
inline float as_float(uint32_t i) noexcept {
  return *reinterpret_cast<float *>(&i);
}

inline uint32_t as_int(float f) noexcept {
  return *reinterpret_cast<uint32_t *>(&f);
}

inline float exp2(float f) noexcept {
  return as_float(static_cast<unsigned int>(f * magic::scale_up) + magic::one_f);
}

constexpr float floor(float v) noexcept {
  return static_cast<float>(static_cast<int>(v) - (v < static_cast<float>(static_cast<int>(v))));
}

constexpr float ceil(float v) noexcept {
  return -(floor(-v));
}

inline float log2(float f) noexcept {
  return as_float(as_int(f) - magic::one_f) * magic::scale_down;
}

inline float neg(float f) noexcept {
  return as_float(as_int(f) ^ magic::negative_zero_f);
}

constexpr float newton_raphson(float x, float y) noexcept {
  return (y * y + x) / (2 * y);
}

inline float pow(float x, float p) noexcept {
  return as_float(static_cast<unsigned int>(static_cast<int>(
    p * (static_cast<float>(as_int(x) - magic::one_f)))) + magic::one_f);
}

constexpr float round(float v) noexcept {
  return floor(v + 0.5f);
}

inline float roundp(float f, float precision) noexcept {
  auto pow10 = pow(10, precision);
  return round(f * pow10) / pow10;
}

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

inline float sqrt(float f) noexcept {
  return as_float((as_int(f) >> 1) + (magic::one_f >> 1));
}
}
#endif //FMATH_FLOATS_H

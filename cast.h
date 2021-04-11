#ifndef FMATH_CAST_H
#define FMATH_CAST_H

#include <cstdint>

namespace fmath {
inline float as_float(uint32_t i) noexcept {
  return *reinterpret_cast<float *>(&i);
}

inline double as_float(uint64_t i) noexcept {
  return *reinterpret_cast<double *>(&i);
}

inline uint32_t as_int(float f) noexcept {
  return *reinterpret_cast<uint32_t *>(&f);
}

inline uint64_t as_int(double f) noexcept {
  return *reinterpret_cast<uint64_t *>(&f);
}
}

#endif //FMATH_CAST_H

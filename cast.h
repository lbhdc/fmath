#ifndef FMATH_CAST_H
#define FMATH_CAST_H

#include <bit>
#include <cstdint>

namespace fmath {
constexpr float as_float(uint32_t i) noexcept {
  return std::bit_cast<float>(i);
}

constexpr double as_float(uint64_t i) noexcept {
  return std::bit_cast<double>(i);
}

constexpr uint32_t as_int(float f) noexcept {
  return std::bit_cast<uint32_t>(f);
}

constexpr uint64_t as_int(double f) noexcept {
  return std::bit_cast<uint64_t>(f);
}
}

#endif //FMATH_CAST_H

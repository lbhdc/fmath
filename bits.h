#ifndef FMATH_BITS_H
#define FMATH_BITS_H

#include <climits>
#include <cstdint>

namespace fmath {
/// bitmask creates a sequence of bits with `onecount` number of 1's in the sequence
template <typename R>
static constexpr R bitmask(const uint64_t onecount) noexcept {
  return static_cast<R>(-(onecount != 0)) & (static_cast<R>(-1) >> ((sizeof(R) * CHAR_BIT - onecount)));
}

constexpr uint32_t endian_swap(uint32_t v) noexcept {
  return (v >> 24) | ((v << 8) & 0x00FF0000) | ((v >> 8) & 0x0000FF00)|(v << 24);
}

/// merge the bits from a and b according to the mask
constexpr uint64_t merge(uint64_t a, uint64_t b, uint64_t mask) noexcept {
  return a ^ ((a ^ b) & mask);
}

/// pop_count returns the number of 1s in the in the bit sequence
constexpr uint64_t pop_count(uint64_t x) noexcept {
  uint64_t count = 0;
  for (; x; count++) {
    x &= x -1;
  }
  return count;
}

/// reverse_bit reverses the bits in a sequence
constexpr uint32_t reverse_bits(uint32_t v) noexcept {
  v = ((v >> 1) & 0x55555555) | ((v & 0x55555555) << 1);
  v = ((v >> 2) & 0x33333333) | ((v & 0x33333333) << 2);
  v = ((v >> 4) & 0x0F0F0F0F) | ((v & 0x0F0F0F0F) << 4);
  v = ((v >> 8) & 0x00FF00FF) | ((v & 0x00FF00FF) << 8);
  v = (v >> 16) | (v << 16);
  return v;
}

/// swap the bits in a and b
constexpr void swap(uint64_t& a, uint64_t& b) noexcept {
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
}
}

#endif //FMATH_BITS_H

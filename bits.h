#ifndef FMATH_BITS_H
#define FMATH_BITS_H

#include <climits>

namespace fmath {
template <typename R>
static constexpr R bitmask(unsigned int const onecount) {
  return static_cast<R>(-(onecount != 0)) & (static_cast<R>(-1) >> ((sizeof(R) * CHAR_BIT - onecount)));
}

inline unsigned merge(unsigned int a, unsigned int b, unsigned int mask) {
  return a ^ ((a ^ b) & mask);
}

inline unsigned int reverse_bits(unsigned int v) {
  v = ((v >> 1) & 0x55555555) | ((v & 0x55555555) << 1);
  v = ((v >> 2) & 0x33333333) | ((v & 0x33333333) << 2);
  v = ((v >> 4) & 0x0F0F0F0F) | ((v & 0x0F0F0F0F) << 4);
  v = ((v >> 8) & 0x00FF00FF) | ((v & 0x00FF00FF) << 8);
  v = (v >> 16) | (v << 16);
  return v;
}
}

#endif //FMATH_BITS_H

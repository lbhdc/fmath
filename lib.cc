#include <climits>
#include <iostream>
#include "lib.h"

namespace fmath {
int abs(int v) {
  int const mask = sign(v);
  return (v + mask) ^ mask;
}

bool is_pow2(int v) {
  return v && !(v & (v - 1));
}

int max(int a, int b) {
  return a - ((a - b) & ((a - b) >> (sizeof(int) * CHAR_BIT - 1)));
}

int min(int a, int b) {
  return b + ((a - b) & ((a - b) >> (sizeof(int) * CHAR_BIT - 1)));
}

bool same_signs(int a, int b) {
  return (a ^ b) >= 0;
}

int sign(int v) {
  return v >> (sizeof(int) * CHAR_BIT - 1);
}
}
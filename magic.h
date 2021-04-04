#ifndef FMATH_MAGIC_H
#define FMATH_MAGIC_H

namespace fmath::magic {
const unsigned int negative_zero_f = 0x80000000;
const unsigned int one_f =  0x3F800000;
const float scale_up = static_cast<float>(0x00800000); // 8388608.0, 2^23
const float scale_down = 1.0f / scale_up;
const int lomont_magic_num = 0x5f375a86;
const int quake_magic_num = 0x5f3759df;
}

#endif //FMATH_MAGIC_H

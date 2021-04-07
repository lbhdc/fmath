#ifndef FMATH_MAGIC_H
#define FMATH_MAGIC_H

namespace fmath::magic {
static const int          lomont_magic_num = 0x5f375a86;
static const unsigned int negative_zero_f  = 0x80000000;
static const double       normal_ratio     = (1.0 / 18446744073709551616.0);
static const unsigned int one_f            = 0x3F800000;
static const int          quake_magic_num  = 0x5f3759df;
static const float        scale_up         = static_cast<float>(0x00800000); // 8388608.0, 2^23
static const float        scale_down       = 1.0f / scale_up;
}

#endif //FMATH_MAGIC_H

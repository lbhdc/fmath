#ifndef FMATH_MAGIC_H
#define FMATH_MAGIC_H

namespace fmath::magic {
static constexpr int          lomont_magic_num = 0x5f375a86;
static constexpr unsigned int negative_zero_f  = 0x80000000;
static constexpr double       normal_ratio     = (1.0 / 18446744073709551616.0);
static constexpr unsigned int one_f            = 0x3F800000;
static constexpr int          quake_magic_num  = 0x5f3759df;
static constexpr float        scale_up         = static_cast<float>(0x00800000); // 8388608.0, 2^23
static constexpr float        scale_down       = 1.0f / scale_up;
}

#endif //FMATH_MAGIC_H

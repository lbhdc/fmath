cdef extern from "floats.h" namespace "fmath":
    float exp2(float)
    float log2(float)
    float neg(float)
    float pow(float, float)
    float rsqrt(float)
    float rsqrt_lomont(float)
    float rsqrt_quake(float)
    float sqrt(float)
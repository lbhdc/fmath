# distutils: language = c++
#cython: language_level = 3

cdef extern from "lib.cc":
    pass


cdef extern from "lib.h" namespace "fmath":
    int abs(int)
    bint is_pow2(int)
    int max(int, int)
    int min(int, int)
    bint same_signs(int, int)
    int sign(int)
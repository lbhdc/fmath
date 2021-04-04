# distutils: language = c++
#cython: language_level = 3

cimport floats
cimport lib


def abs(v: int) -> int:
    return lib.abs(v)


def exp2(v: float) -> float:
    return floats.exp2(v)


def is_pow2(v: int) -> bool:
    return lib.is_pow2(v)


def log2(v: float) -> float:
    return floats.log2(v)


def max(a: int, b: int) -> int:
    return lib.max(a, b)


def min(a: int, b: int) -> int:
    return lib.min(a, b)


def pow(a: float, b: float) -> float:
    return floats.pow(a, b)


def rsqrt(v: float) -> float:
    return floats.rsqrt(v)


def rsqrt_lomont(v: float) -> float:
    return floats.rsqrt_lomont(v)


def rsqrt_quake(v: float) -> float:
    return floats.rsqrt_quake(v)


def same_signs(a: int, b: int) -> bool:
    return lib.same_signs(a, b)


def sign(v: int) -> int:
    return lib.sign(v)


def sqrt(v: float) -> float:
    return floats.sqrt(v)
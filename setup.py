from setuptools import setup, Extension
from Cython.Build import build_ext
sources = ["fmath.pyx", "lib.pxd", "floats.pxd"]
fmath = Extension("fmath", sources, include_dirs=".", language="c++", extra_compile_args=["-O3"])
setup(cmdclass={'build_ext': build_ext}, ext_modules=[fmath])

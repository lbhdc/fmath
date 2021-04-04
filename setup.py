from setuptools import setup, Extension
from Cython.Build import build_ext
sources = ["fmath.pyx", "lib.pxd", "floats.pxd"]
modules = [Extension("fmath", sources, include_dirs=".", language="c++")]
setup(cmdclass={'build_ext': build_ext}, ext_modules=modules)

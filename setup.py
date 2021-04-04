from setuptools import setup, Extension
from Cython.Build import build_ext

sources = ["fmath.pyx", "lib.pxd", "floats.pxd"]
fmath = Extension(
    "fmath",
    sources,
    include_dirs=".",
    language="c++",
    extra_compile_args=["-O3"]
)

cmd = {"build_ext": build_ext, "language_level": 3}
setup(name="fmath", version="0.1.0", cmdclass=cmd, ext_modules=[fmath])

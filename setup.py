import distutils
from distutils.core import setup, Extension
import numpy

sources = [
    'pigen_example/vec.c',
    'pigen_example/_pywrap.c',
]

include_dirs=[numpy.get_include()]
ext=Extension(
    "pigen_example._pywrap",
    sources,
    include_dirs=include_dirs,
)


setup(
    name="pigen_example", 
    packages=['pigen_example'],
    version="0.1.0",
    ext_modules=[ext],
)

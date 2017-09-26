import numpy
from . import _pywrap

def vec_dot(v1, v2):
    """
    Dot product of two vectors
    """
    if not isinstance(v1, Vec):
        raise TypeError("v1 must be a Vec, got %s" % str(type(v1)))
    if not isinstance(v2, Vec):
        raise TypeError("v2 must be a Vec, got %s" % str(type(v2)))

    return _pywrap.vec_dot(
        v1.get_data(),
        v2.get_data(),
    )

class Vec(object):
    """
    class representing a vector
    """
    def __init__(self, a, b):
        self._data = numpy.zeros(1, dtype=_vec_dtype)
        self._data['a'] = a
        self._data['b'] = b

    def get_data(self):
        """
        get a reference to underlying numpy array
        """
        return self._data

_vec_dtype=[
    ('a','f8'),
    ('b','f8'),
]

from . import vec

def test():
    v1 = vec.Vec(1.0, 2.0)
    v2 = vec.Vec(2.0, 3.0)

    dot=vec.vec_dot(v1, v2)
    assert dot==8.0

    # expect error
    #dot=vec.vec_dot(v1, "blah")
    dot=vec._pywrap.vec_dot(v1.get_data(), "blah")

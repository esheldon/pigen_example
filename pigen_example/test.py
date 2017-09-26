from . import vec

def test():
    v1 = vec.Vec(1.0, 2.0)
    v2 = vec.Vec(2.0, 3.0)

    v1.print("v1")
    v2.print("v2")

    dot=vec.vec_dot(v1, v2)
    assert dot==8.0

    # expect error
    try:
        dot=vec.vec_dot(v1, "blah")
        print("did not get error as expected")
    except TypeError:
        print("got error as expected")

    try:
        dot=vec._pywrap.vec_dot(v1.get_data(), "blah")
        print("did not get error as expected")
    except TypeError:
        print("got error as expected")


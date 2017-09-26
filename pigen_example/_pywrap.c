/*
    This module automatically generated by pigen v0.1.0
    https://github.com/esheldon/pigen/
*/

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION

#include <Python.h>
#include "numpy/arrayobject.h" 

#include "vec.h"

PyObject* Py_pywrap_vec_dot(PyObject* self, PyObject* args)
{

    double Py_pywrap_vec_dot_retval;

    PyObject* p1_wrap;
    PyObject* p2_wrap;

    const struct vec* p1;
    const struct vec* p2;


    if (!PyArg_ParseTuple(args, (char*)"OO", 
                          &p1_wrap, &p2_wrap)) {
        return NULL;
    }

    p1 = (const struct vec*) PyArray_DATA( (PyArrayObject*) p1_wrap );
    p2 = (const struct vec*) PyArray_DATA( (PyArrayObject*) p2_wrap );

    Py_pywrap_vec_dot_retval = vec_dot( p1, p2 );

    return Py_BuildValue("d", Py_pywrap_vec_dot_retval);

}

static PyMethodDef _pywrap_py_method_defs [] = {

    {"vec_dot",(PyCFunction)Py_pywrap_vec_dot, METH_VARARGS, "dot product of two vectors"},
{NULL}

};


#if PY_MAJOR_VERSION >= 3
    static struct PyModuleDef moduledef = {
        PyModuleDef_HEAD_INIT,
        "_pywrap",      /* m_name */
        "Defines the funcs associated with module",  /* m_doc */
        -1,                  /* m_size */
        _pywrap_py_method_defs, /* m_methods */
        NULL,                /* m_reload */
        NULL,                /* m_traverse */
        NULL,                /* m_clear */
        NULL,                /* m_free */
    };
#endif

#ifndef PyMODINIT_FUNC  /* declarations for DLL import/export */
#define PyMODINIT_FUNC void
#endif
PyMODINIT_FUNC
#if PY_MAJOR_VERSION >= 3
PyInit__pywrap(void)
#else
init_pywrap(void) 
#endif
{
    PyObject* m=NULL;

#if PY_MAJOR_VERSION >= 3

    m = PyModule_Create(&moduledef);
    if (m==NULL) {
        return NULL;
    }

#else

    m = Py_InitModule3("_pywrap", _pywrap_py_method_defs, "Define funcs.");
    if (m==NULL) {
        return;
    }
#endif

    // for numpy
    import_array();

#if PY_MAJOR_VERSION >= 3
    return m;
#endif

}

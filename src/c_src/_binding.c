#include <Python.h>
#include "core.h"

static PyObject* compute_wrapper(PyObject* self, PyObject* args) {
    double a, b;

    if (!PyArg_ParseTuple(args, "dd", &a, &b)) {
        return NULL;
    }

    double result = compute_something(a, b);
    return PyFloat_FromDouble(result);
}

static PyMethodDef methods[] = {
    {"compute", compute_wrapper, METH_VARARGS, "Add two numbers"},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "_binding",
    NULL,
    -1,
    methods
};

PyMODINIT_FUNC PyInit__binding(void) {
    return PyModule_Create(&module);
}

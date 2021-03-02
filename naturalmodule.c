#define PY_SSIZE_T_CLEAN
#include <Python.h>



static PyObject *natural_is_prime(PyObject *self, PyObject *args) {
    long long num;

    if(!PyArg_ParseTuple(args, "L", &num)) {
        return NULL;
    }
    for (long i=2; i < pow(num, 0.5); ++i) {
        if (num % i == 0) {
            Py_RETURN_FALSE;
        }
    }

    Py_RETURN_TRUE;
}

static PyMethodDef NaturalMethods[] = {
        {"is_prime", natural_is_prime, METH_VARARGS, "Determines whether integer is prime"},
        {NULL, NULL, 0, NULL}
};

static struct PyModuleDef naturalmodule = {
        PyModuleDef_HEAD_INIT,
        "fuck",
        "shitty test module in c",
        -1,
        NaturalMethods
};

PyMODINIT_FUNC
PyInit_natural(void)
{
    return PyModule_Create(&naturalmodule);
}


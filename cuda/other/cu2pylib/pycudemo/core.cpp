#include "Python.h"
#include "cudalib.h"

static PyObject* pycudemo_core_add(PyObject *self, PyObject *args){
    int a,b;
        if (!PyArg_ParseTuple(args,"ii",&a,&b)) return NULL;
        return Py_BuildValue("i",pycudemo::add(a,b));
};

static PyMethodDef pycudemo_core_methods[] = {
    {"add",(PyCFunction)pycudemo_core_add,METH_VARARGS,"Add two integers"},
    {NULL,NULL,0,NULL}
};

static struct PyModuleDef module_def = {
    PyModuleDef_HEAD_INIT,
    "pycudemo.core",
    "An example project",
    -1,
    pycudemo_core_methods
};

PyMODINIT_FUNC PyInit_core(){
    return PyModule_Create(&module_def);
};
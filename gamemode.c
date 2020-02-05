#include <Python.h>
#include "gamemode_client.h"

static PyObject *request_start(PyObject *self, PyObject *noargs)
{
    return PyLong_FromLong(gamemode_request_start());
}

static PyObject *request_end(PyObject *self, PyObject *noargs)
{
    return PyLong_FromLong(gamemode_request_end());
}

static PyObject *query_status(PyObject *self, PyObject *noargs)
{
    return PyLong_FromLong(gamemode_query_status());
}

static PyMethodDef gamemode_meths[] = {
    {"request_start", request_start, METH_NOARGS, "Request the start."},
    {"request_end", request_end, METH_NOARGS, "Request the end."},
    {"query_status", query_status, METH_NOARGS, "Query the status."},
    {NULL, NULL, 0, NULL}};

static struct PyModuleDef gamemodemodule = {
    PyModuleDef_HEAD_INIT, "gamemode", NULL, -1, gamemode_meths};

PyMODINIT_FUNC
PyInit_gamemode(void)
{
    return PyModule_Create(&gamemodemodule);
}

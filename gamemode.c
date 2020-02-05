#include <Python.h>
#include "gamemode_client.h"

PyDoc_STRVAR(request_start__doc__,
             "int gamemode_request_start() - Request gamemode starts\n"
             "    0 if the request was sent successfully\n"
             "   -1 if the request failed\n");

static PyObject *request_start(PyObject *self, PyObject *noargs)
{
    return PyLong_FromLong(gamemode_request_start());
}

PyDoc_STRVAR(request_end__doc__,
             "int gamemode_request_end() - Request gamemode ends\n"
             "    0 if the request was sent successfully\n"
             "   -1 if the request failed\n");

static PyObject *request_end(PyObject *self, PyObject *noargs)
{
    return PyLong_FromLong(gamemode_request_end());
}

PyDoc_STRVAR(query_status__doc__,
             "int gamemode_query_status() - Query the current status of gamemode\n"
             "    0 if gamemode is inactive\n"
             "    1 if gamemode is active\n"
             "    2 if gamemode is active and this client is registered\n"
             "   -1 if the query failed\n");
static PyObject *query_status(PyObject *self, PyObject *noargs)
{
    return PyLong_FromLong(gamemode_query_status());
}

static PyMethodDef gamemode_meths[] = {
    {"request_start", request_start, METH_NOARGS, request_start__doc__},
    {"request_end", request_end, METH_NOARGS, request_end__doc__},
    {"query_status", query_status, METH_NOARGS, query_status__doc__},
    {NULL, NULL, 0, NULL}};

static struct PyModuleDef gamemodemodule = {
    PyModuleDef_HEAD_INIT, "gamemode", NULL, -1, gamemode_meths};

PyMODINIT_FUNC
PyInit_gamemode(void)
{
    return PyModule_Create(&gamemodemodule);
}

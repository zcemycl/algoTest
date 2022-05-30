#include <pybind11/pybind11.h>

namespace py = pybind11;

int add(int i,int j) {
    return i+j;
}

PYBIND11_MODULE(example,m) { 
    m.doc() = "pybind11 example plugin";
    py::object ver = py::cast("0.0.0");
    m.attr("version") = ver;
    m.def("add", &add, "A function that adds two numbers",
        py::arg("i"),py::arg("j")=2);
}

## Create Cuda library for Python
It uses CMake, C++, Cuda and Pybind11 to create pip package for python.

### Method 1
```
cmake -S . -B build
cmake --build build -j 2
export PYTHONPATH=$PWD/build/src:$PYTHONPATH
python -c "import gpu_library as g; print(g.add(3,4))"
```

### Method 2 (setup.py not working)
- There could be a method combining torch cuda extension and pybind11 to create setup script.

### References
- https://pytorch.org/tutorials/advanced/cpp_extension.html#conclusion
- https://github.com/pytorch/extension-cpp
- https://pytorch.org/get-started/previous-versions/ (cu101)
- https://stackoverflow.com/questions/65710713/importerror-libc10-so-cannot-open-shared-object-file-no-such-file-or-director
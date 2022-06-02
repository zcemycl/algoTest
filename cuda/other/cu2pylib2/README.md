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
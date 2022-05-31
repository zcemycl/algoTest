# Examples for C++ Library importable by Python
### Method 1
1. Compile in src folder 
```
cd src
c++ -O3 -Wall -shared -std=c++11 -fPIC $(python3 -m pybind11 --includes) example.cpp -o example$(python3-config --extension-suffix)
```
2. Try it in python, 
```
python
####
import example
example.add(1,23)
example.add(i=100,j=222)
example.add(1)
example.version
####
```

### Method 2 (required `pip install pybind11[global]`)
1. Create `CMakeLists.txt` in parent directory of src. 
2. Compile the library via, 
```
cmake -S . -B build
cmake --build build -j 2
cmake --install build # create example.cpython-37m-x86_64-linux-gnu.so
```
3. Try it in python,
```
import build.example as e
e.add(1,2)
```
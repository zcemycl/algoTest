# Examples for C++ Library importable by Python
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
# How to run?
1. Git clone googletest library. 
```
mkdir -p lib/googletest 
git clone git clone https://github.com/google/googletest/ lib/googletest
```
2. Cmake.
```
cmake -B build -DCMAKE_BUILD_TYPE=Release
```
3. Makefile.
```
cd build 
make all
```
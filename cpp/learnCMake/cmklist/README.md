# Roles of CMakeLists.txt
It is more or less a package management tool before creating makefile. 

## Steps
1. Create `main.cpp` and write whatever you want.
2. Create `CMakeLists.txt` with following format,
```
cmake_minimum_required(VERSION 3.14.0)

project(CMKLS)

add_executable(${PROJECT_NAME} main.cpp)
```
3. Run `CMakeLists.txt`. 
```
mkdir -p out/build
cmake -S . -B out/build
```
4. Run `Makefile`.
```
cd out/build
make
# or 
make -C out/build
```
5. Run executable.
```
./CMKLS
# or
./out/build/CMKLS
```
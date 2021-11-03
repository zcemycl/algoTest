# Add File
1. Create another file `adder.cpp` to link to main. 
```
float add(float a, float b){
    return a+b;
}
```
2. Include header of the function in main.
```
...
float add(float a,float b);
...
```
3. Include the new file in executable.
```
add_executable(${PROJECT_NAME} main.cpp adder.cpp)
```

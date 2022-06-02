### How to run?
- In your root folder, run via,
    ```
    cmake -S . -B build
    cmake --build build -j 2
    ./build/tests/tst_cudalib 
    pip install .
    cd ..
    python -c "import pycudemo as p; print(p.add(3,4))"
    pip uninstall pycudemo -y
    ```
- Don't run import in root folder, since it will cause core error as follows,
    ```
    ModuleNotFoundError: No module named 'pycudemo.core'
    ```
- Need to downgrade the gcc version, if the following error is shown,
    ```
    CMake: unsupported GNU version -- gcc versions later than 8 are not supported

    ### Solution
    sudo apt remove gcc
    sudo apt-get install gcc-7 g++-7 -y
    sudo ln -s /usr/bin/gcc-7 /usr/bin/gcc
    sudo ln -s /usr/bin/g++-7 /usr/bin/g++
    sudo ln -s /usr/bin/gcc-7 /usr/bin/cc
    sudo ln -s /usr/bin/g++-7 /usr/bin/c++
    gcc --version
    ```

### References
- https://stackoverflow.com/questions/65605972/cmake-unsupported-gnu-version-gcc-versions-later-than-8-are-not-supported
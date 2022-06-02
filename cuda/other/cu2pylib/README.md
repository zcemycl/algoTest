## Create Cuda library for Python
It uses CMake, C++ and Cuda to create pip package for python.

### How to run?
- In your root folder, run via,
    ```
    cmake -S . -B build
    cmake --build build -j 2
    ./build/tests/tst_cudalib 

    ### for every new terminal/ put them in .bashrc
    export LIBRARY_PATH=/home/yui/Documents/proj/github/algoTest/cuda/other/cu2pylib/build/src:$LIBRARY_PATH
    export LD_LIBRARY_PATH=/home/yui/Documents/proj/github/algoTest/cuda/other/cu2pylib/build/src:$LD_LIBRARY_PATH
    ###

    env | grep LIBRARY_PATH # check path is set up
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
- This error arises from LD_LIBRARY_PATH and LIBRARY_PATH, 
    ```
    ImportError: libcudalib.so: cannot open shared object file: No such file or directory
    ```

### References
- https://stackoverflow.com/questions/65605972/cmake-unsupported-gnu-version-gcc-versions-later-than-8-are-not-supported
- http://alanpryorjr.com/2017-07-12-pipcudemo/
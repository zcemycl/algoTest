#!/bin/bash

rm -rf build/
cmake -B build -DCMAKE_BUILD_TYPE=Releases 
cd build/
make all -j$(nproc)
./tst/example_tst
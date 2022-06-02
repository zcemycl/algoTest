#include <cassert>
#include <iostream>
#include "cudalib.h"

int main() {
    assert(pycudemo::add(1,2)==3);
    std::cout<<"1+2=3"<<std::endl;
    std::cout << "Test passed." << std::endl;
}
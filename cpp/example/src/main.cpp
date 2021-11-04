#include <iostream>
#include "Formula.h"
#include <Adder/adder.h>
#include <Sample/sample.h>

using namespace std;

int main() {
    cout << "Bla: " << Formula::bla(2) << endl;
    cout << add(62.2f,12.2f) << endl;
    cout << Solution::soln2(1,2) << endl;
    return 0;
}

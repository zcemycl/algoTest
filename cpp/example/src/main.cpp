#include <iostream>
#include "Formula.h"
#include <Adder/adder.h>
#include <Sample/sample.h>

using namespace std;

int main() {
    cout << "Bla: " << Formula::bla(2) << endl;
    cout << add(62.2f,12.2f) << endl;
    Solution s1(1,2);
    cout<< s1.soln1() << endl;
    cout << Solution::soln2(1,2) << endl;
    return 0;
}

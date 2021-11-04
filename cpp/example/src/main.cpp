#include <iostream>
#include "Formula.h"
#include <Adder/adder.h>
#include <Sample/sample.h>
#include <Sample1/sample1.h>

using namespace std;

int main() {
    cout << "Bla: " << Formula::bla(2) << endl;
    cout << add(62.2f,12.2f) << endl;
    printf("========== Sample =========\n");
    Solution s1(1,2);
    cout<< s1.soln1() << endl;
    cout << Solution::soln2(1,2) << endl;

    printf("========== Sample 1 =========\n");
    Solution1 s2(1,2);
    cout<< s2.soln1() << endl;
    cout << Solution1::soln2(1,2) << endl;

    return 0;
}

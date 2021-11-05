#include <iostream>
#include "Formula.h"
#include <Adder/adder.h>
#include <Sample/sample.h>
#include <Sample1/sample1.h>
#include <TwoSum/twoSum.h>
#include <map>

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

    printf("========== Two Sum ==========\n");
    vector<int> inp3{1,2,4};
    int tar3 = 6;
    vector<int> out3 = twoSum::naive(inp3,tar3);
    for (int x: out3){
        cout << x << " ";
    }
    cout<<endl;

    map<int,int> mapTest;
    mapTest[100] = 1;
    mapTest[2] = 50;
    cout<<mapTest[100]<<endl;
    cout<<mapTest.find(0)->second<<endl;
    cout<<mapTest.find(2)->second<<endl;
    cout<<(mapTest.find(0)!=mapTest.end())<<endl;
    cout<<(mapTest.find(0)->second)<<endl;
    cout<<(mapTest.find(2)!=mapTest.end())<<endl;
    cout<<(mapTest.find(2)->second)<<endl;

    return 0;
}

#include "sample.h"

Solution::Solution(int a,int b){
    int1 = a;
    int2 = b;
}

int Solution::soln1(){
    return int1+int2;
}

int Solution::soln2(int a,int b){
    return a+b;
}
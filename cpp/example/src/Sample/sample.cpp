#include "sample.h"

Solution::Solution(int int1,int int2){
    this->int1 = int1;
    this->int2 = int2;
}

int Solution::soln1(){
    return this->int1+this->int2;
}

int Solution::soln2(int a,int b){
    return a+b;
}
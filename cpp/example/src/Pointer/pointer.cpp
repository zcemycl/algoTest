#include "pointer.h"

void pointer::returnInt_callByVal(int n){
    n += 1;
};

void pointer::returnInt_callByRef(int* ptrInt){
    *ptrInt += 1;
};

int pointer::returnInt_callByVal2(int n){
    n += 1;
    return n;
};

tuple<int,int,int> pointer::returnInt3(int n){
    return tuple<int,int,int> {n*2,n*5,n*11};
}

intstring pointer::returnIntString(){
    intstring data;
    data.n = 51;
    data.str = "Hello";
    return data;
}
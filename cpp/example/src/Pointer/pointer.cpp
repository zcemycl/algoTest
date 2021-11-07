#include "pointer.h"
#include <iostream>
#include <typeinfo>

using namespace std;

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

ListNode* pointer::returnListNode(string num){
    ListNode* ln = new ListNode(1);
    cout<<(long long)ln<<endl;
    for (auto c: num){
        cout<<c<<endl;
        int tmp = (int) c - 48;
        cout<<tmp<<endl;
        cout<<typeid(c).name()<<endl;

    };
    return ln;
}

ListNode* pointer::returnListNode2(string num){
    ListNode ln(1);
    ListNode* ptr = &ln;
    cout<<"Real value: "<<ptr->val<<endl;
    cout<<(long long)ptr<<endl;
    return ptr;
}
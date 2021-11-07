#include "addTwoNumbers.h"
#include <iostream>

using namespace std;

ListNode* addTwoNumbers::listNode_fromString(string num){
    ListNode* result;
    ListNode** tmp = &result;
    // cout<<"Address of result: "<<(long long)tmp<<endl;
    // *tmp = new ListNode(2);
    // cout<<"Address of result: "<<(long long)tmp<<endl;
    // cout<<"Address of result: "<<(long long)&((*tmp)->next)<<endl;
    // tmp = &(result->next);
    // *tmp = new ListNode(1);
    // tmp = &(result->next->next);
    // *tmp = new ListNode(2);
    
    for (auto c:num){
        int tmpnum = (int) c - 48;
        *tmp = new ListNode(tmpnum);
        tmp = &((*tmp)->next);
    }
    return result;
}


ListNode* addTwoNumbers::listNode_fromStringReverse(string num){
    int i = 0;
    ListNode* result;
    ListNode* prev;
    for (auto c:num){
        int tmpnum = (int) c - 48;
        if (i==0){
            result = new ListNode(tmpnum);
        } else{
            result = new ListNode(tmpnum,prev);
        }
        prev = result;
        i+=1;
    }
    return result;
}

ListNode* addTwoNumbers::naive(ListNode* l1, ListNode* l2){
    if (l1!=nullptr && l2==nullptr){
        return l1;
    }
}
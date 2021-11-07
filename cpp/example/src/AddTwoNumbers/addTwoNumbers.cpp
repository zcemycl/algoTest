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

string* addTwoNumbers::printListNode(ListNode* ln){
    string* st =  new string("");
    ListNode** tmpln = &ln;
    while (*tmpln != nullptr){
        int tmp = (*tmpln)->val;
        *st = to_string(tmp)+*st;
        tmpln = &((*tmpln)->next);
    }
    return st;
}

ListNode* addTwoNumbers::naive(ListNode* l1, ListNode* l2){
    int s = 0, val1 = 0, val2 = 0, r = 0;
    ListNode* l3 = new ListNode();
    ListNode** tmp = &l3;
    while (l1!=nullptr or l2!=nullptr or s){
        val1 = l1!=nullptr?l1->val:0;
        val2 = l2!=nullptr?l2->val:0;
        r = (val1+val2+s)%10;
        s = (val1+val2+s)/10;
        (*tmp)->next = new ListNode(r);
        tmp = &((*tmp)->next);
        l1 = l1!=nullptr?l1->next:nullptr;
        l2 = l2!=nullptr?l2->next:nullptr;
    }
    return l3->next;
}
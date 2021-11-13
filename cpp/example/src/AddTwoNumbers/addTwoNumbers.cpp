#include "addTwoNumbers.h"
#include <iostream>

using namespace std;

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
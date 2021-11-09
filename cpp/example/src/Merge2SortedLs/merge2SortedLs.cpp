#include "merge2SortedLs.h"

ListNode* merge2SortedLs::recursive(ListNode* l1,ListNode* l2){
    if (l1==nullptr && l2==nullptr) return nullptr;
    if (l1==nullptr){
        return l2;
    } else if (l2==nullptr){
        return l1;
    } else if (l1->val<l2->val){
        l1->next = recursive(l1->next,l2);
    } else {
        l2->next = recursive(l1,l2->next);
    }
    ListNode* l3 = nullptr;
    return l3;
}

ListNode* merge2SortedLs::listNode_fromString(string num){
    ListNode* result = nullptr;
    ListNode** tmp = &result;
    for (auto c:num){
        int tmpnum = (int) c - 48;
        *tmp = new ListNode(tmpnum);
        tmp = &((*tmp)->next);
    }
    return result;
}

string* merge2SortedLs::printListNode(ListNode* ln){
    string* st =  new string("");
    ListNode** tmpln = &ln;
    while (*tmpln != nullptr){
        int tmp = (*tmpln)->val;
        *st = *st+to_string(tmp);
        tmpln = &((*tmpln)->next);
    }
    return st;
}
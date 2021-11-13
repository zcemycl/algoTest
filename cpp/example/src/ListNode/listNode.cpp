#include "listNode.h"

string ListNode::strForm(int val,string s,string mode){
    if (mode=="reverse")
        return to_string(val)+s;
    else return s+to_string(val);
}

string* ListNode::printListNode(ListNode* l,string mode){
    string* printStr = new string("");
    while (l != nullptr){
        int tmp = l->val;
        *printStr = ListNode::strForm(tmp,*printStr,mode);
        l = l->next;
    }
    return printStr;
}

ListNode* ListNode::listNode_fromStr(string s){
    ListNode* result = new ListNode();
    ListNode** tmp = &result;
    for (char c:s){
        int tmpint = c-'0';
        (*tmp)->next = new ListNode(tmpint);
        tmp = &((*tmp)->next);
    }
    return result->next;
}

ListNode* ListNode::listNode_fromStrReverse(string s){
    int i=0;
    ListNode* result;
    ListNode* prev;
    for (char c:s){
        int tmp = c-'0';
        if (i==0) {result = new ListNode(tmp);}
        else {result = new ListNode(tmp,prev);}
        prev = result;
        i+=1;
    }
    return result;
}
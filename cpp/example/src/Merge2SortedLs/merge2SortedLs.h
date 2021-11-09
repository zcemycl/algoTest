#include "ListNode/listNode.h"
#include <iostream>
#include <string>

using namespace std;

class merge2SortedLs{
    public: 
        static ListNode* recursive(ListNode* l1,ListNode* l2);
        static ListNode* listNode_fromString(string num);
        static string* printListNode(ListNode* ln);
};
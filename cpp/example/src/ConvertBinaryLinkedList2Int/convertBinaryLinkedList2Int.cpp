#include "convertBinaryLinkedList2Int.h"

int convertBinaryLinkedList2Int::naive(ListNode* l){
    int result = 0;
    while (l!=nullptr){
        result = result*2+l->val;
        l = l->next;
    }
    return result;
}

#include <ListNode/listNode.h>
#include <string>

using namespace std;

class addTwoNumbers{
    public:
        static ListNode* listNode_fromString(string num);
        static ListNode* listNode_fromStringReverse(string num);
        static ListNode* naive(ListNode* l1, ListNode* l2);
};
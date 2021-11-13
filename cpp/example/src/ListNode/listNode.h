#include <string>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr) {};
    ListNode(int x): val(x), next(nullptr) {};
    ListNode(int x, ListNode *next): val(x), next(next) {};
    static string strForm(int val,string s,string mode="normal");
    static string* printListNode(ListNode* l, string mode="normal");
    static ListNode* listNode_fromStr(string s);
    static ListNode* listNode_fromStrReverse(string s);
};
#include <string>
#include <tuple>
#include "ListNode/listNode.h"

using namespace std;

struct intstring{
    int n;
    string str;
};

class pointer{
    public:
        static void returnInt_callByVal(int n);
        static void returnInt_callByRef(int* ptrInt);
        static int returnInt_callByVal2(int n);
        static tuple<int,int,int> returnInt3(int n); 
        static intstring returnIntString();
        static ListNode* returnListNode(string num);
        // static ListNode* returnListNode2(string num);
};
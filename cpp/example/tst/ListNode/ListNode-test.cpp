#include <gtest/gtest.h>
#include <ListNode/listNode.h>

using namespace std;

TEST(listNodeTest, emptyconstructor){
    ListNode ln;
    int result = ln.val;
    ListNode *result2 = ln.next;
    EXPECT_EQ(result,0);
    EXPECT_EQ(result2,nullptr);
}

TEST(listNodeTest, valconstructor){
    ListNode ln = 1;
    int result = ln.val;
    ListNode *result2 = ln.next;
    EXPECT_EQ(result,1);
    EXPECT_EQ(result2,nullptr);
}

TEST(listNodeTest, wholeconstructor){
    ListNode ln(1);
    ListNode* ptr = &ln;
    ptr->next = new ListNode(2);
    int result = ln.val;
    int result2 = ptr->next->val;
    EXPECT_EQ(result,1);
    EXPECT_EQ(result2,2);
}

TEST(listNodeTest, testPrintListNode){
    ListNode* ln = new ListNode(1);
    ln->next = new ListNode(2);
    string* s = ListNode::printListNode(ln);
    EXPECT_EQ(*s,"12");
}

TEST(listNodeTest, testPrintListNodeReverse){
    ListNode* ln = new ListNode(1);
    ln->next = new ListNode(2);
    string* s = ListNode::printListNode(ln,"reverse");
    EXPECT_EQ(*s,"21");
}

TEST(listNodeTest, testlistNode_fromStr){
    ListNode* ln = ListNode::listNode_fromStr("1237");
    string* s = ListNode::printListNode(ln);
    EXPECT_EQ(*s,"1237");
}

TEST(listNodeTest, testlistNode_fromStrReverse){
    ListNode* ln = ListNode::listNode_fromStrReverse("1237");
    string* s = ListNode::printListNode(ln,"reverse");
    EXPECT_EQ(*s,"1237");
}
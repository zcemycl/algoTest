#include "gtest/gtest.h"
#include "AddTwoNumbers/addTwoNumbers.h"

TEST(AddTwoNumbersTest,test_naive_9_9){
    string n1 = "9", n2 = "9", n3 = "18";
    ListNode* l1 = ListNode::listNode_fromStrReverse(n1);
    ListNode* l2 = ListNode::listNode_fromStrReverse(n2);
    ListNode* l3 = addTwoNumbers::naive(l1,l2);
    string* result = ListNode::printListNode(l3,"reverse");
    // cout<<*result<<endl;
    EXPECT_EQ(*result,n3);
    delete l1,l2,l3,result;
}

TEST(AddTwoNumbersTest,test_naive_1546_124){
    string n1 = "1546", n2 = "124", n3 = "1670";
    ListNode* l1 = ListNode::listNode_fromStrReverse(n1);
    ListNode* l2 = ListNode::listNode_fromStrReverse(n2);
    ListNode* l3 = addTwoNumbers::naive(l1,l2);
    string* result = ListNode::printListNode(l3,"reverse");
    // cout<<*result<<endl;
    EXPECT_EQ(*result,n3);
    delete l1,l2,l3,result;
}

TEST(AddTwoNumbersTest,test_naive_2000_20){
    string n1 = "2000", n2 = "20", n3 = "2020";
    ListNode* l1 = ListNode::listNode_fromStrReverse(n1);
    ListNode* l2 = ListNode::listNode_fromStrReverse(n2);
    ListNode* l3 = addTwoNumbers::naive(l1,l2);
    string* result = ListNode::printListNode(l3,"reverse");
    // cout<<*result<<endl;
    EXPECT_EQ(*result,n3);
    delete l1,l2,l3,result;
}
#include "gtest/gtest.h"
#include "AddTwoNumbers/addTwoNumbers.h"

TEST(AddTwoNumbersTest,fromString){
    string n = "120";
    ListNode* result = addTwoNumbers::listNode_fromString(n);
    EXPECT_EQ(result->val,1);
    EXPECT_EQ(result->next->val,2);
    EXPECT_EQ(result->next->next->val,0);
    delete result;
}

TEST(AddTwoNumbersTest,fromStringReverse){
    string n = "120";
    ListNode* result = addTwoNumbers::listNode_fromStringReverse(n);
    EXPECT_EQ(result->val,0);
    EXPECT_EQ(result->next->val,2);
    EXPECT_EQ(result->next->next->val,1);
    delete result;
}

TEST(AddTwoNumbersTest,str2listnode2str){
    string n = "120";
    ListNode* result = addTwoNumbers::listNode_fromStringReverse(n);
    string* n2 = addTwoNumbers::printListNode(result);
    EXPECT_EQ(n,*n2);
    delete result,n2;
}

TEST(AddTwoNumbersTest,SimpleReturn){
    ListNode l1(3);
    ListNode* l1ptr = &l1;
    ListNode* l2 = nullptr;
    ListNode* l3 = addTwoNumbers::naive(l1ptr,l2);
    int result = l3->val;
    EXPECT_EQ(result,3);
    delete l3;
}

TEST(AddTwoNumbersTest,test_naive_9_9){
    string n1 = "9", n2 = "9", n3 = "18";
    ListNode* l1 = addTwoNumbers::listNode_fromStringReverse(n1);
    ListNode* l2 = addTwoNumbers::listNode_fromStringReverse(n2);
    ListNode* l3 = addTwoNumbers::naive(l1,l2);
    string* result = addTwoNumbers::printListNode(l3);
    // cout<<*result<<endl;
    EXPECT_EQ(*result,n3);
    delete l1,l2,l3,result;
}

TEST(AddTwoNumbersTest,test_naive_1546_124){
    string n1 = "1546", n2 = "124", n3 = "1670";
    ListNode* l1 = addTwoNumbers::listNode_fromStringReverse(n1);
    ListNode* l2 = addTwoNumbers::listNode_fromStringReverse(n2);
    ListNode* l3 = addTwoNumbers::naive(l1,l2);
    string* result = addTwoNumbers::printListNode(l3);
    // cout<<*result<<endl;
    EXPECT_EQ(*result,n3);
    delete l1,l2,l3,result;
}

TEST(AddTwoNumbersTest,test_naive_2000_20){
    string n1 = "2000", n2 = "20", n3 = "2020";
    ListNode* l1 = addTwoNumbers::listNode_fromStringReverse(n1);
    ListNode* l2 = addTwoNumbers::listNode_fromStringReverse(n2);
    ListNode* l3 = addTwoNumbers::naive(l1,l2);
    string* result = addTwoNumbers::printListNode(l3);
    // cout<<*result<<endl;
    EXPECT_EQ(*result,n3);
    delete l1,l2,l3,result;
}
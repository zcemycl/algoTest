#include "gtest/gtest.h"
#include "AddTwoNumbers/addTwoNumbers.h"

TEST(AddTwoNumbersTest,fromString){
    string n = "120";
    ListNode* result = addTwoNumbers::listNode_fromString(n);
    cout<<result->val<<endl;
    cout<<result->next->val<<endl;
    cout<<result->next->next->val<<endl;
}

TEST(AddTwoNumbersTest,fromStringReverse){
    string n = "120";
    ListNode* result = addTwoNumbers::listNode_fromStringReverse(n);
    cout<<result->val<<endl;
    cout<<result->next->val<<endl;
    cout<<result->next->next->val<<endl;
}

TEST(AddTwoNumbersTest,SimpleReturn){
    ListNode l1(3);
    ListNode* l1ptr = &l1;
    ListNode* l2 = nullptr;
    ListNode* l3 = addTwoNumbers::naive(l1ptr,l2);
    int result = l3->val;
    EXPECT_EQ(result,3);
}
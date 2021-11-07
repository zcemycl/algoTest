#include "gtest/gtest.h"
#include "Pointer/pointer.h"

using namespace std;

TEST(pointerTrial,deference){
    int a = 52;
    int* p = &a;
    EXPECT_EQ(*p,a);
}

TEST(pointerTrial,returnInt_callByVal){
    int a = 52;
    pointer::returnInt_callByVal(a);
    EXPECT_EQ(a,52);
}

TEST(pointerTrial,returnInt_callByRef){
    int a = 52;
    int* p = &a;
    pointer::returnInt_callByRef(p);
    EXPECT_EQ(a,53);
}

TEST(pointerTrial,returnInt_callByVal2){
    int a = 52;
    int result = pointer::returnInt_callByVal2(a);
    EXPECT_EQ(result,53);
}

TEST(pointerTrial,returnInt3){
    int a = 52;
    tuple<int,int,int> result = pointer::returnInt3(a);
    EXPECT_EQ(get<0>(result),a*2);
    EXPECT_EQ(get<1>(result),a*5);
    EXPECT_EQ(get<2>(result),a*11);
}

TEST(pointerTrial,returnIntString){
    intstring result = pointer::returnIntString();
    EXPECT_EQ(result.n,51);
    EXPECT_EQ(result.str,"Hello");
}

TEST(pointerTrial,returnListNode_HeapGood){
    string n = "12";
    ListNode* result = pointer::returnListNode(n);
    ListNode* result2 = pointer::returnListNode(n);
    cout<<(long long)result<<endl;
    cout<<result->val<<endl;
    EXPECT_EQ(result->val,1);
    EXPECT_EQ((*result).val,1);
    cout<<(long long)result2<<endl;
    EXPECT_EQ(result2->val,1);
    EXPECT_EQ((*result2).val,1);
    delete result,result2;
}

TEST(pointerTrial,returnListNode2_StackBad){
    string n = "12";
    ListNode* result = pointer::returnListNode2(n);
    ListNode* result2 = pointer::returnListNode2(n);
    cout<<(long long)result<<endl;
    cout<<"Trash value: "<<result->val<<endl;
    cout<<(long long)result2<<endl;
    cout<<"Trash value: "<<result2->val<<endl;
    printf("----- Bad expected result ------\n");
}

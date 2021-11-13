#include "ConvertBinaryLinkedList2Int/convertBinaryLinkedList2Int.h"
#include "gtest/gtest.h"

using namespace std;

class convertBinaryLinkedList2Int_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<string,int>>{
};

TEST_P(convertBinaryLinkedList2Int_MultipleParamsTests, CheckAns){
    string s = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ListNode* l = ListNode::listNode_fromStr(s);
    ASSERT_EQ(expected,convertBinaryLinkedList2Int::naive(l));
};

INSTANTIATE_TEST_CASE_P(
    ConvertBinaryLinkedList2IntTests,
    convertBinaryLinkedList2Int_MultipleParamsTests,
    ::testing::Values(
        make_tuple("101",5),make_tuple("0",0),
        make_tuple("10",2),make_tuple("100100111000000",18880)
    )
);

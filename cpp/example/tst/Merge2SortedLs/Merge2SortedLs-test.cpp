#include "gtest/gtest.h"
#include "Merge2SortedLs/merge2SortedLs.h"
#include <string>
#include <iostream>

using namespace std;

class merge2SortedLs_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<string,string,string>>{
};

TEST_P(merge2SortedLs_MultipleParamsTests, CheckAns){
    string s0 = get<0>(GetParam());
    string s1 = get<1>(GetParam());
    ListNode* l0 = merge2SortedLs::listNode_fromString(s0);
    ListNode* l1 = merge2SortedLs::listNode_fromString(s1);
    string expected = get<2>(GetParam());
    ListNode* ansLs = merge2SortedLs::recursive(l0,l1);
    string* ans = merge2SortedLs::printListNode(ansLs);
    ASSERT_EQ(expected,*ans);
};

INSTANTIATE_TEST_CASE_P(
    Merge2SortedLsSubStringTests,
    merge2SortedLs_MultipleParamsTests,
    ::testing::Values(
        make_tuple("124","134","112344")
        // make_tuple("","",""),
        // make_tuple("","1","1")
    )
);
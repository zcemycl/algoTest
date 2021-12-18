#include "RmNthNodeFromEndOfLinkedList/rmNthNodeFromEndOfLinkedList.h"
#include "gtest/gtest.h"

using namespace std;

class rmNthNodeFromEndOfLinkedList_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(rmNthNodeFromEndOfLinkedList_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,rmNthNodeFromEndOfLinkedList::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    RmNthNodeFromEndOfLinkedListTests,
    rmNthNodeFromEndOfLinkedList_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

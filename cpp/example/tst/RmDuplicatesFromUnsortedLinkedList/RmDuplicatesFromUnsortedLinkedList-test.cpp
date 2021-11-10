#include "RmDuplicatesFromUnsortedLinkedList/rmDuplicatesFromUnsortedLinkedList.h"
#include "gtest/gtest.h"

using namespace std;

class rmDuplicatesFromUnsortedLinkedList_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(rmDuplicatesFromUnsortedLinkedList_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,rmDuplicatesFromUnsortedLinkedList::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    RmDuplicatesFromUnsortedLinkedListTests,
    rmDuplicatesFromUnsortedLinkedList_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

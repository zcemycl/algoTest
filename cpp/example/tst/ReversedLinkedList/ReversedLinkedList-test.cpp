#include "ReversedLinkedList/reversedLinkedList.h"
#include "gtest/gtest.h"

using namespace std;

class reversedLinkedList_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(reversedLinkedList_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,reversedLinkedList::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ReversedLinkedListTests,
    reversedLinkedList_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

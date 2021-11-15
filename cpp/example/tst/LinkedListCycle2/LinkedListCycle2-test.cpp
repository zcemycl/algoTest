#include "LinkedListCycle2/linkedListCycle2.h"
#include "gtest/gtest.h"

using namespace std;

class linkedListCycle2_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(linkedListCycle2_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,linkedListCycle2::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    LinkedListCycle2Tests,
    linkedListCycle2_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

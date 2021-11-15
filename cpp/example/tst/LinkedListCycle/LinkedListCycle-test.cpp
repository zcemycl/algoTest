#include "LinkedListCycle/linkedListCycle.h"
#include "gtest/gtest.h"

using namespace std;

class linkedListCycle_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(linkedListCycle_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,linkedListCycle::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    LinkedListCycleTests,
    linkedListCycle_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

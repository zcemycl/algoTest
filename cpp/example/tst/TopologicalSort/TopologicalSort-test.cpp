#include "TopologicalSort/topologicalSort.h"
#include "gtest/gtest.h"

using namespace std;

class topologicalSort_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(topologicalSort_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,topologicalSort::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    TopologicalSortTests,
    topologicalSort_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

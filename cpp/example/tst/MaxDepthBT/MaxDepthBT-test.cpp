#include "MaxDepthBT/maxDepthBT.h"
#include "gtest/gtest.h"

using namespace std;

class maxDepthBT_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(maxDepthBT_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,maxDepthBT::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MaxDepthBTTests,
    maxDepthBT_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

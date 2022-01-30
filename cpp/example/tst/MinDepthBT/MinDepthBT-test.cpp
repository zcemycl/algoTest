#include "MinDepthBT/minDepthBT.h"
#include "gtest/gtest.h"

using namespace std;

class minDepthBT_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(minDepthBT_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,minDepthBT::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MinDepthBTTests,
    minDepthBT_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

#include "StronglyConnectedComponents/stronglyConnectedComponents.h"
#include "gtest/gtest.h"

using namespace std;

class stronglyConnectedComponents_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(stronglyConnectedComponents_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,stronglyConnectedComponents::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    StronglyConnectedComponentsTests,
    stronglyConnectedComponents_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

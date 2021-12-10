#include "MaxAreaIsland/maxAreaIsland.h"
#include "gtest/gtest.h"

using namespace std;

class maxAreaIsland_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(maxAreaIsland_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,maxAreaIsland::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MaxAreaIslandTests,
    maxAreaIsland_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

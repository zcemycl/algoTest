#include "PacificAtlanticWaterFlow/pacificAtlanticWaterFlow.h"
#include "gtest/gtest.h"

using namespace std;

class pacificAtlanticWaterFlow_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(pacificAtlanticWaterFlow_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,pacificAtlanticWaterFlow::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    PacificAtlanticWaterFlowTests,
    pacificAtlanticWaterFlow_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

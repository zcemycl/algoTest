#include "AvgOfLevelsBT/avgOfLevelsBT.h"
#include "gtest/gtest.h"

using namespace std;

class avgOfLevelsBT_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(avgOfLevelsBT_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,avgOfLevelsBT::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    AvgOfLevelsBTTests,
    avgOfLevelsBT_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

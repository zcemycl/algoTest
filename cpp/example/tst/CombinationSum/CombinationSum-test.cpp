#include "CombinationSum/combinationSum.h"
#include "gtest/gtest.h"

using namespace std;

class combinationSum_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(combinationSum_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,combinationSum::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    CombinationSumTests,
    combinationSum_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

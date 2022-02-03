#include "CombinationSum2/combinationSum2.h"
#include "gtest/gtest.h"

using namespace std;

class combinationSum2_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(combinationSum2_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,combinationSum2::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    CombinationSum2Tests,
    combinationSum2_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

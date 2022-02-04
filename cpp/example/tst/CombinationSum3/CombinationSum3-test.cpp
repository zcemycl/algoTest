#include "CombinationSum3/combinationSum3.h"
#include "gtest/gtest.h"

using namespace std;

class combinationSum3_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(combinationSum3_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,combinationSum3::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    CombinationSum3Tests,
    combinationSum3_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

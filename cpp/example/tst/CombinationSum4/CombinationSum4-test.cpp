#include "CombinationSum4/combinationSum4.h"
#include "gtest/gtest.h"

using namespace std;

class combinationSum4_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(combinationSum4_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,combinationSum4::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    CombinationSum4Tests,
    combinationSum4_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

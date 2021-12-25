#include "PalindromicSubstrs/palindromicSubstrs.h"
#include "gtest/gtest.h"

using namespace std;

class palindromicSubstrs_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(palindromicSubstrs_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,palindromicSubstrs::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    PalindromicSubstrsTests,
    palindromicSubstrs_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

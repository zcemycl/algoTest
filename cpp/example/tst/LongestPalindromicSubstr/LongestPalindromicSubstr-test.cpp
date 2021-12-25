#include "LongestPalindromicSubstr/longestPalindromicSubstr.h"
#include "gtest/gtest.h"

using namespace std;

class longestPalindromicSubstr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(longestPalindromicSubstr_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,longestPalindromicSubstr::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    LongestPalindromicSubstrTests,
    longestPalindromicSubstr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

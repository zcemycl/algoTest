#include "LongestPalindromicSubstr/longestPalindromicSubstr.h"
#include "gtest/gtest.h"

using namespace std;

class longestPalindromicSubstr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<string,string>>{
};

TEST_P(longestPalindromicSubstr_MultipleParamsTests, CheckAns){
    string s = get<0>(GetParam());
    string expected = get<1>(GetParam());
    longestPalindromicSubstr soln;
    string res = soln.naive(s);
    ASSERT_EQ(expected,res);
};

INSTANTIATE_TEST_CASE_P(
    LongestPalindromicSubstrTests,
    longestPalindromicSubstr_MultipleParamsTests,
    ::testing::Values(
        make_tuple("babad","bab"),
        make_tuple("cbbd","bb")
    )
);

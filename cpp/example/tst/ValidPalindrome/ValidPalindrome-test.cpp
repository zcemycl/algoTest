#include "ValidPalindrome/validPalindrome.h"
#include "gtest/gtest.h"

using namespace std;

class validPalindrome_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(validPalindrome_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,validPalindrome::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ValidPalindromeTests,
    validPalindrome_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

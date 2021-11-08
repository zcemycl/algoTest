#include "IsPalindrome/isPalindrome.h"
#include "gtest/gtest.h"

using namespace std;

class isPalindrome_MultipleParamsTests : public ::testing::TestWithParam<tuple<int,bool>>{
};

TEST_P(isPalindrome_MultipleParamsTests, CheckAns){
    int x = get<0>(GetParam());
    bool expected = get<1>(GetParam());
    ASSERT_EQ(expected,isPalindrome::naive(x));
};

INSTANTIATE_TEST_CASE_P(
    IsPalindromeTests,
    isPalindrome_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,true), 
        make_tuple(-121,false),
        make_tuple(121,true),
        make_tuple(10,false)
    )
);

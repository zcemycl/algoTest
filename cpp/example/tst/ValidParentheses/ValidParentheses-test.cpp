#include "ValidParentheses/validParentheses.h"
#include "gtest/gtest.h"

using namespace std;

class validParentheses_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(validParentheses_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,validParentheses::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ValidParenthesesTests,
    validParentheses_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

#include "ValidParentheses/validParentheses.h"
#include "gtest/gtest.h"
#include <string>

using namespace std;

class validParentheses_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<string,bool>>{
};

TEST_P(validParentheses_MultipleParamsTests, CheckAns){
    string s = get<0>(GetParam());
    bool expected = get<1>(GetParam());
    ASSERT_EQ(expected,validParentheses::naive(s));
};

INSTANTIATE_TEST_CASE_P(
    ValidParenthesesTests,
    validParentheses_MultipleParamsTests,
    ::testing::Values(
        make_tuple("()",true),
        make_tuple("()[]{}",true),
        make_tuple("([)]",false),
        make_tuple("({})",true),
        make_tuple("",true)
    )
);

#include "LetterCombinationsOfPhoneNo/letterCombinationsOfPhoneNo.h"
#include "gtest/gtest.h"

using namespace std;

class letterCombinationsOfPhoneNo_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(letterCombinationsOfPhoneNo_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,letterCombinationsOfPhoneNo::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    LetterCombinationsOfPhoneNoTests,
    letterCombinationsOfPhoneNo_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

#include "PalindromicSubstrs/palindromicSubstrs.h"
#include "gtest/gtest.h"

using namespace std;

class palindromicSubstrs_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<string,int>>{
};

TEST_P(palindromicSubstrs_MultipleParamsTests, CheckAns){
    string s = get<0>(GetParam());
    int expected = get<1>(GetParam());
    palindromicSubstrs soln;
    ASSERT_EQ(expected,soln.naive(s));
};

INSTANTIATE_TEST_CASE_P(
    PalindromicSubstrsTests,
    palindromicSubstrs_MultipleParamsTests,
    ::testing::Values(
        make_tuple("abc",3),make_tuple("aaa",6)
    )
);

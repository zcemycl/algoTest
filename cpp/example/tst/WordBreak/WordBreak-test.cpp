#include "WordBreak/wordBreak.h"
#include "gtest/gtest.h"

using namespace std;

class wordBreak_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(wordBreak_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,wordBreak::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    WordBreakTests,
    wordBreak_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

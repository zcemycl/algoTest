#include "LongestCommonSubseq/longestCommonSubseq.h"
#include "gtest/gtest.h"

using namespace std;

class longestCommonSubseq_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(longestCommonSubseq_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,longestCommonSubseq::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    LongestCommonSubseqTests,
    longestCommonSubseq_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

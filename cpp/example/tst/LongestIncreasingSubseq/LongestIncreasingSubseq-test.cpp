#include "LongestIncreasingSubseq/longestIncreasingSubseq.h"
#include "gtest/gtest.h"

using namespace std;

class longestIncreasingSubseq_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(longestIncreasingSubseq_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,longestIncreasingSubseq::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    LongestIncreasingSubseqTests,
    longestIncreasingSubseq_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);

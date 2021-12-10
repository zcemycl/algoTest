#include "LongestConsecutiveSeq/longestConsecutiveSeq.h"
#include "gtest/gtest.h"

using namespace std;

class longestConsecutiveSeq_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(longestConsecutiveSeq_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,longestConsecutiveSeq::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    LongestConsecutiveSeqTests,
    longestConsecutiveSeq_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
